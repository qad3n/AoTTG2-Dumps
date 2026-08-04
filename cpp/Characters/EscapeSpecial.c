// Type: Characters.EscapeSpecial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/EscapeSpecial.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Specials/EscapeSpecial.cs
// --------------------------------

// Characters.EscapeSpecial$$get_ActiveTime
// il2cpp: float Characters_EscapeSpecial__get_ActiveTime (Characters_EscapeSpecial_o* __this, const MethodInfo* method);
// 0x42f5680

float Characters_EscapeSpecial__get_ActiveTime(Characters_EscapeSpecial_o *__this,MethodInfo *method)

{
  return 0.64;
}


// Characters.EscapeSpecial$$.ctor
// il2cpp: void Characters_EscapeSpecial___ctor (Characters_EscapeSpecial_o* __this, Characters_BaseCharacter_o* owner, const MethodInfo* method);
// 0x42e40c0

void Characters_EscapeSpecial___ctor
               (Characters_EscapeSpecial_o *__this,Characters_BaseCharacter_o *owner,MethodInfo *method)

{
  Characters_RechargeableUseable___ctor
            ((Characters_RechargeableUseable_o *)__this,owner,0.0,(MethodInfo *)0x0);
  (__this->fields).MaxUses = 1;
  (__this->fields).Cooldown = 300.0;
  (__this->fields).UsesLeft = -1;
  (__this->fields).ReduceCooldownAmount = 50.0;
  Characters_BaseUseable__SetCooldownLeft((Characters_BaseUseable_o *)__this,300.0,(MethodInfo *)0x0);
  return;
}


// Characters.EscapeSpecial$$CanUse
// il2cpp: bool Characters_EscapeSpecial__CanUse (Characters_EscapeSpecial_o* __this, const MethodInfo* method);
// 0x42f5690

bool_conflict Characters_EscapeSpecial__CanUse(Characters_EscapeSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_c *pCVar2;
  Characters_Human_o *__this_00;
  System_Collections_Generic_Dictionary_Renderer__Material__o *pSVar3;
  Photon_Pun_PhotonView_o *__this_01;
  Outline_o *pOVar4;
  UnityEngine_Component_o *pUVar5;
  UnityEngine_Rigidbody_o *__this_02;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  Il2CppObject *pIVar11;
  char cVar12;
  bool_conflict bVar13;
  bool_conflict extraout_EAX;
  uint uVar14;
  Il2CppClass *pIVar15;
  System_Object_array *pSVar16;
  Il2CppObject *pIVar17;
  long lVar18;
  UnityEngine_Transform_o *pUVar19;
  System_String_o *pSVar20;
  Il2CppObject *pIVar21;
  System_Object_array *pSVar22;
  Il2CppClass **extraout_RAX;
  undefined8 uVar23;
  long *plVar24;
  long *plVar25;
  Il2CppClass **ppIVar26;
  Il2CppClass **ppIVar27;
  MethodInfo *pMVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 extraout_XMM0_Db;
  float fVar33;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar34;
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
  undefined4 uVar35;
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
  float fVar36;
  float fVar40;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  UnityEngine_Vector3_o UVar47;
  UnityEngine_Vector3_o UVar48;
  UnityEngine_Vector3_o UVar49;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o forward_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o value;
  UnityEngine_Quaternion_o UVar50;
  float local_168;
  float fStack_164;
  undefined1 local_148 [8];
  float fStack_140;
  float fStack_13c;
  undefined8 local_128;
  float local_10c;
  undefined1 local_108 [8];
  float fStack_100;
  float fStack_fc;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [8];
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float local_c4;
  undefined4 local_c0;
  float local_bc;
  undefined8 local_b8;
  float fStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [24];
  System_Object_array *pSStack_60;
  
  ppIVar26 = (Il2CppClass **)__this;
  if (g_data_057adee0 == '\0') {
    ppIVar26 = &TypeInfo_Human;
    il2cpp_runtime_helper_023445d0();
    g_data_057adee0 = '\x01';
  }
  pSVar16 = (System_Object_array *)(__this->fields)._owner;
  if (pSVar16 != (System_Object_array *)0x0) {
    pCVar2 = ((Il2CppClass_1 *)&pSVar16->obj)->image;
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if (((pCVar2->_2).naturalAligment < bVar1) ||
       ((pCVar2->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Human)) {
      il2cpp_runtime_helper_022b2fd0();
      ppIVar26 = (Il2CppClass **)pSVar16;
    }
    else {
      ppIVar26 = (Il2CppClass **)(System_Object_array *)0x0;
      if (((Il2CppType *)pSVar16->m_Items)[0xe].data != (System_Object_array *)0x0) {
        cVar12 = (*(((((Il2CppType *)pSVar16->m_Items)[0xe].data)->obj).klass)->vtable[7].methodPtr)();
        uVar14 = 0;
        if ((cVar12 != '\0') &&
           (bVar13 = Characters_BaseUseable__CanUse((Characters_BaseUseable_o *)__this,(MethodInfo *)0x0),
           (char)bVar13 != '\0')) {
          uVar14 = (uint)(*(int *)((long)((Il2CppType *)pSVar16->m_Items + 0x13) + 8) == 7);
        }
        return uVar14;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  plVar25 = (long *)ppIVar26;
  if (g_data_057adee1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_APGWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    ppIVar27 = &TypeInfo_ThunderspearWeapon;
    il2cpp_runtime_helper_023445d0();
    g_data_057adee1 = '\x01';
    plVar25 = (long *)ppIVar27;
  }
  pSVar16 = ((Il2CppType *)((System_Object_array *)ppIVar26)->m_Items)[1].data;
  if (pSVar16 != (System_Object_array *)0x0) {
    pCVar2 = ((Il2CppClass_1 *)&pSVar16->obj)->image;
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 <= (pCVar2->_2).naturalAligment) &&
       ((pCVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      pSVar22 = ((Il2CppType *)pSVar16->m_Items)[0xe].data;
      pIVar15 = (Il2CppClass *)0x0;
      if (pSVar22 != (System_Object_array *)0x0) {
        pIVar15 = (pSVar22->obj).klass;
        bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
        if ((bVar1 <= (pIVar15->_2).naturalAligment) &&
           ((pIVar15->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BladeWeapon)) {
          if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)pSVar16,
                     *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x218),0.1,0.0,(MethodInfo *)0x0);
          pSVar22 = ((Il2CppType *)pSVar16->m_Items)[0xe].data;
          pIVar15 = (Il2CppClass *)0x0;
          if (pSVar22 == (System_Object_array *)0x0) goto label_042f597f;
        }
        pIVar15 = (pSVar22->obj).klass;
        bVar1 = (TypeInfo_AHSSWeapon->_2).naturalAligment;
        if ((bVar1 <= (pIVar15->_2).naturalAligment) &&
           ((pIVar15->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AHSSWeapon)) {
          if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)pSVar16,
                     *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xf0),0.1,0.0,(MethodInfo *)0x0);
          pSVar22 = ((Il2CppType *)pSVar16->m_Items)[0xe].data;
          pIVar15 = (Il2CppClass *)0x0;
          if (pSVar22 == (System_Object_array *)0x0) goto label_042f597f;
        }
        pIVar15 = (pSVar22->obj).klass;
        bVar1 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
        if ((bVar1 <= (pIVar15->_2).naturalAligment) &&
           ((pIVar15->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_ThunderspearWeapon)) {
          if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)pSVar16,
                     *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x138),0.1,0.0,(MethodInfo *)0x0);
          pSVar22 = ((Il2CppType *)pSVar16->m_Items)[0xe].data;
          pIVar15 = (Il2CppClass *)0x0;
          if (pSVar22 == (System_Object_array *)0x0) goto label_042f597f;
        }
        pIVar15 = (pSVar22->obj).klass;
        bVar1 = (TypeInfo_APGWeapon->_2).naturalAligment;
        if ((bVar1 <= (pIVar15->_2).naturalAligment) &&
           (pIVar15 = (Il2CppClass *)(pIVar15->_2).typeHierarchy,
           *(Il2CppClass **)((long)pIVar15 + (ulong)bVar1 * 8 + -8) == TypeInfo_APGWeapon)) {
          if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)pSVar16,
                     *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xf0),0.1,0.0,(MethodInfo *)0x0);
          return extraout_EAX;
        }
      }
label_042f597f:
      return (bool_conflict)pIVar15;
    }
    plVar25 = (long *)pSVar16;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_60 = pSVar16;
  if (g_data_057adee2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_APGWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapsuleCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    il2cpp_runtime_helper_023445d0(&"GetHitRPC");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"ForearmLHurtbox");
    il2cpp_runtime_helper_023445d0(&"ForearmRHurtbox");
    g_data_057adee2 = '\x01';
  }
  __this_00 = ((Il2CppType *)((System_Object_array *)plVar25)->m_Items)[1].data;
  auVar37 = _local_d8;
  if (__this_00 == (Characters_Human_o *)0x0) goto label_042f73b4;
  bVar1 = (TypeInfo_Human->_2).naturalAligment;
  if (((__this_00->klass->_2).naturalAligment < bVar1) ||
     (ppIVar26 = (__this_00->klass->_2).typeHierarchy, ppIVar26[(ulong)bVar1 - 1] != TypeInfo_Human)) {
label_042f73b9:
    il2cpp_runtime_helper_022b2fd0(__this_00);
label_042f73c1:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (*(char *)&(__this_00->fields).FeedVictimName != '\0') goto label_042f73a2;
    plVar25 = (long *)(__this_00->fields).FPSMaterials;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar14 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)plVar25,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    ppIVar26 = (Il2CppClass **)(ulong)uVar14;
    if (((char)uVar14 == '\0') || ((__this_00->fields).FinishSetup != 7)) goto label_042f73a2;
    pSVar3 = (__this_00->fields).FPSMaterials;
    auVar37 = _local_d8;
    if (pSVar3 == (System_Collections_Generic_Dictionary_Renderer__Material__o *)0x0) {
label_042f73b4:
      _local_d8 = auVar37;
      il2cpp_runtime_helper_022b2c90();
      goto label_042f73b9;
    }
    if ((char)pSVar3[3].fields._freeCount != '\0') {
      plVar24 = &"ForearmLHurtbox";
      lVar18._0_4_ = pSVar3[1].fields._count;
      lVar18._4_4_ = pSVar3[1].fields._freeList;
      if (lVar18 != 0) goto label_042f5b9a;
      goto label_042f73b4;
    }
    plVar24 = &"ForearmRHurtbox";
    lVar18._0_4_ = pSVar3[1].fields._count;
    lVar18._4_4_ = pSVar3[1].fields._freeList;
    if (lVar18 == 0) goto label_042f73b4;
label_042f5b9a:
    pIVar21 = (Il2CppObject *)*plVar24;
    __this_01 = *(Photon_Pun_PhotonView_o **)(lVar18 + 0x20);
    pSVar16 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,5);
    lVar18 = *(long *)&(__this_00->fields).Dead;
    auVar37 = _local_d8;
    if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0x20), lVar18 == 0)) goto label_042f73b4;
    local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(lVar18 + 0x94));
    plVar25 = &g_data_057b9b70;
    pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_b8);
    auVar37 = _local_d8;
    if (pSVar16 == (System_Object_array *)0x0) goto label_042f73b4;
    if ((pIVar17 != (Il2CppObject *)0x0) &&
       (lVar18 = il2cpp_runtime_helper_023051f0(pIVar17,(((pSVar16->obj).klass)->_1).element_class), lVar18 == 0))
    goto label_042f73c6;
    if ((int)pSVar16->max_length == 0) goto label_042f73c1;
    pSVar16->m_Items[0] = pIVar17;
    il2cpp_runtime_helper_022b4080(pSVar16->m_Items,pIVar17);
    if ("" != (Il2CppObject *)0x0) {
      lVar18 = il2cpp_runtime_helper_023051f0("",(((pSVar16->obj).klass)->_1).element_class);
      if (lVar18 == 0) goto label_042f73c6;
      pIVar17 = "";
      if (1 < (uint)pSVar16->max_length) goto label_042f5c86;
      goto label_042f73c1;
    }
    pIVar17 = (Il2CppObject *)0x0;
    if ((uint)pSVar16->max_length < 2) goto label_042f73c1;
label_042f5c86:
    pIVar11 = "";
    pSVar16->m_Items[1] = pIVar17;
    il2cpp_runtime_helper_022b4080(pSVar16->m_Items + 1,pIVar11);
    local_f8 = (ulong)local_f8._4_4_ << 0x20;
    plVar25 = (long *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_f8);
    if (((System_Object_array *)plVar25 != (System_Object_array *)0x0) &&
       (lVar18 = il2cpp_runtime_helper_023051f0(plVar25,(((pSVar16->obj).klass)->_1).element_class), lVar18 == 0))
    goto label_042f73c6;
    if ((uint)pSVar16->max_length < 3) goto label_042f73c1;
    pSVar16->m_Items[2] = (Il2CppObject *)plVar25;
    il2cpp_runtime_helper_022b4080(pSVar16->m_Items + 2,plVar25);
    if ("" != (Il2CppObject *)0x0) {
      lVar18 = il2cpp_runtime_helper_023051f0("",(((pSVar16->obj).klass)->_1).element_class);
      if (lVar18 == 0) goto label_042f73c6;
      pIVar17 = "";
      if (3 < (uint)pSVar16->max_length) goto label_042f5d2d;
      goto label_042f73c1;
    }
    pIVar17 = (Il2CppObject *)0x0;
    if ((uint)pSVar16->max_length < 4) goto label_042f73c1;
label_042f5d2d:
    pIVar11 = "";
    pSVar16->m_Items[3] = pIVar17;
    il2cpp_runtime_helper_022b4080(pSVar16->m_Items + 3,pIVar11);
    if ((pIVar21 != (Il2CppObject *)0x0) &&
       (lVar18 = il2cpp_runtime_helper_023051f0(pIVar21,(((pSVar16->obj).klass)->_1).element_class), lVar18 == 0))
    goto label_042f73c6;
    if ((uint)pSVar16->max_length < 5) goto label_042f73c1;
    pSVar16->m_Items[4] = pIVar21;
    il2cpp_runtime_helper_022b4080(pSVar16->m_Items + 4,pIVar21);
    auVar37 = _local_d8;
    if (__this_01 == (Photon_Pun_PhotonView_o *)0x0) goto label_042f73b4;
    Photon_Pun_PhotonView__RPC(__this_01,"GetHitRPC",0,pSVar16,(MethodInfo *)0x0);
    Characters_Human__Ungrab(__this_00,1,0,0,(MethodInfo *)0x0);
    pSVar16 = (__this_00->fields).crossfadeCache;
    if (pSVar16 != (System_Object_array *)0x0) {
      pIVar15 = (pSVar16->obj).klass;
      bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
      if ((bVar1 <= (pIVar15->_2).naturalAligment) &&
         ((pIVar15->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BladeWeapon)) {
        plVar25 = &TypeInfo_EffectPrefabs;
        if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pOVar4 = (__this_00->fields).OutlineComponent;
        auVar37 = _local_d8;
        if ((pOVar4 != (Outline_o *)0x0) &&
           (pUVar5 = (UnityEngine_Component_o *)pOVar4[1].fields.outlineMaskAndFillMaterial,
           pUVar5 != (UnityEngine_Component_o *)0x0)) {
          plVar25 = *(long **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
          pUVar19 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0);
          auVar37 = _local_d8;
          if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
            UVar47 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
            UVar50 = UnityEngine_Quaternion__Internal_FromEulerRad
                               ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0);
            Effects_EffectSpawner__Spawn
                      ((System_String_o *)plVar25,UVar47,UVar50,1.0,1,(System_Object_array *)0x0,
                       (MethodInfo *)0x0);
            if (*(int *)((long)&TypeInfo_HumanSounds[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            Characters_BaseCharacter__PlaySound
                      ((Characters_BaseCharacter_o *)__this_00,
                       *(System_String_o **)(TypeInfo_HumanSounds[2].virtualMethodPointer + 8),(MethodInfo *)0x0);
            Characters_Human__SpecialActionState(__this_00,0.5,(MethodInfo *)0x0);
            pSVar16 = (__this_00->fields).crossfadeCache;
            plVar25 = (long *)&TypeInfo_HumanSounds;
            goto label_042f5ee5;
          }
        }
        goto label_042f73b4;
      }
    }
label_042f5ee5:
    if (pSVar16 == (System_Object_array *)0x0) {
label_042f733f:
      lVar18 = *(long *)&(__this_00->fields).Dead;
      auVar37 = _local_d8;
      if (lVar18 != 0) {
        __this_02 = *(UnityEngine_Rigidbody_o **)(lVar18 + 0x18);
        if (g_data_057a6844 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a6844 = '\x01';
        }
        plVar25 = (long *)0x0;
        auVar37 = _local_d8;
        if (__this_02 != (UnityEngine_Rigidbody_o *)0x0) {
          uVar23 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
          value.fields.x = (float)uVar23 * 30.0;
          value.fields.y = (float)((ulong)uVar23 >> 0x20) * 30.0;
          value.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 30.0;
          UnityEngine_Rigidbody__set_velocity(__this_02,value,(MethodInfo *)0x0);
          ppIVar26 = extraout_RAX;
label_042f73a2:
          return (bool_conflict)ppIVar26;
        }
      }
      goto label_042f73b4;
    }
    pIVar15 = (pSVar16->obj).klass;
    bVar1 = (TypeInfo_AHSSWeapon->_2).naturalAligment;
    if ((bVar1 <= (pIVar15->_2).naturalAligment) &&
       ((pIVar15->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AHSSWeapon)) {
      if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar18 = *(long *)&(__this_00->fields).Dead;
      auVar37 = _local_d8;
      if ((lVar18 != 0) &&
         (pUVar19 = *(UnityEngine_Transform_o **)(lVar18 + 0x10), pUVar19 != (UnityEngine_Transform_o *)0x0))
      {
        plVar25 = *(long **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x30);
        UVar47 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
        lVar18 = *(long *)&(__this_00->fields).Dead;
        auVar37 = _local_d8;
        if ((lVar18 != 0) &&
           (pUVar19 = *(UnityEngine_Transform_o **)(lVar18 + 0x10), pUVar19 != (UnityEngine_Transform_o *)0x0)
           ) {
          UVar48 = UnityEngine_Transform__get_up(pUVar19,(MethodInfo *)0x0);
          uVar23 = (*(__this_00->klass->vtable)._66_GetAimPoint.methodPtr)(__this_00);
          lVar18 = *(long *)&(__this_00->fields).Dead;
          auVar37 = _local_d8;
          if ((lVar18 != 0) &&
             (pUVar19 = *(UnityEngine_Transform_o **)(lVar18 + 0x10),
             pUVar19 != (UnityEngine_Transform_o *)0x0)) {
            UVar49 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
            fVar41 = UVar49.fields.x;
            fVar29 = UVar49.fields.y;
            fVar42 = extraout_XMM0_Dc_00;
            fVar33 = extraout_XMM0_Dd_00;
            if (g_data_057a6845 == '\0') {
              fStack_100 = extraout_XMM0_Dc_00;
              local_108 = (undefined1  [8])UVar49.fields._0_8_;
              fStack_fc = extraout_XMM0_Dd_00;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a6845 = '\x01';
              fVar41 = (float)local_108._0_4_;
              fVar29 = (float)local_108._4_4_;
              fVar42 = fStack_100;
              fVar33 = fStack_fc;
            }
            auVar37._0_4_ = (float)uVar23 - fVar41;
            auVar37._4_4_ = (float)((ulong)uVar23 >> 0x20) - fVar29;
            auVar37._8_4_ = extraout_XMM0_Dc - fVar42;
            auVar37._12_4_ = extraout_XMM0_Dd - fVar33;
            fVar41 = extraout_XMM1_Da - UVar49.fields.z;
            if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            local_128._0_4_ = UVar48.fields.x;
            local_128._4_4_ = UVar48.fields.y;
            uVar34 = 0;
            uVar35 = 0;
            fVar29 = fVar41 * fVar41 + auVar37._4_4_ * auVar37._4_4_ + auVar37._0_4_ * auVar37._0_4_;
            if (fVar29 < 0.0) {
              fVar29 = sqrtf(fVar29);
              uVar34 = extraout_XMM0_Dc_01;
              uVar35 = extraout_XMM0_Dd_01;
            }
            else {
              fVar29 = SQRT(fVar29);
            }
            local_148._0_4_ = UVar47.fields.x;
            local_148._4_4_ = UVar47.fields.y;
            UVar47.fields.z = UVar47.fields.z + UVar48.fields.z * 0.8;
            if (fVar29 <= 1e-05) {
              if (g_data_057a65d5 == '\0') {
                il2cpp_runtime_helper_023445d0();
                g_data_057a65d5 = '\x01';
              }
              uVar23 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
              fVar41 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
            }
            else {
              fVar41 = fVar41 / fVar29;
              auVar6._4_4_ = fVar29;
              auVar6._0_4_ = fVar29;
              auVar6._8_4_ = uVar34;
              auVar6._12_4_ = uVar35;
              auVar37 = divps(auVar37,auVar6);
              uVar23 = auVar37._0_8_;
            }
            UVar48.fields.z = fVar41;
            UVar48.fields.x = (float)(int)uVar23;
            UVar48.fields.y = (float)(int)((ulong)uVar23 >> 0x20);
            UVar50 = UnityEngine_Quaternion__LookRotation_4debb20(UVar48,(MethodInfo *)0x0);
            UVar47.fields.x = (float)local_148._0_4_ + (float)local_128 * 0.8;
            UVar47.fields.y = (float)local_148._4_4_ + local_128._4_4_ * 0.8;
            Effects_EffectSpawner__Spawn
                      ((System_String_o *)plVar25,UVar47,UVar50,1.0,1,(System_Object_array *)0x0,
                       (MethodInfo *)0x0);
            pOVar4 = (__this_00->fields).OutlineComponent;
            auVar37 = _local_d8;
            if ((pOVar4 != (Outline_o *)0x0) &&
               (pUVar5 = (UnityEngine_Component_o *)pOVar4[1].fields.outlineMaskAndFillMaterial,
               pUVar5 != (UnityEngine_Component_o *)0x0)) {
              plVar25 = *(long **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
              pUVar19 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0);
              auVar37 = _local_d8;
              if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
                UVar47 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
                UVar50 = UnityEngine_Quaternion__Internal_FromEulerRad
                                   ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0);
                Effects_EffectSpawner__Spawn
                          ((System_String_o *)plVar25,UVar47,UVar50,1.0,1,(System_Object_array *)0x0,
                           (MethodInfo *)0x0);
                pMVar28 = TypeInfo_HumanSounds;
                if (*(int *)((long)&TypeInfo_HumanSounds[2].parameters + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar20 = Characters_HumanSounds__GetRandomAHSSGunShot(pMVar28);
                Characters_BaseCharacter__PlaySound
                          ((Characters_BaseCharacter_o *)__this_00,pSVar20,(MethodInfo *)0x0);
                Characters_Human__SpecialActionState(__this_00,0.5,(MethodInfo *)0x0);
                pSVar16 = (__this_00->fields).crossfadeCache;
                if (pSVar16 == (System_Object_array *)0x0) goto label_042f733f;
                goto label_042f6252;
              }
            }
          }
        }
      }
      goto label_042f73b4;
    }
label_042f6252:
    pIVar15 = (pSVar16->obj).klass;
    bVar1 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
    if ((bVar1 <= (pIVar15->_2).naturalAligment) &&
       ((pIVar15->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_ThunderspearWeapon)) {
      if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar18 = *(long *)&(__this_00->fields).Dead;
      auVar37 = _local_d8;
      if ((lVar18 != 0) &&
         (pUVar19 = *(UnityEngine_Transform_o **)(lVar18 + 0x10), pUVar19 != (UnityEngine_Transform_o *)0x0))
      {
        pSVar20 = (System_String_o *)**(undefined8 **)(TypeInfo_EffectPrefabs + 0xb8);
        UVar47 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
        lVar18 = *(long *)&(__this_00->fields).Dead;
        auVar37 = _local_d8;
        if ((lVar18 != 0) &&
           (pUVar19 = *(UnityEngine_Transform_o **)(lVar18 + 0x10), pUVar19 != (UnityEngine_Transform_o *)0x0)
           ) {
          UVar48 = UnityEngine_Transform__get_up(pUVar19,(MethodInfo *)0x0);
          uVar23 = (*(__this_00->klass->vtable)._66_GetAimPoint.methodPtr)(__this_00);
          lVar18 = *(long *)&(__this_00->fields).Dead;
          auVar37 = _local_d8;
          if ((lVar18 != 0) &&
             (pUVar19 = *(UnityEngine_Transform_o **)(lVar18 + 0x10),
             pUVar19 != (UnityEngine_Transform_o *)0x0)) {
            UVar49 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
            fVar41 = UVar49.fields.x;
            fVar29 = UVar49.fields.y;
            fVar42 = extraout_XMM0_Dc_03;
            fVar33 = extraout_XMM0_Dd_03;
            if (g_data_057a6845 == '\0') {
              fStack_100 = extraout_XMM0_Dc_03;
              local_108 = (undefined1  [8])UVar49.fields._0_8_;
              fStack_fc = extraout_XMM0_Dd_03;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a6845 = '\x01';
              fVar41 = (float)local_108._0_4_;
              fVar29 = (float)local_108._4_4_;
              fVar42 = fStack_100;
              fVar33 = fStack_fc;
            }
            auVar38._0_4_ = (float)uVar23 - fVar41;
            auVar38._4_4_ = (float)((ulong)uVar23 >> 0x20) - fVar29;
            auVar38._8_4_ = extraout_XMM0_Dc_02 - fVar42;
            auVar38._12_4_ = extraout_XMM0_Dd_02 - fVar33;
            fVar41 = extraout_XMM1_Da_00 - UVar49.fields.z;
            if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            uVar34 = 0;
            uVar35 = 0;
            fVar29 = fVar41 * fVar41 + auVar38._4_4_ * auVar38._4_4_ + auVar38._0_4_ * auVar38._0_4_;
            if (fVar29 < 0.0) {
              fVar29 = sqrtf(fVar29);
              uVar34 = extraout_XMM0_Dc_04;
              uVar35 = extraout_XMM0_Dd_04;
              if (1e-05 < fVar29) goto label_042f641c;
label_042f6429:
              if (g_data_057a65d5 == '\0') {
                il2cpp_runtime_helper_023445d0();
                g_data_057a65d5 = '\x01';
              }
              uVar23 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
              fVar41 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
            }
            else {
              fVar29 = SQRT(fVar29);
              if (fVar29 <= 1e-05) goto label_042f6429;
label_042f641c:
              fVar41 = fVar41 / fVar29;
              auVar10._4_4_ = fVar29;
              auVar10._0_4_ = fVar29;
              auVar10._8_4_ = uVar34;
              auVar10._12_4_ = uVar35;
              auVar37 = divps(auVar38,auVar10);
              uVar23 = auVar37._0_8_;
            }
            UVar49.fields.z = fVar41;
            UVar49.fields.x = (float)(int)uVar23;
            UVar49.fields.y = (float)(int)((ulong)uVar23 >> 0x20);
            UVar50 = UnityEngine_Quaternion__LookRotation_4debb20(UVar49,(MethodInfo *)0x0);
            plVar25 = (long *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,3);
            local_b8 = 0;
            fStack_b0 = 0.0;
            uStack_ac = 0x3f800000;
            pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Color,&local_b8);
            auVar37 = _local_d8;
            if ((System_Object_array *)plVar25 != (System_Object_array *)0x0) {
              if ((pIVar21 == (Il2CppObject *)0x0) ||
                 (lVar18 = il2cpp_runtime_helper_023051f0(pIVar21,(((((System_Object_array *)plVar25)->obj).klass)->_1).
                                                      element_class), lVar18 != 0)) {
                if ((int)((System_Object_array *)plVar25)->max_length != 0) {
                  ((System_Object_array *)plVar25)->m_Items[0] = pIVar21;
                  il2cpp_runtime_helper_022b4080(((System_Object_array *)plVar25)->m_Items,pIVar21);
                  local_f8 = CONCAT44(local_f8._4_4_,1);
                  pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_f8);
                  if ((pIVar21 != (Il2CppObject *)0x0) &&
                     (lVar18 = il2cpp_runtime_helper_023051f0(pIVar21,(((((System_Object_array *)plVar25)->obj).klass)->_1
                                                          ).element_class), lVar18 == 0)) goto label_042f73c6;
                  if (1 < (uint)((System_Object_array *)plVar25)->max_length) {
                    ((System_Object_array *)plVar25)->m_Items[1] = pIVar21;
                    il2cpp_runtime_helper_022b4080(((System_Object_array *)plVar25)->m_Items + 1,pIVar21);
                    local_10c = (float)CONCAT31(local_10c._1_3_,1);
                    pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&local_10c);
                    if ((pIVar21 != (Il2CppObject *)0x0) &&
                       (lVar18 = il2cpp_runtime_helper_023051f0(pIVar21,(((((System_Object_array *)plVar25)->obj).klass)->
                                                            _1).element_class), lVar18 == 0))
                    goto label_042f73c6;
                    if (2 < (uint)((System_Object_array *)plVar25)->max_length) {
                      local_128._0_4_ = UVar48.fields.x;
                      local_128._4_4_ = UVar48.fields.y;
                      local_148._0_4_ = UVar47.fields.x;
                      local_148._4_4_ = UVar47.fields.y;
                      position.fields.z = UVar47.fields.z + UVar48.fields.z * 0.8;
                      ((System_Object_array *)plVar25)->m_Items[2] = pIVar21;
                      il2cpp_runtime_helper_022b4080(((System_Object_array *)plVar25)->m_Items + 2,pIVar21);
                      position.fields.x = (float)local_148._0_4_ + (float)local_128 * 0.8;
                      position.fields.y = (float)local_148._4_4_ + local_128._4_4_ * 0.8;
                      Effects_EffectSpawner__Spawn
                                (pSVar20,position,UVar50,4.0,1,(System_Object_array *)plVar25,
                                 (MethodInfo *)0x0);
                      lVar18 = *(long *)&(__this_00->fields).Dead;
                      auVar37 = _local_d8;
                      if ((lVar18 != 0) &&
                         (pUVar19 = *(UnityEngine_Transform_o **)(lVar18 + 0x10),
                         pUVar19 != (UnityEngine_Transform_o *)0x0)) {
                        plVar25 = *(long **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x60);
                        UVar47 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
                        lVar18 = *(long *)&(__this_00->fields).Dead;
                        auVar37 = _local_d8;
                        if ((lVar18 != 0) &&
                           (pUVar19 = *(UnityEngine_Transform_o **)(lVar18 + 0x10),
                           pUVar19 != (UnityEngine_Transform_o *)0x0)) {
                          UVar48 = UnityEngine_Transform__get_up(pUVar19,(MethodInfo *)0x0);
                          uVar23 = (*(__this_00->klass->vtable)._66_GetAimPoint.methodPtr)(__this_00);
                          lVar18 = *(long *)&(__this_00->fields).Dead;
                          auVar37 = _local_d8;
                          if ((lVar18 != 0) &&
                             (pUVar19 = *(UnityEngine_Transform_o **)(lVar18 + 0x10),
                             pUVar19 != (UnityEngine_Transform_o *)0x0)) {
                            UVar49 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
                            fVar41 = UVar49.fields.x;
                            fVar29 = UVar49.fields.y;
                            fVar42 = extraout_XMM0_Dc_06;
                            fVar33 = extraout_XMM0_Dd_06;
                            if (g_data_057a6845 == '\0') {
                              fStack_100 = extraout_XMM0_Dc_06;
                              local_108 = (undefined1  [8])UVar49.fields._0_8_;
                              fStack_fc = extraout_XMM0_Dd_06;
                              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                              g_data_057a6845 = '\x01';
                              fVar41 = (float)local_108._0_4_;
                              fVar29 = (float)local_108._4_4_;
                              fVar42 = fStack_100;
                              fVar33 = fStack_fc;
                            }
                            auVar39._0_4_ = (float)uVar23 - fVar41;
                            auVar39._4_4_ = (float)((ulong)uVar23 >> 0x20) - fVar29;
                            auVar39._8_4_ = extraout_XMM0_Dc_05 - fVar42;
                            auVar39._12_4_ = extraout_XMM0_Dd_05 - fVar33;
                            fVar41 = extraout_XMM1_Da_01 - UVar49.fields.z;
                            if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            local_128._0_4_ = UVar48.fields.x;
                            local_128._4_4_ = UVar48.fields.y;
                            uVar34 = 0;
                            uVar35 = 0;
                            fVar29 = fVar41 * fVar41 +
                                     auVar39._4_4_ * auVar39._4_4_ + auVar39._0_4_ * auVar39._0_4_;
                            if (fVar29 < 0.0) {
                              fVar29 = sqrtf(fVar29);
                              uVar34 = extraout_XMM0_Dc_07;
                              uVar35 = extraout_XMM0_Dd_07;
                            }
                            else {
                              fVar29 = SQRT(fVar29);
                            }
                            local_148._0_4_ = UVar47.fields.x;
                            local_148._4_4_ = UVar47.fields.y;
                            position_00.fields.z = UVar47.fields.z + UVar48.fields.z * 0.8;
                            if (fVar29 <= 1e-05) {
                              if (g_data_057a65d5 == '\0') {
                                il2cpp_runtime_helper_023445d0();
                                g_data_057a65d5 = '\x01';
                              }
                              uVar23 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                              fVar41 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                            }
                            else {
                              fVar41 = fVar41 / fVar29;
                              auVar7._4_4_ = fVar29;
                              auVar7._0_4_ = fVar29;
                              auVar7._8_4_ = uVar34;
                              auVar7._12_4_ = uVar35;
                              auVar37 = divps(auVar39,auVar7);
                              uVar23 = auVar37._0_8_;
                            }
                            forward.fields.z = fVar41;
                            forward.fields.x = (float)(int)uVar23;
                            forward.fields.y = (float)(int)((ulong)uVar23 >> 0x20);
                            UVar50 = UnityEngine_Quaternion__LookRotation_4debb20(forward,(MethodInfo *)0x0);
                            position_00.fields.x = (float)local_148._0_4_ + (float)local_128 * 0.8;
                            position_00.fields.y = (float)local_148._4_4_ + local_128._4_4_ * 0.8;
                            Effects_EffectSpawner__Spawn
                                      ((System_String_o *)plVar25,position_00,UVar50,4.0,1,
                                       (System_Object_array *)0x0,(MethodInfo *)0x0);
                            pOVar4 = (__this_00->fields).OutlineComponent;
                            auVar37 = _local_d8;
                            if ((pOVar4 != (Outline_o *)0x0) &&
                               (pUVar5 = (UnityEngine_Component_o *)
                                         pOVar4[1].fields.outlineMaskAndFillMaterial,
                               pUVar5 != (UnityEngine_Component_o *)0x0)) {
                              plVar25 = *(long **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
                              pUVar19 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0);
                              auVar37 = _local_d8;
                              if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
                                UVar47 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
                                UVar50 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                   ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),
                                                    (MethodInfo *)0x0);
                                Effects_EffectSpawner__Spawn
                                          ((System_String_o *)plVar25,UVar47,UVar50,1.0,1,
                                           (System_Object_array *)0x0,(MethodInfo *)0x0);
                                pMVar28 = TypeInfo_HumanSounds;
                                if (*(int *)((long)&TypeInfo_HumanSounds[2].parameters + 4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                pSVar20 = Characters_HumanSounds__GetRandomTSLaunch(pMVar28);
                                Characters_BaseCharacter__PlaySound
                                          ((Characters_BaseCharacter_o *)__this_00,pSVar20,(MethodInfo *)0x0);
                                Characters_Human__SpecialActionState(__this_00,0.5,(MethodInfo *)0x0);
                                pSVar16 = (__this_00->fields).crossfadeCache;
                                if (pSVar16 == (System_Object_array *)0x0) goto label_042f733f;
                                goto label_042f6925;
                              }
                            }
                          }
                        }
                      }
                      goto label_042f73b4;
                    }
                  }
                }
                goto label_042f73c1;
              }
              goto label_042f73c6;
            }
          }
        }
      }
      goto label_042f73b4;
    }
label_042f6925:
    pIVar15 = (pSVar16->obj).klass;
    bVar1 = (TypeInfo_APGWeapon->_2).naturalAligment;
    if (((pIVar15->_2).naturalAligment < bVar1) ||
       ((pIVar15->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_APGWeapon)) goto label_042f733f;
    uVar23 = (*(__this_00->klass->vtable)._66_GetAimPoint.methodPtr)(__this_00);
    local_148._4_4_ = (undefined4)((ulong)uVar23 >> 0x20);
    lVar18 = *(long *)&(__this_00->fields).Dead;
    auVar37 = _local_d8;
    if ((lVar18 == 0) ||
       (pUVar19 = *(UnityEngine_Transform_o **)(lVar18 + 0x10), pUVar19 == (UnityEngine_Transform_o *)0x0))
    goto label_042f73b4;
    UVar47 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    fVar42 = (float)local_148._4_4_ - UVar47.fields.y;
    fVar41 = extraout_XMM1_Da_02 - UVar47.fields.z;
    fVar29 = (float)uVar23 - UVar47.fields.x;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar41 = fVar29 * fVar29 + fVar42 * fVar42 + fVar41 * fVar41;
    if (fVar41 < 0.0) {
      fVar41 = sqrtf(fVar41);
    }
    else {
      fVar41 = SQRT(fVar41);
    }
    if ((fVar41 <= 1e-05) && (g_data_057a65d5 == '\0')) {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    lVar18 = *(long *)&(__this_00->fields).Dead;
    auVar37 = _local_d8;
    if ((lVar18 == 0) ||
       (pUVar19 = *(UnityEngine_Transform_o **)(lVar18 + 0x10), pUVar19 == (UnityEngine_Transform_o *)0x0))
    goto label_042f73b4;
    UVar47 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
    lVar18 = *(long *)&(__this_00->fields).Dead;
    auVar37 = _local_d8;
    if ((lVar18 == 0) ||
       (pUVar19 = *(UnityEngine_Transform_o **)(lVar18 + 0x10), pUVar19 == (UnityEngine_Transform_o *)0x0))
    goto label_042f73b4;
    UVar48 = UnityEngine_Transform__get_up(pUVar19,(MethodInfo *)0x0);
    local_168 = UVar47.fields.x;
    fStack_164 = UVar47.fields.y;
    local_168 = local_168 + UVar48.fields.x * 0.8;
    fStack_164 = fStack_164 + UVar48.fields.y * 0.8;
    fVar41 = UVar47.fields.z + UVar48.fields.z * 0.8;
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    local_148._0_4_ = (float)uVar23 - local_168;
    local_148._4_4_ = (float)local_148._4_4_ - fStack_164;
    fVar29 = extraout_XMM1_Da_02 - fVar41;
    fStack_140 = extraout_XMM0_Dc_08 - (extraout_XMM0_Dc_09 + extraout_XMM0_Dc_10 * 0.0);
    fStack_13c = extraout_XMM0_Dd_08 - (extraout_XMM0_Dd_09 + extraout_XMM0_Dd_10 * 0.0);
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar34 = (undefined4)extraout_XMM1_Qb;
    uVar35 = (undefined4)((ulong)extraout_XMM1_Qb >> 0x20);
    fVar42 = fVar29 * fVar29 +
             (float)local_148._4_4_ * (float)local_148._4_4_ + (float)local_148._0_4_ * (float)local_148._0_4_
    ;
    if (fVar42 < 0.0) {
      fVar42 = sqrtf(fVar42);
      uVar34 = extraout_XMM0_Dc_11;
      uVar35 = extraout_XMM0_Dd_11;
      if (1e-05 < fVar42) goto label_042f6ba2;
label_042f6bc7:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar23 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar42 = (float)uVar23;
      fVar33 = (float)((ulong)uVar23 >> 0x20);
      fVar32 = 0.0;
      fVar36 = 0.0;
      fVar29 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      pOVar4 = (__this_00->fields).OutlineComponent;
    }
    else {
      fVar42 = SQRT(fVar42);
      if (fVar42 <= 1e-05) goto label_042f6bc7;
label_042f6ba2:
      fVar29 = fVar29 / fVar42;
      auVar9._4_4_ = fVar42;
      auVar9._0_4_ = fVar42;
      auVar9._8_4_ = uVar34;
      auVar9._12_4_ = uVar35;
      auVar37 = divps(_local_148,auVar9);
      fVar42 = auVar37._0_4_;
      fVar33 = auVar37._4_4_;
      fVar32 = auVar37._8_4_;
      fVar36 = auVar37._12_4_;
      pOVar4 = (__this_00->fields).OutlineComponent;
    }
    auVar37 = _local_d8;
    if (((pOVar4 == (Outline_o *)0x0) || (pOVar4[2].klass == (Outline_c *)0x0)) ||
       (plVar25 = (long *)((pOVar4[2].klass)->_1).declaringType,
       (System_Object_array *)plVar25 == (System_Object_array *)0x0)) goto label_042f73b4;
    pCVar2 = ((Il2CppClass_1 *)&((System_Object_array *)plVar25)->obj)->image;
    bVar1 = (TypeInfo_CapsuleCollider->_2).naturalAligment;
    if (((pCVar2->_2).naturalAligment < bVar1) ||
       ((pCVar2->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CapsuleCollider)) goto label_042f73d5;
    UnityEngine_CapsuleCollider__set_radius((UnityEngine_CapsuleCollider_o *)plVar25,0.1,(MethodInfo *)0x0);
    local_108._0_4_ =
         UnityEngine_CapsuleCollider__get_height((UnityEngine_CapsuleCollider_o *)plVar25,(MethodInfo *)0x0);
    local_108._4_4_ = extraout_XMM0_Db;
    fStack_100 = (float)extraout_XMM0_Dc_12;
    fStack_fc = (float)extraout_XMM0_Dd_12;
    fVar30 = UnityEngine_CapsuleCollider__get_radius
                       ((UnityEngine_CapsuleCollider_o *)plVar25,(MethodInfo *)0x0);
    local_a8 = UnityEngine_CapsuleCollider__get_height
                         ((UnityEngine_CapsuleCollider_o *)plVar25,(MethodInfo *)0x0);
    uStack_a0 = extraout_XMM0_Dc_13;
    uStack_9c = extraout_XMM0_Dd_13;
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar18 = *(long *)&(__this_00->fields).Dead;
    auVar37 = _local_d8;
    if ((lVar18 == 0) ||
       (pUVar19 = *(UnityEngine_Transform_o **)(lVar18 + 0x10), pUVar19 == (UnityEngine_Transform_o *)0x0))
    goto label_042f73b4;
    pSVar20 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb8);
    UVar47 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
    lVar18 = *(long *)&(__this_00->fields).Dead;
    auVar37 = _local_d8;
    if ((lVar18 == 0) ||
       (pUVar19 = *(UnityEngine_Transform_o **)(lVar18 + 0x10), pUVar19 == (UnityEngine_Transform_o *)0x0))
    goto label_042f73b4;
    UVar48 = UnityEngine_Transform__get_up(pUVar19,(MethodInfo *)0x0);
    local_c4 = UVar48.fields.z;
    local_78._8_4_ = extraout_XMM0_Dc_14;
    local_78._0_8_ = UVar48.fields._0_8_;
    local_78._12_4_ = extraout_XMM0_Dd_14;
    local_d8 = (undefined1  [8])(*(__this_00->klass->vtable)._66_GetAimPoint.methodPtr)(__this_00);
    auVar37 = _local_d8;
    lVar18 = *(long *)&(__this_00->fields).Dead;
    if (lVar18 == 0) goto label_042f73b4;
    local_e8 = CONCAT44(local_e8._4_4_,extraout_XMM1_Da_03);
    fStack_d0 = (float)extraout_XMM0_Dc_15;
    fStack_cc = (float)extraout_XMM0_Dd_15;
    pUVar19 = *(UnityEngine_Transform_o **)(lVar18 + 0x10);
    auVar37 = _local_d8;
    if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_042f73b4;
    local_98._4_4_ = local_a8;
    local_98._0_4_ = local_a8;
    fStack_90 = (float)uStack_a0;
    fStack_8c = (float)uStack_9c;
    UVar48 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
    fVar44 = UVar48.fields.x;
    fVar31 = UVar48.fields.y;
    fVar40 = extraout_XMM0_Dc_16;
    fVar45 = extraout_XMM0_Dd_16;
    fVar46 = UVar48.fields.z;
    if (g_data_057a6845 == '\0') {
      fStack_80 = extraout_XMM0_Dc_16;
      local_88 = UVar48.fields._0_8_;
      fStack_7c = extraout_XMM0_Dd_16;
      local_c8 = UVar48.fields.z;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
      fVar44 = (float)local_88._0_4_;
      fVar31 = (float)local_88._4_4_;
      fVar40 = fStack_80;
      fVar45 = fStack_7c;
      fVar46 = local_c8;
    }
    auVar43._0_4_ = (float)local_d8._0_4_ - fVar44;
    auVar43._4_4_ = (float)local_d8._4_4_ - fVar31;
    auVar43._8_4_ = fStack_d0 - fVar40;
    auVar43._12_4_ = fStack_cc - fVar45;
    fVar31 = local_a8 * fVar29;
    fVar44 = (float)local_e8 - fVar46;
    fVar40 = (float)local_98._0_4_ * fVar42;
    fVar45 = (float)local_98._4_4_ * fVar33;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      local_e8 = CONCAT44(local_e8._4_4_,(float)local_e8 - fVar46);
      local_98._4_4_ = (float)local_98._4_4_ * fVar33;
      local_98._0_4_ = (float)local_98._0_4_ * fVar42;
      fStack_90 = fStack_90 * fVar32;
      fStack_8c = fStack_8c * fVar36;
      _local_d8 = auVar43;
      local_a8 = local_a8 * fVar29;
      il2cpp_runtime_helper_02337ed0();
      fVar31 = local_a8;
      auVar43 = _local_d8;
      fVar44 = (float)local_e8;
      fVar40 = (float)local_98._0_4_;
      fVar45 = (float)local_98._4_4_;
    }
    uVar34 = 0;
    uVar35 = 0;
    fVar32 = fVar44 * fVar44 + auVar43._4_4_ * auVar43._4_4_ + auVar43._0_4_ * auVar43._0_4_;
    if (fVar32 < 0.0) {
      local_e8 = CONCAT44(local_e8._4_4_,fVar44);
      _local_d8 = auVar43;
      fVar32 = sqrtf(fVar32);
      uVar34 = extraout_XMM0_Dc_17;
      uVar35 = extraout_XMM0_Dd_17;
      auVar43 = _local_d8;
      fVar44 = (float)local_e8;
    }
    else {
      fVar32 = SQRT(fVar32);
    }
    local_108._0_4_ = local_108._0_4_ * 1.2;
    fVar36 = (local_168 + local_168 + fVar40) * 0.5;
    fVar40 = (fStack_164 + fStack_164 + fVar45) * 0.5;
    fVar41 = (fVar41 + fVar41 + fVar31) * 0.5;
    if (fVar32 <= 1e-05) {
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0();
        g_data_057a65d5 = '\x01';
      }
      uVar23 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar44 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    else {
      fVar44 = fVar44 / fVar32;
      auVar8._4_4_ = fVar32;
      auVar8._0_4_ = fVar32;
      auVar8._8_4_ = uVar34;
      auVar8._12_4_ = uVar35;
      auVar37 = divps(auVar43,auVar8);
      uVar23 = auVar37._0_8_;
    }
    forward_00.fields.z = fVar44;
    forward_00.fields.x = (float)(int)uVar23;
    forward_00.fields.y = (float)(int)((ulong)uVar23 >> 0x20);
    auVar37 = ZEXT816(0) << 0x20;
    UVar50 = UnityEngine_Quaternion__LookRotation_4debb20(forward_00,(MethodInfo *)0x0);
    uStack_e0 = auVar37._8_8_;
    local_e8 = UVar50.fields._8_8_;
    fStack_d0 = (float)extraout_XMM0_Dc_18;
    local_d8 = (undefined1  [8])UVar50.fields._0_8_;
    fStack_cc = (float)extraout_XMM0_Dd_18;
    pSVar16 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,5);
    fVar42 = fVar42 * (float)local_108._0_4_ * 0.5;
    fVar33 = fVar33 * (float)local_108._0_4_ * 0.5;
    fVar29 = fVar29 * (float)local_108._0_4_ * 0.5;
    fStack_b0 = fVar29 + fVar41;
    local_b8 = CONCAT44(fVar33 + fVar40,fVar42 + fVar36);
    pSVar22 = (System_Object_array *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&local_b8);
    auVar37 = _local_d8;
    if (pSVar16 == (System_Object_array *)0x0) goto label_042f73b4;
    plVar25 = (long *)pSVar22;
    if ((pSVar22 == (System_Object_array *)0x0) ||
       (lVar18 = il2cpp_runtime_helper_023051f0(pSVar22,(((pSVar16->obj).klass)->_1).element_class), lVar18 != 0)) {
      if ((int)pSVar16->max_length != 0) {
        pSVar16->m_Items[0] = (Il2CppObject *)pSVar22;
        il2cpp_runtime_helper_022b4080(pSVar16->m_Items,pSVar22);
        local_f0 = fVar41 - fVar29;
        local_f8 = CONCAT44(fVar40 - fVar33,fVar36 - fVar42);
        plVar25 = (long *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&local_f8);
        if (((System_Object_array *)plVar25 != (System_Object_array *)0x0) &&
           (lVar18 = il2cpp_runtime_helper_023051f0(plVar25,(((pSVar16->obj).klass)->_1).element_class), lVar18 == 0))
        goto label_042f73c6;
        if (1 < (uint)pSVar16->max_length) {
          pSVar16->m_Items[1] = (Il2CppObject *)plVar25;
          il2cpp_runtime_helper_022b4080(pSVar16->m_Items + 1,plVar25);
          local_10c = fVar30 * 4.0;
          plVar25 = (long *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&local_10c);
          if (((System_Object_array *)plVar25 != (System_Object_array *)0x0) &&
             (lVar18 = il2cpp_runtime_helper_023051f0(plVar25,(((pSVar16->obj).klass)->_1).element_class), lVar18 == 0))
          goto label_042f73c6;
          if (2 < (uint)pSVar16->max_length) {
            pSVar16->m_Items[2] = (Il2CppObject *)plVar25;
            il2cpp_runtime_helper_022b4080(pSVar16->m_Items + 2,plVar25);
            local_bc = fVar30 * 4.0;
            plVar25 = (long *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&local_bc);
            if (((System_Object_array *)plVar25 != (System_Object_array *)0x0) &&
               (lVar18 = il2cpp_runtime_helper_023051f0(plVar25,(((pSVar16->obj).klass)->_1).element_class), lVar18 == 0))
            goto label_042f73c6;
            if (3 < (uint)pSVar16->max_length) {
              pSVar16->m_Items[3] = (Il2CppObject *)plVar25;
              il2cpp_runtime_helper_022b4080(pSVar16->m_Items + 3,plVar25);
              local_c0 = 0x3e800000;
              plVar25 = (long *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&local_c0);
              if (((System_Object_array *)plVar25 != (System_Object_array *)0x0) &&
                 (lVar18 = il2cpp_runtime_helper_023051f0(plVar25,(((pSVar16->obj).klass)->_1).element_class), lVar18 == 0
                 )) goto label_042f73c6;
              if (4 < (uint)pSVar16->max_length) {
                fVar41 = (float)local_78._0_4_ * 0.8;
                fVar29 = (float)local_78._4_4_ * 0.8;
                local_128._0_4_ = UVar47.fields.x;
                local_128._4_4_ = UVar47.fields.y;
                position_01.fields.z = UVar47.fields.z + local_c4 * 0.8;
                pSVar16->m_Items[4] = (Il2CppObject *)plVar25;
                il2cpp_runtime_helper_022b4080(pSVar16->m_Items + 4,plVar25);
                auVar37 = _local_d8;
                position_01.fields.x = (float)local_128 + fVar41;
                position_01.fields.y = local_128._4_4_ + fVar29;
                UVar50.fields.z = (float)local_e8;
                UVar50.fields.w = (float)local_e8._4_4_;
                UVar50.fields.x = (float)local_d8._0_4_;
                UVar50.fields.y = (float)local_d8._4_4_;
                _local_d8 = auVar37;
                Effects_EffectSpawner__Spawn(pSVar20,position_01,UVar50,4.0,1,pSVar16,(MethodInfo *)0x0);
                pOVar4 = (__this_00->fields).OutlineComponent;
                auVar37 = _local_d8;
                if ((pOVar4 != (Outline_o *)0x0) &&
                   (pUVar5 = (UnityEngine_Component_o *)pOVar4[1].fields.outlineMaskAndFillMaterial,
                   pUVar5 != (UnityEngine_Component_o *)0x0)) {
                  plVar25 = *(long **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
                  pUVar19 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0);
                  auVar37 = _local_d8;
                  if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
                    UVar47 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
                    UVar50 = UnityEngine_Quaternion__Internal_FromEulerRad
                                       ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0);
                    Effects_EffectSpawner__Spawn
                              ((System_String_o *)plVar25,UVar47,UVar50,1.0,1,(System_Object_array *)0x0,
                               (MethodInfo *)0x0);
                    pMVar28 = TypeInfo_HumanSounds;
                    if (*(int *)((long)&TypeInfo_HumanSounds[2].parameters + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar20 = Characters_HumanSounds__GetRandomAPGShot(pMVar28);
                    Characters_BaseCharacter__PlaySound
                              ((Characters_BaseCharacter_o *)__this_00,pSVar20,(MethodInfo *)0x0);
                    Characters_Human__SpecialActionState(__this_00,0.5,(MethodInfo *)0x0);
                    goto label_042f733f;
                  }
                }
                goto label_042f73b4;
              }
            }
          }
        }
      }
      goto label_042f73c1;
    }
  }
label_042f73c6:
  uVar23 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar23,0);
label_042f73d5:
  il2cpp_runtime_helper_022b2fd0(plVar25);
  return 0;
}


// Characters.EscapeSpecial$$Activate
// il2cpp: void Characters_EscapeSpecial__Activate (Characters_EscapeSpecial_o* __this, const MethodInfo* method);
// 0x42f5740

void Characters_EscapeSpecial__Activate(Characters_EscapeSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_c *pCVar2;
  Il2CppClass *pIVar3;
  Characters_Human_o *__this_00;
  System_Collections_Generic_Dictionary_Renderer__Material__o *pSVar4;
  Photon_Pun_PhotonView_o *__this_01;
  Outline_o *pOVar5;
  UnityEngine_Component_o *pUVar6;
  UnityEngine_Rigidbody_o *__this_02;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  Il2CppObject *pIVar12;
  bool_conflict bVar13;
  System_Object_array *pSVar14;
  Il2CppObject *pIVar15;
  long lVar16;
  UnityEngine_Transform_o *pUVar17;
  System_String_o *pSVar18;
  Il2CppObject *pIVar19;
  System_Object_array *pSVar20;
  undefined8 uVar21;
  long *plVar22;
  long *plVar23;
  Il2CppClass **ppIVar24;
  MethodInfo *pMVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 extraout_XMM0_Db;
  float fVar30;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 uVar31;
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
  undefined4 uVar32;
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
  float fVar33;
  float fVar37;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  UnityEngine_Vector3_o UVar44;
  UnityEngine_Vector3_o UVar45;
  UnityEngine_Vector3_o UVar46;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o forward;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o forward_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o value;
  UnityEngine_Quaternion_o UVar47;
  float fStack_150;
  float fStack_14c;
  undefined1 auStack_130 [8];
  float fStack_128;
  float fStack_124;
  undefined8 uStack_110;
  float fStack_f4;
  undefined1 auStack_f0 [8];
  float fStack_e8;
  float fStack_e4;
  undefined8 uStack_e0;
  float fStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [8];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  float fStack_98;
  undefined4 uStack_94;
  float fStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [8];
  float fStack_78;
  float fStack_74;
  undefined1 auStack_70 [8];
  float fStack_68;
  float fStack_64;
  undefined1 auStack_60 [24];
  System_Object_array *pSStack_48;
  
  plVar23 = (long *)__this;
  if (g_data_057adee1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_APGWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    ppIVar24 = &TypeInfo_ThunderspearWeapon;
    il2cpp_runtime_helper_023445d0();
    g_data_057adee1 = '\x01';
    plVar23 = (long *)ppIVar24;
  }
  pSVar14 = (System_Object_array *)(__this->fields)._owner;
  if (pSVar14 != (System_Object_array *)0x0) {
    pCVar2 = ((Il2CppClass_1 *)&pSVar14->obj)->image;
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 <= (pCVar2->_2).naturalAligment) &&
       ((pCVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      pSVar20 = ((Il2CppType *)pSVar14->m_Items)[0xe].data;
      if (pSVar20 != (System_Object_array *)0x0) {
        pIVar3 = (pSVar20->obj).klass;
        bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
        if ((bVar1 <= (pIVar3->_2).naturalAligment) &&
           ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BladeWeapon)) {
          if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)pSVar14,
                     *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x218),0.1,0.0,(MethodInfo *)0x0);
          pSVar20 = ((Il2CppType *)pSVar14->m_Items)[0xe].data;
          if (pSVar20 == (System_Object_array *)0x0) {
            return;
          }
        }
        pIVar3 = (pSVar20->obj).klass;
        bVar1 = (TypeInfo_AHSSWeapon->_2).naturalAligment;
        if ((bVar1 <= (pIVar3->_2).naturalAligment) &&
           ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AHSSWeapon)) {
          if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)pSVar14,
                     *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xf0),0.1,0.0,(MethodInfo *)0x0);
          pSVar20 = ((Il2CppType *)pSVar14->m_Items)[0xe].data;
          if (pSVar20 == (System_Object_array *)0x0) {
            return;
          }
        }
        pIVar3 = (pSVar20->obj).klass;
        bVar1 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
        if ((bVar1 <= (pIVar3->_2).naturalAligment) &&
           ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_ThunderspearWeapon)) {
          if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)pSVar14,
                     *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x138),0.1,0.0,(MethodInfo *)0x0);
          pSVar20 = ((Il2CppType *)pSVar14->m_Items)[0xe].data;
          if (pSVar20 == (System_Object_array *)0x0) {
            return;
          }
        }
        pIVar3 = (pSVar20->obj).klass;
        bVar1 = (TypeInfo_APGWeapon->_2).naturalAligment;
        if ((bVar1 <= (pIVar3->_2).naturalAligment) &&
           ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_APGWeapon)) {
          if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)pSVar14,
                     *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0xf0),0.1,0.0,(MethodInfo *)0x0);
          return;
        }
      }
      return;
    }
    plVar23 = (long *)pSVar14;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_48 = pSVar14;
  if (g_data_057adee2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_APGWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapsuleCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    il2cpp_runtime_helper_023445d0(&"GetHitRPC");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"ForearmLHurtbox");
    il2cpp_runtime_helper_023445d0(&"ForearmRHurtbox");
    g_data_057adee2 = '\x01';
  }
  __this_00 = ((Il2CppType *)((System_Object_array *)plVar23)->m_Items)[1].data;
  auVar34 = _auStack_c0;
  if (__this_00 == (Characters_Human_o *)0x0) goto label_042f73b4;
  bVar1 = (TypeInfo_Human->_2).naturalAligment;
  if (((__this_00->klass->_2).naturalAligment < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Human)) {
label_042f73b9:
    il2cpp_runtime_helper_022b2fd0(__this_00);
label_042f73c1:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (*(char *)&(__this_00->fields).FeedVictimName != '\0') {
      return;
    }
    plVar23 = (long *)(__this_00->fields).FPSMaterials;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar13 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)plVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
      return;
    }
    if ((__this_00->fields).FinishSetup != 7) {
      return;
    }
    pSVar4 = (__this_00->fields).FPSMaterials;
    auVar34 = _auStack_c0;
    if (pSVar4 == (System_Collections_Generic_Dictionary_Renderer__Material__o *)0x0) {
label_042f73b4:
      _auStack_c0 = auVar34;
      il2cpp_runtime_helper_022b2c90();
      goto label_042f73b9;
    }
    if ((char)pSVar4[3].fields._freeCount != '\0') {
      plVar22 = &"ForearmLHurtbox";
      lVar16._0_4_ = pSVar4[1].fields._count;
      lVar16._4_4_ = pSVar4[1].fields._freeList;
      if (lVar16 != 0) goto label_042f5b9a;
      goto label_042f73b4;
    }
    plVar22 = &"ForearmRHurtbox";
    lVar16._0_4_ = pSVar4[1].fields._count;
    lVar16._4_4_ = pSVar4[1].fields._freeList;
    if (lVar16 == 0) goto label_042f73b4;
label_042f5b9a:
    pIVar19 = (Il2CppObject *)*plVar22;
    __this_01 = *(Photon_Pun_PhotonView_o **)(lVar16 + 0x20);
    pSVar14 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,5);
    lVar16 = *(long *)&(__this_00->fields).Dead;
    auVar34 = _auStack_c0;
    if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x20), lVar16 == 0)) goto label_042f73b4;
    uStack_a0 = CONCAT44(uStack_a0._4_4_,*(undefined4 *)(lVar16 + 0x94));
    plVar23 = &g_data_057b9b70;
    pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_a0);
    auVar34 = _auStack_c0;
    if (pSVar14 == (System_Object_array *)0x0) goto label_042f73b4;
    if ((pIVar15 != (Il2CppObject *)0x0) &&
       (lVar16 = il2cpp_runtime_helper_023051f0(pIVar15,(((pSVar14->obj).klass)->_1).element_class), lVar16 == 0))
    goto label_042f73c6;
    if ((int)pSVar14->max_length == 0) goto label_042f73c1;
    pSVar14->m_Items[0] = pIVar15;
    il2cpp_runtime_helper_022b4080(pSVar14->m_Items,pIVar15);
    if ("" != (Il2CppObject *)0x0) {
      lVar16 = il2cpp_runtime_helper_023051f0("",(((pSVar14->obj).klass)->_1).element_class);
      if (lVar16 == 0) goto label_042f73c6;
      pIVar15 = "";
      if (1 < (uint)pSVar14->max_length) goto label_042f5c86;
      goto label_042f73c1;
    }
    pIVar15 = (Il2CppObject *)0x0;
    if ((uint)pSVar14->max_length < 2) goto label_042f73c1;
label_042f5c86:
    pIVar12 = "";
    pSVar14->m_Items[1] = pIVar15;
    il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 1,pIVar12);
    uStack_e0 = (ulong)uStack_e0._4_4_ << 0x20;
    plVar23 = (long *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_e0);
    if (((System_Object_array *)plVar23 != (System_Object_array *)0x0) &&
       (lVar16 = il2cpp_runtime_helper_023051f0(plVar23,(((pSVar14->obj).klass)->_1).element_class), lVar16 == 0))
    goto label_042f73c6;
    if ((uint)pSVar14->max_length < 3) goto label_042f73c1;
    pSVar14->m_Items[2] = (Il2CppObject *)plVar23;
    il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 2,plVar23);
    if ("" != (Il2CppObject *)0x0) {
      lVar16 = il2cpp_runtime_helper_023051f0("",(((pSVar14->obj).klass)->_1).element_class);
      if (lVar16 == 0) goto label_042f73c6;
      pIVar15 = "";
      if (3 < (uint)pSVar14->max_length) goto label_042f5d2d;
      goto label_042f73c1;
    }
    pIVar15 = (Il2CppObject *)0x0;
    if ((uint)pSVar14->max_length < 4) goto label_042f73c1;
label_042f5d2d:
    pIVar12 = "";
    pSVar14->m_Items[3] = pIVar15;
    il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 3,pIVar12);
    if ((pIVar19 != (Il2CppObject *)0x0) &&
       (lVar16 = il2cpp_runtime_helper_023051f0(pIVar19,(((pSVar14->obj).klass)->_1).element_class), lVar16 == 0))
    goto label_042f73c6;
    if ((uint)pSVar14->max_length < 5) goto label_042f73c1;
    pSVar14->m_Items[4] = pIVar19;
    il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 4,pIVar19);
    auVar34 = _auStack_c0;
    if (__this_01 == (Photon_Pun_PhotonView_o *)0x0) goto label_042f73b4;
    Photon_Pun_PhotonView__RPC(__this_01,"GetHitRPC",0,pSVar14,(MethodInfo *)0x0);
    Characters_Human__Ungrab(__this_00,1,0,0,(MethodInfo *)0x0);
    pSVar14 = (__this_00->fields).crossfadeCache;
    if (pSVar14 != (System_Object_array *)0x0) {
      pIVar3 = (pSVar14->obj).klass;
      bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
      if ((bVar1 <= (pIVar3->_2).naturalAligment) &&
         ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BladeWeapon)) {
        plVar23 = &TypeInfo_EffectPrefabs;
        if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pOVar5 = (__this_00->fields).OutlineComponent;
        auVar34 = _auStack_c0;
        if ((pOVar5 != (Outline_o *)0x0) &&
           (pUVar6 = (UnityEngine_Component_o *)pOVar5[1].fields.outlineMaskAndFillMaterial,
           pUVar6 != (UnityEngine_Component_o *)0x0)) {
          plVar23 = *(long **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
          pUVar17 = UnityEngine_Component__get_transform(pUVar6,(MethodInfo *)0x0);
          auVar34 = _auStack_c0;
          if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
            UVar44 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
            UVar47 = UnityEngine_Quaternion__Internal_FromEulerRad
                               ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0);
            Effects_EffectSpawner__Spawn
                      ((System_String_o *)plVar23,UVar44,UVar47,1.0,1,(System_Object_array *)0x0,
                       (MethodInfo *)0x0);
            if (*(int *)((long)&TypeInfo_HumanSounds[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            Characters_BaseCharacter__PlaySound
                      ((Characters_BaseCharacter_o *)__this_00,
                       *(System_String_o **)(TypeInfo_HumanSounds[2].virtualMethodPointer + 8),(MethodInfo *)0x0);
            Characters_Human__SpecialActionState(__this_00,0.5,(MethodInfo *)0x0);
            pSVar14 = (__this_00->fields).crossfadeCache;
            plVar23 = (long *)&TypeInfo_HumanSounds;
            goto label_042f5ee5;
          }
        }
        goto label_042f73b4;
      }
    }
label_042f5ee5:
    if (pSVar14 == (System_Object_array *)0x0) {
label_042f733f:
      lVar16 = *(long *)&(__this_00->fields).Dead;
      auVar34 = _auStack_c0;
      if (lVar16 != 0) {
        __this_02 = *(UnityEngine_Rigidbody_o **)(lVar16 + 0x18);
        if (g_data_057a6844 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a6844 = '\x01';
        }
        plVar23 = (long *)0x0;
        auVar34 = _auStack_c0;
        if (__this_02 != (UnityEngine_Rigidbody_o *)0x0) {
          uVar21 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
          value.fields.x = (float)uVar21 * 30.0;
          value.fields.y = (float)((ulong)uVar21 >> 0x20) * 30.0;
          value.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 30.0;
          UnityEngine_Rigidbody__set_velocity(__this_02,value,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_042f73b4;
    }
    pIVar3 = (pSVar14->obj).klass;
    bVar1 = (TypeInfo_AHSSWeapon->_2).naturalAligment;
    if ((bVar1 <= (pIVar3->_2).naturalAligment) &&
       ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AHSSWeapon)) {
      if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar16 = *(long *)&(__this_00->fields).Dead;
      auVar34 = _auStack_c0;
      if ((lVar16 != 0) &&
         (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10), pUVar17 != (UnityEngine_Transform_o *)0x0))
      {
        plVar23 = *(long **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x30);
        UVar44 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
        lVar16 = *(long *)&(__this_00->fields).Dead;
        auVar34 = _auStack_c0;
        if ((lVar16 != 0) &&
           (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10), pUVar17 != (UnityEngine_Transform_o *)0x0)
           ) {
          UVar45 = UnityEngine_Transform__get_up(pUVar17,(MethodInfo *)0x0);
          uVar21 = (*(__this_00->klass->vtable)._66_GetAimPoint.methodPtr)(__this_00);
          lVar16 = *(long *)&(__this_00->fields).Dead;
          auVar34 = _auStack_c0;
          if ((lVar16 != 0) &&
             (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10),
             pUVar17 != (UnityEngine_Transform_o *)0x0)) {
            UVar46 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
            fVar38 = UVar46.fields.x;
            fVar26 = UVar46.fields.y;
            fVar39 = extraout_XMM0_Dc_00;
            fVar30 = extraout_XMM0_Dd_00;
            if (g_data_057a6845 == '\0') {
              fStack_e8 = extraout_XMM0_Dc_00;
              auStack_f0 = (undefined1  [8])UVar46.fields._0_8_;
              fStack_e4 = extraout_XMM0_Dd_00;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a6845 = '\x01';
              fVar38 = (float)auStack_f0._0_4_;
              fVar26 = (float)auStack_f0._4_4_;
              fVar39 = fStack_e8;
              fVar30 = fStack_e4;
            }
            auVar34._0_4_ = (float)uVar21 - fVar38;
            auVar34._4_4_ = (float)((ulong)uVar21 >> 0x20) - fVar26;
            auVar34._8_4_ = extraout_XMM0_Dc - fVar39;
            auVar34._12_4_ = extraout_XMM0_Dd - fVar30;
            fVar38 = extraout_XMM1_Da - UVar46.fields.z;
            if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            uStack_110._0_4_ = UVar45.fields.x;
            uStack_110._4_4_ = UVar45.fields.y;
            uVar31 = 0;
            uVar32 = 0;
            fVar26 = fVar38 * fVar38 + auVar34._4_4_ * auVar34._4_4_ + auVar34._0_4_ * auVar34._0_4_;
            if (fVar26 < 0.0) {
              fVar26 = sqrtf(fVar26);
              uVar31 = extraout_XMM0_Dc_01;
              uVar32 = extraout_XMM0_Dd_01;
            }
            else {
              fVar26 = SQRT(fVar26);
            }
            auStack_130._0_4_ = UVar44.fields.x;
            auStack_130._4_4_ = UVar44.fields.y;
            UVar44.fields.z = UVar44.fields.z + UVar45.fields.z * 0.8;
            if (fVar26 <= 1e-05) {
              if (g_data_057a65d5 == '\0') {
                il2cpp_runtime_helper_023445d0();
                g_data_057a65d5 = '\x01';
              }
              uVar21 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
              fVar38 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
            }
            else {
              fVar38 = fVar38 / fVar26;
              auVar7._4_4_ = fVar26;
              auVar7._0_4_ = fVar26;
              auVar7._8_4_ = uVar31;
              auVar7._12_4_ = uVar32;
              auVar34 = divps(auVar34,auVar7);
              uVar21 = auVar34._0_8_;
            }
            UVar45.fields.z = fVar38;
            UVar45.fields.x = (float)(int)uVar21;
            UVar45.fields.y = (float)(int)((ulong)uVar21 >> 0x20);
            UVar47 = UnityEngine_Quaternion__LookRotation_4debb20(UVar45,(MethodInfo *)0x0);
            UVar44.fields.x = (float)auStack_130._0_4_ + (float)uStack_110 * 0.8;
            UVar44.fields.y = (float)auStack_130._4_4_ + uStack_110._4_4_ * 0.8;
            Effects_EffectSpawner__Spawn
                      ((System_String_o *)plVar23,UVar44,UVar47,1.0,1,(System_Object_array *)0x0,
                       (MethodInfo *)0x0);
            pOVar5 = (__this_00->fields).OutlineComponent;
            auVar34 = _auStack_c0;
            if ((pOVar5 != (Outline_o *)0x0) &&
               (pUVar6 = (UnityEngine_Component_o *)pOVar5[1].fields.outlineMaskAndFillMaterial,
               pUVar6 != (UnityEngine_Component_o *)0x0)) {
              plVar23 = *(long **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
              pUVar17 = UnityEngine_Component__get_transform(pUVar6,(MethodInfo *)0x0);
              auVar34 = _auStack_c0;
              if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
                UVar44 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
                UVar47 = UnityEngine_Quaternion__Internal_FromEulerRad
                                   ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0);
                Effects_EffectSpawner__Spawn
                          ((System_String_o *)plVar23,UVar44,UVar47,1.0,1,(System_Object_array *)0x0,
                           (MethodInfo *)0x0);
                pMVar25 = TypeInfo_HumanSounds;
                if (*(int *)((long)&TypeInfo_HumanSounds[2].parameters + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar18 = Characters_HumanSounds__GetRandomAHSSGunShot(pMVar25);
                Characters_BaseCharacter__PlaySound
                          ((Characters_BaseCharacter_o *)__this_00,pSVar18,(MethodInfo *)0x0);
                Characters_Human__SpecialActionState(__this_00,0.5,(MethodInfo *)0x0);
                pSVar14 = (__this_00->fields).crossfadeCache;
                if (pSVar14 == (System_Object_array *)0x0) goto label_042f733f;
                goto label_042f6252;
              }
            }
          }
        }
      }
      goto label_042f73b4;
    }
label_042f6252:
    pIVar3 = (pSVar14->obj).klass;
    bVar1 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
    if ((bVar1 <= (pIVar3->_2).naturalAligment) &&
       ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_ThunderspearWeapon)) {
      if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar16 = *(long *)&(__this_00->fields).Dead;
      auVar34 = _auStack_c0;
      if ((lVar16 != 0) &&
         (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10), pUVar17 != (UnityEngine_Transform_o *)0x0))
      {
        pSVar18 = (System_String_o *)**(undefined8 **)(TypeInfo_EffectPrefabs + 0xb8);
        UVar44 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
        lVar16 = *(long *)&(__this_00->fields).Dead;
        auVar34 = _auStack_c0;
        if ((lVar16 != 0) &&
           (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10), pUVar17 != (UnityEngine_Transform_o *)0x0)
           ) {
          UVar45 = UnityEngine_Transform__get_up(pUVar17,(MethodInfo *)0x0);
          uVar21 = (*(__this_00->klass->vtable)._66_GetAimPoint.methodPtr)(__this_00);
          lVar16 = *(long *)&(__this_00->fields).Dead;
          auVar34 = _auStack_c0;
          if ((lVar16 != 0) &&
             (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10),
             pUVar17 != (UnityEngine_Transform_o *)0x0)) {
            UVar46 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
            fVar38 = UVar46.fields.x;
            fVar26 = UVar46.fields.y;
            fVar39 = extraout_XMM0_Dc_03;
            fVar30 = extraout_XMM0_Dd_03;
            if (g_data_057a6845 == '\0') {
              fStack_e8 = extraout_XMM0_Dc_03;
              auStack_f0 = (undefined1  [8])UVar46.fields._0_8_;
              fStack_e4 = extraout_XMM0_Dd_03;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a6845 = '\x01';
              fVar38 = (float)auStack_f0._0_4_;
              fVar26 = (float)auStack_f0._4_4_;
              fVar39 = fStack_e8;
              fVar30 = fStack_e4;
            }
            auVar35._0_4_ = (float)uVar21 - fVar38;
            auVar35._4_4_ = (float)((ulong)uVar21 >> 0x20) - fVar26;
            auVar35._8_4_ = extraout_XMM0_Dc_02 - fVar39;
            auVar35._12_4_ = extraout_XMM0_Dd_02 - fVar30;
            fVar38 = extraout_XMM1_Da_00 - UVar46.fields.z;
            if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            uVar31 = 0;
            uVar32 = 0;
            fVar26 = fVar38 * fVar38 + auVar35._4_4_ * auVar35._4_4_ + auVar35._0_4_ * auVar35._0_4_;
            if (fVar26 < 0.0) {
              fVar26 = sqrtf(fVar26);
              uVar31 = extraout_XMM0_Dc_04;
              uVar32 = extraout_XMM0_Dd_04;
              if (fVar26 <= 1e-05) goto label_042f6429;
label_042f641c:
              fVar38 = fVar38 / fVar26;
              auVar11._4_4_ = fVar26;
              auVar11._0_4_ = fVar26;
              auVar11._8_4_ = uVar31;
              auVar11._12_4_ = uVar32;
              auVar34 = divps(auVar35,auVar11);
              uVar21 = auVar34._0_8_;
            }
            else {
              fVar26 = SQRT(fVar26);
              if (1e-05 < fVar26) goto label_042f641c;
label_042f6429:
              if (g_data_057a65d5 == '\0') {
                il2cpp_runtime_helper_023445d0();
                g_data_057a65d5 = '\x01';
              }
              uVar21 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
              fVar38 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
            }
            UVar46.fields.z = fVar38;
            UVar46.fields.x = (float)(int)uVar21;
            UVar46.fields.y = (float)(int)((ulong)uVar21 >> 0x20);
            UVar47 = UnityEngine_Quaternion__LookRotation_4debb20(UVar46,(MethodInfo *)0x0);
            plVar23 = (long *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,3);
            uStack_a0 = 0;
            fStack_98 = 0.0;
            uStack_94 = 0x3f800000;
            pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Color,&uStack_a0);
            auVar34 = _auStack_c0;
            if ((System_Object_array *)plVar23 != (System_Object_array *)0x0) {
              if ((pIVar19 == (Il2CppObject *)0x0) ||
                 (lVar16 = il2cpp_runtime_helper_023051f0(pIVar19,(((((System_Object_array *)plVar23)->obj).klass)->_1).
                                                      element_class), lVar16 != 0)) {
                if ((int)((System_Object_array *)plVar23)->max_length != 0) {
                  ((System_Object_array *)plVar23)->m_Items[0] = pIVar19;
                  il2cpp_runtime_helper_022b4080(((System_Object_array *)plVar23)->m_Items,pIVar19);
                  uStack_e0 = CONCAT44(uStack_e0._4_4_,1);
                  pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_e0);
                  if ((pIVar19 != (Il2CppObject *)0x0) &&
                     (lVar16 = il2cpp_runtime_helper_023051f0(pIVar19,(((((System_Object_array *)plVar23)->obj).klass)->_1
                                                          ).element_class), lVar16 == 0)) goto label_042f73c6;
                  if (1 < (uint)((System_Object_array *)plVar23)->max_length) {
                    ((System_Object_array *)plVar23)->m_Items[1] = pIVar19;
                    il2cpp_runtime_helper_022b4080(((System_Object_array *)plVar23)->m_Items + 1,pIVar19);
                    fStack_f4 = (float)CONCAT31(fStack_f4._1_3_,1);
                    pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&fStack_f4);
                    if ((pIVar19 != (Il2CppObject *)0x0) &&
                       (lVar16 = il2cpp_runtime_helper_023051f0(pIVar19,(((((System_Object_array *)plVar23)->obj).klass)->
                                                            _1).element_class), lVar16 == 0))
                    goto label_042f73c6;
                    if (2 < (uint)((System_Object_array *)plVar23)->max_length) {
                      uStack_110._0_4_ = UVar45.fields.x;
                      uStack_110._4_4_ = UVar45.fields.y;
                      auStack_130._0_4_ = UVar44.fields.x;
                      auStack_130._4_4_ = UVar44.fields.y;
                      position.fields.z = UVar44.fields.z + UVar45.fields.z * 0.8;
                      ((System_Object_array *)plVar23)->m_Items[2] = pIVar19;
                      il2cpp_runtime_helper_022b4080(((System_Object_array *)plVar23)->m_Items + 2,pIVar19);
                      position.fields.x = (float)auStack_130._0_4_ + (float)uStack_110 * 0.8;
                      position.fields.y = (float)auStack_130._4_4_ + uStack_110._4_4_ * 0.8;
                      Effects_EffectSpawner__Spawn
                                (pSVar18,position,UVar47,4.0,1,(System_Object_array *)plVar23,
                                 (MethodInfo *)0x0);
                      lVar16 = *(long *)&(__this_00->fields).Dead;
                      auVar34 = _auStack_c0;
                      if ((lVar16 != 0) &&
                         (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10),
                         pUVar17 != (UnityEngine_Transform_o *)0x0)) {
                        plVar23 = *(long **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x60);
                        UVar44 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
                        lVar16 = *(long *)&(__this_00->fields).Dead;
                        auVar34 = _auStack_c0;
                        if ((lVar16 != 0) &&
                           (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10),
                           pUVar17 != (UnityEngine_Transform_o *)0x0)) {
                          UVar45 = UnityEngine_Transform__get_up(pUVar17,(MethodInfo *)0x0);
                          uVar21 = (*(__this_00->klass->vtable)._66_GetAimPoint.methodPtr)(__this_00);
                          lVar16 = *(long *)&(__this_00->fields).Dead;
                          auVar34 = _auStack_c0;
                          if ((lVar16 != 0) &&
                             (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10),
                             pUVar17 != (UnityEngine_Transform_o *)0x0)) {
                            UVar46 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
                            fVar38 = UVar46.fields.x;
                            fVar26 = UVar46.fields.y;
                            fVar39 = extraout_XMM0_Dc_06;
                            fVar30 = extraout_XMM0_Dd_06;
                            if (g_data_057a6845 == '\0') {
                              fStack_e8 = extraout_XMM0_Dc_06;
                              auStack_f0 = (undefined1  [8])UVar46.fields._0_8_;
                              fStack_e4 = extraout_XMM0_Dd_06;
                              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                              g_data_057a6845 = '\x01';
                              fVar38 = (float)auStack_f0._0_4_;
                              fVar26 = (float)auStack_f0._4_4_;
                              fVar39 = fStack_e8;
                              fVar30 = fStack_e4;
                            }
                            auVar36._0_4_ = (float)uVar21 - fVar38;
                            auVar36._4_4_ = (float)((ulong)uVar21 >> 0x20) - fVar26;
                            auVar36._8_4_ = extraout_XMM0_Dc_05 - fVar39;
                            auVar36._12_4_ = extraout_XMM0_Dd_05 - fVar30;
                            fVar38 = extraout_XMM1_Da_01 - UVar46.fields.z;
                            if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            uStack_110._0_4_ = UVar45.fields.x;
                            uStack_110._4_4_ = UVar45.fields.y;
                            uVar31 = 0;
                            uVar32 = 0;
                            fVar26 = fVar38 * fVar38 +
                                     auVar36._4_4_ * auVar36._4_4_ + auVar36._0_4_ * auVar36._0_4_;
                            if (fVar26 < 0.0) {
                              fVar26 = sqrtf(fVar26);
                              uVar31 = extraout_XMM0_Dc_07;
                              uVar32 = extraout_XMM0_Dd_07;
                            }
                            else {
                              fVar26 = SQRT(fVar26);
                            }
                            auStack_130._0_4_ = UVar44.fields.x;
                            auStack_130._4_4_ = UVar44.fields.y;
                            position_00.fields.z = UVar44.fields.z + UVar45.fields.z * 0.8;
                            if (fVar26 <= 1e-05) {
                              if (g_data_057a65d5 == '\0') {
                                il2cpp_runtime_helper_023445d0();
                                g_data_057a65d5 = '\x01';
                              }
                              uVar21 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                              fVar38 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                            }
                            else {
                              fVar38 = fVar38 / fVar26;
                              auVar8._4_4_ = fVar26;
                              auVar8._0_4_ = fVar26;
                              auVar8._8_4_ = uVar31;
                              auVar8._12_4_ = uVar32;
                              auVar34 = divps(auVar36,auVar8);
                              uVar21 = auVar34._0_8_;
                            }
                            forward.fields.z = fVar38;
                            forward.fields.x = (float)(int)uVar21;
                            forward.fields.y = (float)(int)((ulong)uVar21 >> 0x20);
                            UVar47 = UnityEngine_Quaternion__LookRotation_4debb20(forward,(MethodInfo *)0x0);
                            position_00.fields.x = (float)auStack_130._0_4_ + (float)uStack_110 * 0.8;
                            position_00.fields.y = (float)auStack_130._4_4_ + uStack_110._4_4_ * 0.8;
                            Effects_EffectSpawner__Spawn
                                      ((System_String_o *)plVar23,position_00,UVar47,4.0,1,
                                       (System_Object_array *)0x0,(MethodInfo *)0x0);
                            pOVar5 = (__this_00->fields).OutlineComponent;
                            auVar34 = _auStack_c0;
                            if ((pOVar5 != (Outline_o *)0x0) &&
                               (pUVar6 = (UnityEngine_Component_o *)
                                         pOVar5[1].fields.outlineMaskAndFillMaterial,
                               pUVar6 != (UnityEngine_Component_o *)0x0)) {
                              plVar23 = *(long **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
                              pUVar17 = UnityEngine_Component__get_transform(pUVar6,(MethodInfo *)0x0);
                              auVar34 = _auStack_c0;
                              if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
                                UVar44 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
                                UVar47 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                   ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),
                                                    (MethodInfo *)0x0);
                                Effects_EffectSpawner__Spawn
                                          ((System_String_o *)plVar23,UVar44,UVar47,1.0,1,
                                           (System_Object_array *)0x0,(MethodInfo *)0x0);
                                pMVar25 = TypeInfo_HumanSounds;
                                if (*(int *)((long)&TypeInfo_HumanSounds[2].parameters + 4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                pSVar18 = Characters_HumanSounds__GetRandomTSLaunch(pMVar25);
                                Characters_BaseCharacter__PlaySound
                                          ((Characters_BaseCharacter_o *)__this_00,pSVar18,(MethodInfo *)0x0);
                                Characters_Human__SpecialActionState(__this_00,0.5,(MethodInfo *)0x0);
                                pSVar14 = (__this_00->fields).crossfadeCache;
                                if (pSVar14 == (System_Object_array *)0x0) goto label_042f733f;
                                goto label_042f6925;
                              }
                            }
                          }
                        }
                      }
                      goto label_042f73b4;
                    }
                  }
                }
                goto label_042f73c1;
              }
              goto label_042f73c6;
            }
          }
        }
      }
      goto label_042f73b4;
    }
label_042f6925:
    pIVar3 = (pSVar14->obj).klass;
    bVar1 = (TypeInfo_APGWeapon->_2).naturalAligment;
    if (((pIVar3->_2).naturalAligment < bVar1) ||
       ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_APGWeapon)) goto label_042f733f;
    uVar21 = (*(__this_00->klass->vtable)._66_GetAimPoint.methodPtr)(__this_00);
    auStack_130._4_4_ = (undefined4)((ulong)uVar21 >> 0x20);
    lVar16 = *(long *)&(__this_00->fields).Dead;
    auVar34 = _auStack_c0;
    if ((lVar16 == 0) ||
       (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10), pUVar17 == (UnityEngine_Transform_o *)0x0))
    goto label_042f73b4;
    UVar44 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    fVar39 = (float)auStack_130._4_4_ - UVar44.fields.y;
    fVar38 = extraout_XMM1_Da_02 - UVar44.fields.z;
    fVar26 = (float)uVar21 - UVar44.fields.x;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar38 = fVar26 * fVar26 + fVar39 * fVar39 + fVar38 * fVar38;
    if (fVar38 < 0.0) {
      fVar38 = sqrtf(fVar38);
    }
    else {
      fVar38 = SQRT(fVar38);
    }
    if ((fVar38 <= 1e-05) && (g_data_057a65d5 == '\0')) {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    lVar16 = *(long *)&(__this_00->fields).Dead;
    auVar34 = _auStack_c0;
    if ((lVar16 == 0) ||
       (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10), pUVar17 == (UnityEngine_Transform_o *)0x0))
    goto label_042f73b4;
    UVar44 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
    lVar16 = *(long *)&(__this_00->fields).Dead;
    auVar34 = _auStack_c0;
    if ((lVar16 == 0) ||
       (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10), pUVar17 == (UnityEngine_Transform_o *)0x0))
    goto label_042f73b4;
    UVar45 = UnityEngine_Transform__get_up(pUVar17,(MethodInfo *)0x0);
    fStack_150 = UVar44.fields.x;
    fStack_14c = UVar44.fields.y;
    fStack_150 = fStack_150 + UVar45.fields.x * 0.8;
    fStack_14c = fStack_14c + UVar45.fields.y * 0.8;
    fVar38 = UVar44.fields.z + UVar45.fields.z * 0.8;
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    auStack_130._0_4_ = (float)uVar21 - fStack_150;
    auStack_130._4_4_ = (float)auStack_130._4_4_ - fStack_14c;
    fVar26 = extraout_XMM1_Da_02 - fVar38;
    fStack_128 = extraout_XMM0_Dc_08 - (extraout_XMM0_Dc_09 + extraout_XMM0_Dc_10 * 0.0);
    fStack_124 = extraout_XMM0_Dd_08 - (extraout_XMM0_Dd_09 + extraout_XMM0_Dd_10 * 0.0);
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar31 = (undefined4)extraout_XMM1_Qb;
    uVar32 = (undefined4)((ulong)extraout_XMM1_Qb >> 0x20);
    fVar39 = fVar26 * fVar26 +
             (float)auStack_130._4_4_ * (float)auStack_130._4_4_ +
             (float)auStack_130._0_4_ * (float)auStack_130._0_4_;
    if (fVar39 < 0.0) {
      fVar39 = sqrtf(fVar39);
      uVar31 = extraout_XMM0_Dc_11;
      uVar32 = extraout_XMM0_Dd_11;
      if (fVar39 <= 1e-05) goto label_042f6bc7;
label_042f6ba2:
      fVar26 = fVar26 / fVar39;
      auVar10._4_4_ = fVar39;
      auVar10._0_4_ = fVar39;
      auVar10._8_4_ = uVar31;
      auVar10._12_4_ = uVar32;
      auVar34 = divps(_auStack_130,auVar10);
      fVar39 = auVar34._0_4_;
      fVar30 = auVar34._4_4_;
      fVar29 = auVar34._8_4_;
      fVar33 = auVar34._12_4_;
      pOVar5 = (__this_00->fields).OutlineComponent;
    }
    else {
      fVar39 = SQRT(fVar39);
      if (1e-05 < fVar39) goto label_042f6ba2;
label_042f6bc7:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar21 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar39 = (float)uVar21;
      fVar30 = (float)((ulong)uVar21 >> 0x20);
      fVar29 = 0.0;
      fVar33 = 0.0;
      fVar26 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      pOVar5 = (__this_00->fields).OutlineComponent;
    }
    auVar34 = _auStack_c0;
    if (((pOVar5 == (Outline_o *)0x0) || (pOVar5[2].klass == (Outline_c *)0x0)) ||
       (plVar23 = (long *)((pOVar5[2].klass)->_1).declaringType,
       (System_Object_array *)plVar23 == (System_Object_array *)0x0)) goto label_042f73b4;
    pCVar2 = ((Il2CppClass_1 *)&((System_Object_array *)plVar23)->obj)->image;
    bVar1 = (TypeInfo_CapsuleCollider->_2).naturalAligment;
    if (((pCVar2->_2).naturalAligment < bVar1) ||
       ((pCVar2->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CapsuleCollider)) goto label_042f73d5;
    UnityEngine_CapsuleCollider__set_radius((UnityEngine_CapsuleCollider_o *)plVar23,0.1,(MethodInfo *)0x0);
    auStack_f0._0_4_ =
         UnityEngine_CapsuleCollider__get_height((UnityEngine_CapsuleCollider_o *)plVar23,(MethodInfo *)0x0);
    auStack_f0._4_4_ = extraout_XMM0_Db;
    fStack_e8 = (float)extraout_XMM0_Dc_12;
    fStack_e4 = (float)extraout_XMM0_Dd_12;
    fVar27 = UnityEngine_CapsuleCollider__get_radius
                       ((UnityEngine_CapsuleCollider_o *)plVar23,(MethodInfo *)0x0);
    fStack_90 = UnityEngine_CapsuleCollider__get_height
                          ((UnityEngine_CapsuleCollider_o *)plVar23,(MethodInfo *)0x0);
    uStack_88 = extraout_XMM0_Dc_13;
    uStack_84 = extraout_XMM0_Dd_13;
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar16 = *(long *)&(__this_00->fields).Dead;
    auVar34 = _auStack_c0;
    if ((lVar16 == 0) ||
       (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10), pUVar17 == (UnityEngine_Transform_o *)0x0))
    goto label_042f73b4;
    pSVar18 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb8);
    UVar44 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
    lVar16 = *(long *)&(__this_00->fields).Dead;
    auVar34 = _auStack_c0;
    if ((lVar16 == 0) ||
       (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10), pUVar17 == (UnityEngine_Transform_o *)0x0))
    goto label_042f73b4;
    UVar45 = UnityEngine_Transform__get_up(pUVar17,(MethodInfo *)0x0);
    fStack_ac = UVar45.fields.z;
    auStack_60._8_4_ = extraout_XMM0_Dc_14;
    auStack_60._0_8_ = UVar45.fields._0_8_;
    auStack_60._12_4_ = extraout_XMM0_Dd_14;
    auStack_c0 = (undefined1  [8])(*(__this_00->klass->vtable)._66_GetAimPoint.methodPtr)(__this_00);
    auVar34 = _auStack_c0;
    lVar16 = *(long *)&(__this_00->fields).Dead;
    if (lVar16 == 0) goto label_042f73b4;
    uStack_d0 = CONCAT44(uStack_d0._4_4_,extraout_XMM1_Da_03);
    fStack_b8 = (float)extraout_XMM0_Dc_15;
    fStack_b4 = (float)extraout_XMM0_Dd_15;
    pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    auVar34 = _auStack_c0;
    if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_042f73b4;
    auStack_80._4_4_ = fStack_90;
    auStack_80._0_4_ = fStack_90;
    fStack_78 = (float)uStack_88;
    fStack_74 = (float)uStack_84;
    UVar45 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
    fVar41 = UVar45.fields.x;
    fVar28 = UVar45.fields.y;
    fVar37 = extraout_XMM0_Dc_16;
    fVar42 = extraout_XMM0_Dd_16;
    fVar43 = UVar45.fields.z;
    if (g_data_057a6845 == '\0') {
      fStack_68 = extraout_XMM0_Dc_16;
      auStack_70 = UVar45.fields._0_8_;
      fStack_64 = extraout_XMM0_Dd_16;
      fStack_b0 = UVar45.fields.z;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
      fVar41 = (float)auStack_70._0_4_;
      fVar28 = (float)auStack_70._4_4_;
      fVar37 = fStack_68;
      fVar42 = fStack_64;
      fVar43 = fStack_b0;
    }
    auVar40._0_4_ = (float)auStack_c0._0_4_ - fVar41;
    auVar40._4_4_ = (float)auStack_c0._4_4_ - fVar28;
    auVar40._8_4_ = fStack_b8 - fVar37;
    auVar40._12_4_ = fStack_b4 - fVar42;
    fVar28 = fStack_90 * fVar26;
    fVar41 = (float)uStack_d0 - fVar43;
    fVar37 = (float)auStack_80._0_4_ * fVar39;
    fVar42 = (float)auStack_80._4_4_ * fVar30;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      uStack_d0 = CONCAT44(uStack_d0._4_4_,(float)uStack_d0 - fVar43);
      auStack_80._4_4_ = (float)auStack_80._4_4_ * fVar30;
      auStack_80._0_4_ = (float)auStack_80._0_4_ * fVar39;
      fStack_78 = fStack_78 * fVar29;
      fStack_74 = fStack_74 * fVar33;
      _auStack_c0 = auVar40;
      fStack_90 = fStack_90 * fVar26;
      il2cpp_runtime_helper_02337ed0();
      fVar28 = fStack_90;
      auVar40 = _auStack_c0;
      fVar41 = (float)uStack_d0;
      fVar37 = (float)auStack_80._0_4_;
      fVar42 = (float)auStack_80._4_4_;
    }
    uVar31 = 0;
    uVar32 = 0;
    fVar29 = fVar41 * fVar41 + auVar40._4_4_ * auVar40._4_4_ + auVar40._0_4_ * auVar40._0_4_;
    if (fVar29 < 0.0) {
      uStack_d0 = CONCAT44(uStack_d0._4_4_,fVar41);
      _auStack_c0 = auVar40;
      fVar29 = sqrtf(fVar29);
      uVar31 = extraout_XMM0_Dc_17;
      uVar32 = extraout_XMM0_Dd_17;
      auVar40 = _auStack_c0;
      fVar41 = (float)uStack_d0;
    }
    else {
      fVar29 = SQRT(fVar29);
    }
    auStack_f0._0_4_ = auStack_f0._0_4_ * 1.2;
    fVar33 = (fStack_150 + fStack_150 + fVar37) * 0.5;
    fVar37 = (fStack_14c + fStack_14c + fVar42) * 0.5;
    fVar38 = (fVar38 + fVar38 + fVar28) * 0.5;
    if (fVar29 <= 1e-05) {
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0();
        g_data_057a65d5 = '\x01';
      }
      uVar21 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar41 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    else {
      fVar41 = fVar41 / fVar29;
      auVar9._4_4_ = fVar29;
      auVar9._0_4_ = fVar29;
      auVar9._8_4_ = uVar31;
      auVar9._12_4_ = uVar32;
      auVar34 = divps(auVar40,auVar9);
      uVar21 = auVar34._0_8_;
    }
    forward_00.fields.z = fVar41;
    forward_00.fields.x = (float)(int)uVar21;
    forward_00.fields.y = (float)(int)((ulong)uVar21 >> 0x20);
    auVar34 = ZEXT816(0) << 0x20;
    UVar47 = UnityEngine_Quaternion__LookRotation_4debb20(forward_00,(MethodInfo *)0x0);
    uStack_c8 = auVar34._8_8_;
    uStack_d0 = UVar47.fields._8_8_;
    fStack_b8 = (float)extraout_XMM0_Dc_18;
    auStack_c0 = (undefined1  [8])UVar47.fields._0_8_;
    fStack_b4 = (float)extraout_XMM0_Dd_18;
    pSVar14 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,5);
    fVar39 = fVar39 * (float)auStack_f0._0_4_ * 0.5;
    fVar30 = fVar30 * (float)auStack_f0._0_4_ * 0.5;
    fVar26 = fVar26 * (float)auStack_f0._0_4_ * 0.5;
    fStack_98 = fVar26 + fVar38;
    uStack_a0 = CONCAT44(fVar30 + fVar37,fVar39 + fVar33);
    pSVar20 = (System_Object_array *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&uStack_a0);
    auVar34 = _auStack_c0;
    if (pSVar14 == (System_Object_array *)0x0) goto label_042f73b4;
    plVar23 = (long *)pSVar20;
    if ((pSVar20 == (System_Object_array *)0x0) ||
       (lVar16 = il2cpp_runtime_helper_023051f0(pSVar20,(((pSVar14->obj).klass)->_1).element_class), lVar16 != 0)) {
      if ((int)pSVar14->max_length != 0) {
        pSVar14->m_Items[0] = (Il2CppObject *)pSVar20;
        il2cpp_runtime_helper_022b4080(pSVar14->m_Items,pSVar20);
        fStack_d8 = fVar38 - fVar26;
        uStack_e0 = CONCAT44(fVar37 - fVar30,fVar33 - fVar39);
        plVar23 = (long *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&uStack_e0);
        if (((System_Object_array *)plVar23 != (System_Object_array *)0x0) &&
           (lVar16 = il2cpp_runtime_helper_023051f0(plVar23,(((pSVar14->obj).klass)->_1).element_class), lVar16 == 0))
        goto label_042f73c6;
        if (1 < (uint)pSVar14->max_length) {
          pSVar14->m_Items[1] = (Il2CppObject *)plVar23;
          il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 1,plVar23);
          fStack_f4 = fVar27 * 4.0;
          plVar23 = (long *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&fStack_f4);
          if (((System_Object_array *)plVar23 != (System_Object_array *)0x0) &&
             (lVar16 = il2cpp_runtime_helper_023051f0(plVar23,(((pSVar14->obj).klass)->_1).element_class), lVar16 == 0))
          goto label_042f73c6;
          if (2 < (uint)pSVar14->max_length) {
            pSVar14->m_Items[2] = (Il2CppObject *)plVar23;
            il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 2,plVar23);
            fStack_a4 = fVar27 * 4.0;
            plVar23 = (long *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&fStack_a4);
            if (((System_Object_array *)plVar23 != (System_Object_array *)0x0) &&
               (lVar16 = il2cpp_runtime_helper_023051f0(plVar23,(((pSVar14->obj).klass)->_1).element_class), lVar16 == 0))
            goto label_042f73c6;
            if (3 < (uint)pSVar14->max_length) {
              pSVar14->m_Items[3] = (Il2CppObject *)plVar23;
              il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 3,plVar23);
              uStack_a8 = 0x3e800000;
              plVar23 = (long *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&uStack_a8);
              if (((System_Object_array *)plVar23 != (System_Object_array *)0x0) &&
                 (lVar16 = il2cpp_runtime_helper_023051f0(plVar23,(((pSVar14->obj).klass)->_1).element_class), lVar16 == 0
                 )) goto label_042f73c6;
              if (4 < (uint)pSVar14->max_length) {
                fVar38 = (float)auStack_60._0_4_ * 0.8;
                fVar26 = (float)auStack_60._4_4_ * 0.8;
                uStack_110._0_4_ = UVar44.fields.x;
                uStack_110._4_4_ = UVar44.fields.y;
                position_01.fields.z = UVar44.fields.z + fStack_ac * 0.8;
                pSVar14->m_Items[4] = (Il2CppObject *)plVar23;
                il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 4,plVar23);
                auVar34 = _auStack_c0;
                position_01.fields.x = (float)uStack_110 + fVar38;
                position_01.fields.y = uStack_110._4_4_ + fVar26;
                UVar47.fields.z = (float)uStack_d0;
                UVar47.fields.w = (float)uStack_d0._4_4_;
                UVar47.fields.x = (float)auStack_c0._0_4_;
                UVar47.fields.y = (float)auStack_c0._4_4_;
                _auStack_c0 = auVar34;
                Effects_EffectSpawner__Spawn(pSVar18,position_01,UVar47,4.0,1,pSVar14,(MethodInfo *)0x0);
                pOVar5 = (__this_00->fields).OutlineComponent;
                auVar34 = _auStack_c0;
                if ((pOVar5 != (Outline_o *)0x0) &&
                   (pUVar6 = (UnityEngine_Component_o *)pOVar5[1].fields.outlineMaskAndFillMaterial,
                   pUVar6 != (UnityEngine_Component_o *)0x0)) {
                  plVar23 = *(long **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
                  pUVar17 = UnityEngine_Component__get_transform(pUVar6,(MethodInfo *)0x0);
                  auVar34 = _auStack_c0;
                  if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
                    UVar44 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
                    UVar47 = UnityEngine_Quaternion__Internal_FromEulerRad
                                       ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0);
                    Effects_EffectSpawner__Spawn
                              ((System_String_o *)plVar23,UVar44,UVar47,1.0,1,(System_Object_array *)0x0,
                               (MethodInfo *)0x0);
                    pMVar25 = TypeInfo_HumanSounds;
                    if (*(int *)((long)&TypeInfo_HumanSounds[2].parameters + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar18 = Characters_HumanSounds__GetRandomAPGShot(pMVar25);
                    Characters_BaseCharacter__PlaySound
                              ((Characters_BaseCharacter_o *)__this_00,pSVar18,(MethodInfo *)0x0);
                    Characters_Human__SpecialActionState(__this_00,0.5,(MethodInfo *)0x0);
                    goto label_042f733f;
                  }
                }
                goto label_042f73b4;
              }
            }
          }
        }
      }
      goto label_042f73c1;
    }
  }
label_042f73c6:
  uVar21 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar21,0);
label_042f73d5:
  il2cpp_runtime_helper_022b2fd0(plVar23);
  return;
}


// Characters.EscapeSpecial$$Deactivate
// il2cpp: void Characters_EscapeSpecial__Deactivate (Characters_EscapeSpecial_o* __this, const MethodInfo* method);
// 0x42f59e0

void Characters_EscapeSpecial__Deactivate(Characters_EscapeSpecial_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_Human_o *__this_00;
  System_Collections_Generic_Dictionary_Renderer__Material__o *pSVar2;
  Photon_Pun_PhotonView_o *__this_01;
  Il2CppClass *pIVar3;
  Outline_o *pOVar4;
  UnityEngine_Component_o *pUVar5;
  System_Collections_Generic_Dictionary_Renderer__Material__c *pSVar6;
  UnityEngine_Rigidbody_o *__this_02;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  Il2CppObject *pIVar12;
  bool_conflict bVar13;
  System_Object_array *pSVar14;
  Il2CppObject *pIVar15;
  long lVar16;
  UnityEngine_Transform_o *pUVar17;
  System_String_o *pSVar18;
  Il2CppObject *pIVar19;
  System_Object_array *pSVar20;
  undefined8 uVar21;
  long *plVar22;
  MethodInfo *pMVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
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
  
  if (g_data_057adee2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AHSSWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_APGWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BladeWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CapsuleCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSounds);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ThunderspearWeapon);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    il2cpp_runtime_helper_023445d0(&"GetHitRPC");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"ForearmLHurtbox");
    il2cpp_runtime_helper_023445d0(&"ForearmRHurtbox");
    g_data_057adee2 = '\x01';
  }
  __this_00 = (Characters_Human_o *)(__this->fields)._owner;
  auVar32 = _auStack_a8;
  if (__this_00 == (Characters_Human_o *)0x0) goto label_042f73b4;
  bVar1 = (TypeInfo_Human->_2).naturalAligment;
  if (((__this_00->klass->_2).naturalAligment < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Human)) {
label_042f73b9:
    il2cpp_runtime_helper_022b2fd0(__this_00);
label_042f73c1:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (*(char *)&(__this_00->fields).FeedVictimName != '\0') {
      return;
    }
    __this = (Characters_EscapeSpecial_o *)(__this_00->fields).FPSMaterials;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar13 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
      return;
    }
    if ((__this_00->fields).FinishSetup != 7) {
      return;
    }
    pSVar2 = (__this_00->fields).FPSMaterials;
    auVar32 = _auStack_a8;
    if (pSVar2 == (System_Collections_Generic_Dictionary_Renderer__Material__o *)0x0) {
label_042f73b4:
      _auStack_a8 = auVar32;
      il2cpp_runtime_helper_022b2c90();
      goto label_042f73b9;
    }
    if ((char)pSVar2[3].fields._freeCount != '\0') {
      plVar22 = &"ForearmLHurtbox";
      lVar16._0_4_ = pSVar2[1].fields._count;
      lVar16._4_4_ = pSVar2[1].fields._freeList;
      if (lVar16 != 0) goto label_042f5b9a;
      goto label_042f73b4;
    }
    plVar22 = &"ForearmRHurtbox";
    lVar16._0_4_ = pSVar2[1].fields._count;
    lVar16._4_4_ = pSVar2[1].fields._freeList;
    if (lVar16 == 0) goto label_042f73b4;
label_042f5b9a:
    pIVar19 = (Il2CppObject *)*plVar22;
    __this_01 = *(Photon_Pun_PhotonView_o **)(lVar16 + 0x20);
    pSVar14 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,5);
    lVar16 = *(long *)&(__this_00->fields).Dead;
    auVar32 = _auStack_a8;
    if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x20), lVar16 == 0)) goto label_042f73b4;
    uStack_88 = CONCAT44(uStack_88._4_4_,*(undefined4 *)(lVar16 + 0x94));
    __this = (Characters_EscapeSpecial_o *)&g_data_057b9b70;
    pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_88);
    auVar32 = _auStack_a8;
    if (pSVar14 == (System_Object_array *)0x0) goto label_042f73b4;
    if ((pIVar15 != (Il2CppObject *)0x0) &&
       (lVar16 = il2cpp_runtime_helper_023051f0(pIVar15,(((pSVar14->obj).klass)->_1).element_class), lVar16 == 0))
    goto label_042f73c6;
    if ((int)pSVar14->max_length == 0) goto label_042f73c1;
    pSVar14->m_Items[0] = pIVar15;
    il2cpp_runtime_helper_022b4080(pSVar14->m_Items,pIVar15);
    if ("" != (Il2CppObject *)0x0) {
      lVar16 = il2cpp_runtime_helper_023051f0("",(((pSVar14->obj).klass)->_1).element_class);
      if (lVar16 == 0) goto label_042f73c6;
      pIVar15 = "";
      if (1 < (uint)pSVar14->max_length) goto label_042f5c86;
      goto label_042f73c1;
    }
    pIVar15 = (Il2CppObject *)0x0;
    if ((uint)pSVar14->max_length < 2) goto label_042f73c1;
label_042f5c86:
    pIVar12 = "";
    pSVar14->m_Items[1] = pIVar15;
    il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 1,pIVar12);
    uStack_c8 = (ulong)uStack_c8._4_4_ << 0x20;
    __this = (Characters_EscapeSpecial_o *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_c8);
    if (((System_Object_array *)__this != (System_Object_array *)0x0) &&
       (lVar16 = il2cpp_runtime_helper_023051f0(__this,(((pSVar14->obj).klass)->_1).element_class), lVar16 == 0))
    goto label_042f73c6;
    if ((uint)pSVar14->max_length < 3) goto label_042f73c1;
    pSVar14->m_Items[2] = (Il2CppObject *)__this;
    il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 2,__this);
    if ("" != (Il2CppObject *)0x0) {
      lVar16 = il2cpp_runtime_helper_023051f0("",(((pSVar14->obj).klass)->_1).element_class);
      if (lVar16 == 0) goto label_042f73c6;
      pIVar15 = "";
      if (3 < (uint)pSVar14->max_length) goto label_042f5d2d;
      goto label_042f73c1;
    }
    pIVar15 = (Il2CppObject *)0x0;
    if ((uint)pSVar14->max_length < 4) goto label_042f73c1;
label_042f5d2d:
    pIVar12 = "";
    pSVar14->m_Items[3] = pIVar15;
    il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 3,pIVar12);
    if ((pIVar19 != (Il2CppObject *)0x0) &&
       (lVar16 = il2cpp_runtime_helper_023051f0(pIVar19,(((pSVar14->obj).klass)->_1).element_class), lVar16 == 0))
    goto label_042f73c6;
    if ((uint)pSVar14->max_length < 5) goto label_042f73c1;
    pSVar14->m_Items[4] = pIVar19;
    il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 4,pIVar19);
    auVar32 = _auStack_a8;
    if (__this_01 == (Photon_Pun_PhotonView_o *)0x0) goto label_042f73b4;
    Photon_Pun_PhotonView__RPC(__this_01,"GetHitRPC",0,pSVar14,(MethodInfo *)0x0);
    Characters_Human__Ungrab(__this_00,1,0,0,(MethodInfo *)0x0);
    pSVar14 = (__this_00->fields).crossfadeCache;
    if (pSVar14 != (System_Object_array *)0x0) {
      pIVar3 = (pSVar14->obj).klass;
      bVar1 = (TypeInfo_BladeWeapon->_2).naturalAligment;
      if ((bVar1 <= (pIVar3->_2).naturalAligment) &&
         ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BladeWeapon)) {
        if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pOVar4 = (__this_00->fields).OutlineComponent;
        __this = (Characters_EscapeSpecial_o *)&TypeInfo_EffectPrefabs;
        auVar32 = _auStack_a8;
        if ((pOVar4 != (Outline_o *)0x0) &&
           (pUVar5 = (UnityEngine_Component_o *)pOVar4[1].fields.outlineMaskAndFillMaterial,
           pUVar5 != (UnityEngine_Component_o *)0x0)) {
          __this = *(Characters_EscapeSpecial_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
          pUVar17 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0);
          auVar32 = _auStack_a8;
          if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
            UVar42 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
            UVar45 = UnityEngine_Quaternion__Internal_FromEulerRad
                               ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0);
            Effects_EffectSpawner__Spawn
                      ((System_String_o *)__this,UVar42,UVar45,1.0,1,(System_Object_array *)0x0,
                       (MethodInfo *)0x0);
            if (*(int *)((long)&TypeInfo_HumanSounds[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            Characters_BaseCharacter__PlaySound
                      ((Characters_BaseCharacter_o *)__this_00,
                       *(System_String_o **)(TypeInfo_HumanSounds[2].virtualMethodPointer + 8),(MethodInfo *)0x0);
            Characters_Human__SpecialActionState(__this_00,0.5,(MethodInfo *)0x0);
            pSVar14 = (__this_00->fields).crossfadeCache;
            __this = (Characters_EscapeSpecial_o *)&TypeInfo_HumanSounds;
            goto label_042f5ee5;
          }
        }
        goto label_042f73b4;
      }
    }
label_042f5ee5:
    if (pSVar14 == (System_Object_array *)0x0) {
label_042f733f:
      lVar16 = *(long *)&(__this_00->fields).Dead;
      auVar32 = _auStack_a8;
      if (lVar16 != 0) {
        __this_02 = *(UnityEngine_Rigidbody_o **)(lVar16 + 0x18);
        if (g_data_057a6844 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a6844 = '\x01';
        }
        __this = (Characters_EscapeSpecial_o *)0x0;
        auVar32 = _auStack_a8;
        if (__this_02 != (UnityEngine_Rigidbody_o *)0x0) {
          uVar21 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
          value.fields.x = (float)uVar21 * 30.0;
          value.fields.y = (float)((ulong)uVar21 >> 0x20) * 30.0;
          value.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20) * 30.0;
          UnityEngine_Rigidbody__set_velocity(__this_02,value,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_042f73b4;
    }
    pIVar3 = (pSVar14->obj).klass;
    bVar1 = (TypeInfo_AHSSWeapon->_2).naturalAligment;
    if ((bVar1 <= (pIVar3->_2).naturalAligment) &&
       ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_AHSSWeapon)) {
      if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar16 = *(long *)&(__this_00->fields).Dead;
      auVar32 = _auStack_a8;
      if ((lVar16 != 0) &&
         (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10), pUVar17 != (UnityEngine_Transform_o *)0x0))
      {
        __this = *(Characters_EscapeSpecial_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x30);
        UVar42 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
        lVar16 = *(long *)&(__this_00->fields).Dead;
        auVar32 = _auStack_a8;
        if ((lVar16 != 0) &&
           (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10), pUVar17 != (UnityEngine_Transform_o *)0x0)
           ) {
          UVar43 = UnityEngine_Transform__get_up(pUVar17,(MethodInfo *)0x0);
          uVar21 = (*(__this_00->klass->vtable)._66_GetAimPoint.methodPtr)(__this_00);
          lVar16 = *(long *)&(__this_00->fields).Dead;
          auVar32 = _auStack_a8;
          if ((lVar16 != 0) &&
             (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10),
             pUVar17 != (UnityEngine_Transform_o *)0x0)) {
            UVar44 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
            fVar36 = UVar44.fields.x;
            fVar24 = UVar44.fields.y;
            fVar37 = extraout_XMM0_Dc_00;
            fVar28 = extraout_XMM0_Dd_00;
            if (g_data_057a6845 == '\0') {
              fStack_d0 = extraout_XMM0_Dc_00;
              auStack_d8 = (undefined1  [8])UVar44.fields._0_8_;
              fStack_cc = extraout_XMM0_Dd_00;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a6845 = '\x01';
              fVar36 = (float)auStack_d8._0_4_;
              fVar24 = (float)auStack_d8._4_4_;
              fVar37 = fStack_d0;
              fVar28 = fStack_cc;
            }
            auVar32._0_4_ = (float)uVar21 - fVar36;
            auVar32._4_4_ = (float)((ulong)uVar21 >> 0x20) - fVar24;
            auVar32._8_4_ = extraout_XMM0_Dc - fVar37;
            auVar32._12_4_ = extraout_XMM0_Dd - fVar28;
            fVar36 = extraout_XMM1_Da - UVar44.fields.z;
            if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            uStack_f8._0_4_ = UVar43.fields.x;
            uStack_f8._4_4_ = UVar43.fields.y;
            uVar29 = 0;
            uVar30 = 0;
            fVar24 = fVar36 * fVar36 + auVar32._4_4_ * auVar32._4_4_ + auVar32._0_4_ * auVar32._0_4_;
            if (fVar24 < 0.0) {
              fVar24 = sqrtf(fVar24);
              uVar29 = extraout_XMM0_Dc_01;
              uVar30 = extraout_XMM0_Dd_01;
            }
            else {
              fVar24 = SQRT(fVar24);
            }
            auStack_118._0_4_ = UVar42.fields.x;
            auStack_118._4_4_ = UVar42.fields.y;
            UVar42.fields.z = UVar42.fields.z + UVar43.fields.z * 0.8;
            if (fVar24 <= 1e-05) {
              if (g_data_057a65d5 == '\0') {
                il2cpp_runtime_helper_023445d0();
                g_data_057a65d5 = '\x01';
              }
              uVar21 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
              fVar36 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
            }
            else {
              fVar36 = fVar36 / fVar24;
              auVar7._4_4_ = fVar24;
              auVar7._0_4_ = fVar24;
              auVar7._8_4_ = uVar29;
              auVar7._12_4_ = uVar30;
              auVar32 = divps(auVar32,auVar7);
              uVar21 = auVar32._0_8_;
            }
            UVar43.fields.z = fVar36;
            UVar43.fields.x = (float)(int)uVar21;
            UVar43.fields.y = (float)(int)((ulong)uVar21 >> 0x20);
            UVar45 = UnityEngine_Quaternion__LookRotation_4debb20(UVar43,(MethodInfo *)0x0);
            UVar42.fields.x = (float)auStack_118._0_4_ + (float)uStack_f8 * 0.8;
            UVar42.fields.y = (float)auStack_118._4_4_ + uStack_f8._4_4_ * 0.8;
            Effects_EffectSpawner__Spawn
                      ((System_String_o *)__this,UVar42,UVar45,1.0,1,(System_Object_array *)0x0,
                       (MethodInfo *)0x0);
            pOVar4 = (__this_00->fields).OutlineComponent;
            auVar32 = _auStack_a8;
            if ((pOVar4 != (Outline_o *)0x0) &&
               (pUVar5 = (UnityEngine_Component_o *)pOVar4[1].fields.outlineMaskAndFillMaterial,
               pUVar5 != (UnityEngine_Component_o *)0x0)) {
              __this = *(Characters_EscapeSpecial_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
              pUVar17 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0);
              auVar32 = _auStack_a8;
              if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
                UVar42 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
                UVar45 = UnityEngine_Quaternion__Internal_FromEulerRad
                                   ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0);
                Effects_EffectSpawner__Spawn
                          ((System_String_o *)__this,UVar42,UVar45,1.0,1,(System_Object_array *)0x0,
                           (MethodInfo *)0x0);
                pMVar23 = TypeInfo_HumanSounds;
                if (*(int *)((long)&TypeInfo_HumanSounds[2].parameters + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar18 = Characters_HumanSounds__GetRandomAHSSGunShot(pMVar23);
                Characters_BaseCharacter__PlaySound
                          ((Characters_BaseCharacter_o *)__this_00,pSVar18,(MethodInfo *)0x0);
                Characters_Human__SpecialActionState(__this_00,0.5,(MethodInfo *)0x0);
                pSVar14 = (__this_00->fields).crossfadeCache;
                if (pSVar14 == (System_Object_array *)0x0) goto label_042f733f;
                goto label_042f6252;
              }
            }
          }
        }
      }
      goto label_042f73b4;
    }
label_042f6252:
    pIVar3 = (pSVar14->obj).klass;
    bVar1 = (TypeInfo_ThunderspearWeapon->_2).naturalAligment;
    if ((bVar1 <= (pIVar3->_2).naturalAligment) &&
       ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_ThunderspearWeapon)) {
      if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar16 = *(long *)&(__this_00->fields).Dead;
      auVar32 = _auStack_a8;
      if ((lVar16 != 0) &&
         (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10), pUVar17 != (UnityEngine_Transform_o *)0x0))
      {
        pSVar18 = (System_String_o *)**(undefined8 **)(TypeInfo_EffectPrefabs + 0xb8);
        UVar42 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
        lVar16 = *(long *)&(__this_00->fields).Dead;
        auVar32 = _auStack_a8;
        if ((lVar16 != 0) &&
           (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10), pUVar17 != (UnityEngine_Transform_o *)0x0)
           ) {
          UVar43 = UnityEngine_Transform__get_up(pUVar17,(MethodInfo *)0x0);
          uVar21 = (*(__this_00->klass->vtable)._66_GetAimPoint.methodPtr)(__this_00);
          lVar16 = *(long *)&(__this_00->fields).Dead;
          auVar32 = _auStack_a8;
          if ((lVar16 != 0) &&
             (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10),
             pUVar17 != (UnityEngine_Transform_o *)0x0)) {
            UVar44 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
            fVar36 = UVar44.fields.x;
            fVar24 = UVar44.fields.y;
            fVar37 = extraout_XMM0_Dc_03;
            fVar28 = extraout_XMM0_Dd_03;
            if (g_data_057a6845 == '\0') {
              fStack_d0 = extraout_XMM0_Dc_03;
              auStack_d8 = (undefined1  [8])UVar44.fields._0_8_;
              fStack_cc = extraout_XMM0_Dd_03;
              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
              g_data_057a6845 = '\x01';
              fVar36 = (float)auStack_d8._0_4_;
              fVar24 = (float)auStack_d8._4_4_;
              fVar37 = fStack_d0;
              fVar28 = fStack_cc;
            }
            auVar33._0_4_ = (float)uVar21 - fVar36;
            auVar33._4_4_ = (float)((ulong)uVar21 >> 0x20) - fVar24;
            auVar33._8_4_ = extraout_XMM0_Dc_02 - fVar37;
            auVar33._12_4_ = extraout_XMM0_Dd_02 - fVar28;
            fVar36 = extraout_XMM1_Da_00 - UVar44.fields.z;
            if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            uVar29 = 0;
            uVar30 = 0;
            fVar24 = fVar36 * fVar36 + auVar33._4_4_ * auVar33._4_4_ + auVar33._0_4_ * auVar33._0_4_;
            if (fVar24 < 0.0) {
              fVar24 = sqrtf(fVar24);
              uVar29 = extraout_XMM0_Dc_04;
              uVar30 = extraout_XMM0_Dd_04;
              if (fVar24 <= 1e-05) goto label_042f6429;
label_042f641c:
              fVar36 = fVar36 / fVar24;
              auVar11._4_4_ = fVar24;
              auVar11._0_4_ = fVar24;
              auVar11._8_4_ = uVar29;
              auVar11._12_4_ = uVar30;
              auVar32 = divps(auVar33,auVar11);
              uVar21 = auVar32._0_8_;
            }
            else {
              fVar24 = SQRT(fVar24);
              if (1e-05 < fVar24) goto label_042f641c;
label_042f6429:
              if (g_data_057a65d5 == '\0') {
                il2cpp_runtime_helper_023445d0();
                g_data_057a65d5 = '\x01';
              }
              uVar21 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
              fVar36 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
            }
            UVar44.fields.z = fVar36;
            UVar44.fields.x = (float)(int)uVar21;
            UVar44.fields.y = (float)(int)((ulong)uVar21 >> 0x20);
            UVar45 = UnityEngine_Quaternion__LookRotation_4debb20(UVar44,(MethodInfo *)0x0);
            __this = (Characters_EscapeSpecial_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,3);
            uStack_88 = 0;
            fStack_80 = 0.0;
            uStack_7c = 0x3f800000;
            pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Color,&uStack_88);
            auVar32 = _auStack_a8;
            if ((System_Object_array *)__this != (System_Object_array *)0x0) {
              if ((pIVar19 == (Il2CppObject *)0x0) ||
                 (lVar16 = il2cpp_runtime_helper_023051f0(pIVar19,(((((System_Object_array *)__this)->obj).klass)->_1).
                                                      element_class), lVar16 != 0)) {
                if ((int)((System_Object_array *)__this)->max_length != 0) {
                  ((System_Object_array *)__this)->m_Items[0] = pIVar19;
                  il2cpp_runtime_helper_022b4080(((System_Object_array *)__this)->m_Items,pIVar19);
                  uStack_c8 = CONCAT44(uStack_c8._4_4_,1);
                  pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_c8);
                  if ((pIVar19 != (Il2CppObject *)0x0) &&
                     (lVar16 = il2cpp_runtime_helper_023051f0(pIVar19,(((((System_Object_array *)__this)->obj).klass)->_1)
                                                          .element_class), lVar16 == 0)) goto label_042f73c6;
                  if (1 < (uint)((System_Object_array *)__this)->max_length) {
                    ((System_Object_array *)__this)->m_Items[1] = pIVar19;
                    il2cpp_runtime_helper_022b4080(((System_Object_array *)__this)->m_Items + 1,pIVar19);
                    fStack_dc = (float)CONCAT31(fStack_dc._1_3_,1);
                    pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&fStack_dc);
                    if ((pIVar19 != (Il2CppObject *)0x0) &&
                       (lVar16 = il2cpp_runtime_helper_023051f0(pIVar19,(((((System_Object_array *)__this)->obj).klass)->
                                                            _1).element_class), lVar16 == 0))
                    goto label_042f73c6;
                    if (2 < (uint)((System_Object_array *)__this)->max_length) {
                      uStack_f8._0_4_ = UVar43.fields.x;
                      uStack_f8._4_4_ = UVar43.fields.y;
                      auStack_118._0_4_ = UVar42.fields.x;
                      auStack_118._4_4_ = UVar42.fields.y;
                      position.fields.z = UVar42.fields.z + UVar43.fields.z * 0.8;
                      ((System_Object_array *)__this)->m_Items[2] = pIVar19;
                      il2cpp_runtime_helper_022b4080(((System_Object_array *)__this)->m_Items + 2,pIVar19);
                      position.fields.x = (float)auStack_118._0_4_ + (float)uStack_f8 * 0.8;
                      position.fields.y = (float)auStack_118._4_4_ + uStack_f8._4_4_ * 0.8;
                      Effects_EffectSpawner__Spawn
                                (pSVar18,position,UVar45,4.0,1,(System_Object_array *)__this,(MethodInfo *)0x0
                                );
                      lVar16 = *(long *)&(__this_00->fields).Dead;
                      auVar32 = _auStack_a8;
                      if ((lVar16 != 0) &&
                         (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10),
                         pUVar17 != (UnityEngine_Transform_o *)0x0)) {
                        __this = *(Characters_EscapeSpecial_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x60);
                        UVar42 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
                        lVar16 = *(long *)&(__this_00->fields).Dead;
                        auVar32 = _auStack_a8;
                        if ((lVar16 != 0) &&
                           (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10),
                           pUVar17 != (UnityEngine_Transform_o *)0x0)) {
                          UVar43 = UnityEngine_Transform__get_up(pUVar17,(MethodInfo *)0x0);
                          uVar21 = (*(__this_00->klass->vtable)._66_GetAimPoint.methodPtr)(__this_00);
                          lVar16 = *(long *)&(__this_00->fields).Dead;
                          auVar32 = _auStack_a8;
                          if ((lVar16 != 0) &&
                             (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10),
                             pUVar17 != (UnityEngine_Transform_o *)0x0)) {
                            UVar44 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
                            fVar36 = UVar44.fields.x;
                            fVar24 = UVar44.fields.y;
                            fVar37 = extraout_XMM0_Dc_06;
                            fVar28 = extraout_XMM0_Dd_06;
                            if (g_data_057a6845 == '\0') {
                              fStack_d0 = extraout_XMM0_Dc_06;
                              auStack_d8 = (undefined1  [8])UVar44.fields._0_8_;
                              fStack_cc = extraout_XMM0_Dd_06;
                              il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
                              g_data_057a6845 = '\x01';
                              fVar36 = (float)auStack_d8._0_4_;
                              fVar24 = (float)auStack_d8._4_4_;
                              fVar37 = fStack_d0;
                              fVar28 = fStack_cc;
                            }
                            auVar34._0_4_ = (float)uVar21 - fVar36;
                            auVar34._4_4_ = (float)((ulong)uVar21 >> 0x20) - fVar24;
                            auVar34._8_4_ = extraout_XMM0_Dc_05 - fVar37;
                            auVar34._12_4_ = extraout_XMM0_Dd_05 - fVar28;
                            fVar36 = extraout_XMM1_Da_01 - UVar44.fields.z;
                            if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            uStack_f8._0_4_ = UVar43.fields.x;
                            uStack_f8._4_4_ = UVar43.fields.y;
                            uVar29 = 0;
                            uVar30 = 0;
                            fVar24 = fVar36 * fVar36 +
                                     auVar34._4_4_ * auVar34._4_4_ + auVar34._0_4_ * auVar34._0_4_;
                            if (fVar24 < 0.0) {
                              fVar24 = sqrtf(fVar24);
                              uVar29 = extraout_XMM0_Dc_07;
                              uVar30 = extraout_XMM0_Dd_07;
                            }
                            else {
                              fVar24 = SQRT(fVar24);
                            }
                            auStack_118._0_4_ = UVar42.fields.x;
                            auStack_118._4_4_ = UVar42.fields.y;
                            position_00.fields.z = UVar42.fields.z + UVar43.fields.z * 0.8;
                            if (fVar24 <= 1e-05) {
                              if (g_data_057a65d5 == '\0') {
                                il2cpp_runtime_helper_023445d0();
                                g_data_057a65d5 = '\x01';
                              }
                              uVar21 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
                              fVar36 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
                            }
                            else {
                              fVar36 = fVar36 / fVar24;
                              auVar8._4_4_ = fVar24;
                              auVar8._0_4_ = fVar24;
                              auVar8._8_4_ = uVar29;
                              auVar8._12_4_ = uVar30;
                              auVar32 = divps(auVar34,auVar8);
                              uVar21 = auVar32._0_8_;
                            }
                            forward.fields.z = fVar36;
                            forward.fields.x = (float)(int)uVar21;
                            forward.fields.y = (float)(int)((ulong)uVar21 >> 0x20);
                            UVar45 = UnityEngine_Quaternion__LookRotation_4debb20(forward,(MethodInfo *)0x0);
                            position_00.fields.x = (float)auStack_118._0_4_ + (float)uStack_f8 * 0.8;
                            position_00.fields.y = (float)auStack_118._4_4_ + uStack_f8._4_4_ * 0.8;
                            Effects_EffectSpawner__Spawn
                                      ((System_String_o *)__this,position_00,UVar45,4.0,1,
                                       (System_Object_array *)0x0,(MethodInfo *)0x0);
                            pOVar4 = (__this_00->fields).OutlineComponent;
                            auVar32 = _auStack_a8;
                            if ((pOVar4 != (Outline_o *)0x0) &&
                               (pUVar5 = (UnityEngine_Component_o *)
                                         pOVar4[1].fields.outlineMaskAndFillMaterial,
                               pUVar5 != (UnityEngine_Component_o *)0x0)) {
                              __this = *(Characters_EscapeSpecial_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18)
                              ;
                              pUVar17 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0);
                              auVar32 = _auStack_a8;
                              if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
                                UVar42 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
                                UVar45 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                   ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),
                                                    (MethodInfo *)0x0);
                                Effects_EffectSpawner__Spawn
                                          ((System_String_o *)__this,UVar42,UVar45,1.0,1,
                                           (System_Object_array *)0x0,(MethodInfo *)0x0);
                                pMVar23 = TypeInfo_HumanSounds;
                                if (*(int *)((long)&TypeInfo_HumanSounds[2].parameters + 4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                pSVar18 = Characters_HumanSounds__GetRandomTSLaunch(pMVar23);
                                Characters_BaseCharacter__PlaySound
                                          ((Characters_BaseCharacter_o *)__this_00,pSVar18,(MethodInfo *)0x0);
                                Characters_Human__SpecialActionState(__this_00,0.5,(MethodInfo *)0x0);
                                pSVar14 = (__this_00->fields).crossfadeCache;
                                if (pSVar14 == (System_Object_array *)0x0) goto label_042f733f;
                                goto label_042f6925;
                              }
                            }
                          }
                        }
                      }
                      goto label_042f73b4;
                    }
                  }
                }
                goto label_042f73c1;
              }
              goto label_042f73c6;
            }
          }
        }
      }
      goto label_042f73b4;
    }
label_042f6925:
    pIVar3 = (pSVar14->obj).klass;
    bVar1 = (TypeInfo_APGWeapon->_2).naturalAligment;
    if (((pIVar3->_2).naturalAligment < bVar1) ||
       ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_APGWeapon)) goto label_042f733f;
    uVar21 = (*(__this_00->klass->vtable)._66_GetAimPoint.methodPtr)(__this_00);
    auStack_118._4_4_ = (undefined4)((ulong)uVar21 >> 0x20);
    lVar16 = *(long *)&(__this_00->fields).Dead;
    auVar32 = _auStack_a8;
    if ((lVar16 == 0) ||
       (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10), pUVar17 == (UnityEngine_Transform_o *)0x0))
    goto label_042f73b4;
    UVar42 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    fVar37 = (float)auStack_118._4_4_ - UVar42.fields.y;
    fVar36 = extraout_XMM1_Da_02 - UVar42.fields.z;
    fVar24 = (float)uVar21 - UVar42.fields.x;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    fVar36 = fVar24 * fVar24 + fVar37 * fVar37 + fVar36 * fVar36;
    if (fVar36 < 0.0) {
      fVar36 = sqrtf(fVar36);
    }
    else {
      fVar36 = SQRT(fVar36);
    }
    if ((fVar36 <= 1e-05) && (g_data_057a65d5 == '\0')) {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    lVar16 = *(long *)&(__this_00->fields).Dead;
    auVar32 = _auStack_a8;
    if ((lVar16 == 0) ||
       (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10), pUVar17 == (UnityEngine_Transform_o *)0x0))
    goto label_042f73b4;
    UVar42 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
    lVar16 = *(long *)&(__this_00->fields).Dead;
    auVar32 = _auStack_a8;
    if ((lVar16 == 0) ||
       (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10), pUVar17 == (UnityEngine_Transform_o *)0x0))
    goto label_042f73b4;
    UVar43 = UnityEngine_Transform__get_up(pUVar17,(MethodInfo *)0x0);
    fStack_138 = UVar42.fields.x;
    fStack_134 = UVar42.fields.y;
    fStack_138 = fStack_138 + UVar43.fields.x * 0.8;
    fStack_134 = fStack_134 + UVar43.fields.y * 0.8;
    fVar36 = UVar42.fields.z + UVar43.fields.z * 0.8;
    if (g_data_057a6845 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
    }
    auStack_118._0_4_ = (float)uVar21 - fStack_138;
    auStack_118._4_4_ = (float)auStack_118._4_4_ - fStack_134;
    fVar24 = extraout_XMM1_Da_02 - fVar36;
    fStack_110 = extraout_XMM0_Dc_08 - (extraout_XMM0_Dc_09 + extraout_XMM0_Dc_10 * 0.0);
    fStack_10c = extraout_XMM0_Dd_08 - (extraout_XMM0_Dd_09 + extraout_XMM0_Dd_10 * 0.0);
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar29 = (undefined4)extraout_XMM1_Qb;
    uVar30 = (undefined4)((ulong)extraout_XMM1_Qb >> 0x20);
    fVar37 = fVar24 * fVar24 +
             (float)auStack_118._4_4_ * (float)auStack_118._4_4_ +
             (float)auStack_118._0_4_ * (float)auStack_118._0_4_;
    if (fVar37 < 0.0) {
      fVar37 = sqrtf(fVar37);
      uVar29 = extraout_XMM0_Dc_11;
      uVar30 = extraout_XMM0_Dd_11;
      if (fVar37 <= 1e-05) goto label_042f6bc7;
label_042f6ba2:
      fVar24 = fVar24 / fVar37;
      auVar10._4_4_ = fVar37;
      auVar10._0_4_ = fVar37;
      auVar10._8_4_ = uVar29;
      auVar10._12_4_ = uVar30;
      auVar32 = divps(_auStack_118,auVar10);
      fVar37 = auVar32._0_4_;
      fVar28 = auVar32._4_4_;
      fVar27 = auVar32._8_4_;
      fVar31 = auVar32._12_4_;
      pOVar4 = (__this_00->fields).OutlineComponent;
    }
    else {
      fVar37 = SQRT(fVar37);
      if (1e-05 < fVar37) goto label_042f6ba2;
label_042f6bc7:
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      uVar21 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar37 = (float)uVar21;
      fVar28 = (float)((ulong)uVar21 >> 0x20);
      fVar27 = 0.0;
      fVar31 = 0.0;
      fVar24 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      pOVar4 = (__this_00->fields).OutlineComponent;
    }
    auVar32 = _auStack_a8;
    if (((pOVar4 == (Outline_o *)0x0) || (pOVar4[2].klass == (Outline_c *)0x0)) ||
       (__this = (Characters_EscapeSpecial_o *)((pOVar4[2].klass)->_1).declaringType,
       (System_Object_array *)__this == (System_Object_array *)0x0)) goto label_042f73b4;
    pSVar6 = ((Il2CppClass_1 *)&((System_Object_array *)__this)->obj)->image;
    bVar1 = (TypeInfo_CapsuleCollider->_2).naturalAligment;
    if (((pSVar6->_2).naturalAligment < bVar1) ||
       ((pSVar6->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CapsuleCollider)) goto label_042f73d5;
    UnityEngine_CapsuleCollider__set_radius((UnityEngine_CapsuleCollider_o *)__this,0.1,(MethodInfo *)0x0);
    auStack_d8._0_4_ =
         UnityEngine_CapsuleCollider__get_height((UnityEngine_CapsuleCollider_o *)__this,(MethodInfo *)0x0);
    auStack_d8._4_4_ = extraout_XMM0_Db;
    fStack_d0 = (float)extraout_XMM0_Dc_12;
    fStack_cc = (float)extraout_XMM0_Dd_12;
    fVar25 = UnityEngine_CapsuleCollider__get_radius
                       ((UnityEngine_CapsuleCollider_o *)__this,(MethodInfo *)0x0);
    fStack_78 = UnityEngine_CapsuleCollider__get_height
                          ((UnityEngine_CapsuleCollider_o *)__this,(MethodInfo *)0x0);
    uStack_70 = extraout_XMM0_Dc_13;
    uStack_6c = extraout_XMM0_Dd_13;
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar16 = *(long *)&(__this_00->fields).Dead;
    auVar32 = _auStack_a8;
    if ((lVar16 == 0) ||
       (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10), pUVar17 == (UnityEngine_Transform_o *)0x0))
    goto label_042f73b4;
    pSVar18 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb8);
    UVar42 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
    lVar16 = *(long *)&(__this_00->fields).Dead;
    auVar32 = _auStack_a8;
    if ((lVar16 == 0) ||
       (pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10), pUVar17 == (UnityEngine_Transform_o *)0x0))
    goto label_042f73b4;
    UVar43 = UnityEngine_Transform__get_up(pUVar17,(MethodInfo *)0x0);
    fStack_94 = UVar43.fields.z;
    auStack_48._8_4_ = extraout_XMM0_Dc_14;
    auStack_48._0_8_ = UVar43.fields._0_8_;
    auStack_48._12_4_ = extraout_XMM0_Dd_14;
    auStack_a8 = (undefined1  [8])(*(__this_00->klass->vtable)._66_GetAimPoint.methodPtr)(__this_00);
    auVar32 = _auStack_a8;
    lVar16 = *(long *)&(__this_00->fields).Dead;
    if (lVar16 == 0) goto label_042f73b4;
    uStack_b8 = CONCAT44(uStack_b8._4_4_,extraout_XMM1_Da_03);
    fStack_a0 = (float)extraout_XMM0_Dc_15;
    fStack_9c = (float)extraout_XMM0_Dd_15;
    pUVar17 = *(UnityEngine_Transform_o **)(lVar16 + 0x10);
    auVar32 = _auStack_a8;
    if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_042f73b4;
    auStack_68._4_4_ = fStack_78;
    auStack_68._0_4_ = fStack_78;
    fStack_60 = (float)uStack_70;
    fStack_5c = (float)uStack_6c;
    UVar43 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
    fVar39 = UVar43.fields.x;
    fVar26 = UVar43.fields.y;
    fVar35 = extraout_XMM0_Dc_16;
    fVar40 = extraout_XMM0_Dd_16;
    fVar41 = UVar43.fields.z;
    if (g_data_057a6845 == '\0') {
      fStack_50 = extraout_XMM0_Dc_16;
      auStack_58 = UVar43.fields._0_8_;
      fStack_4c = extraout_XMM0_Dd_16;
      fStack_98 = UVar43.fields.z;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a6845 = '\x01';
      fVar39 = (float)auStack_58._0_4_;
      fVar26 = (float)auStack_58._4_4_;
      fVar35 = fStack_50;
      fVar40 = fStack_4c;
      fVar41 = fStack_98;
    }
    auVar38._0_4_ = (float)auStack_a8._0_4_ - fVar39;
    auVar38._4_4_ = (float)auStack_a8._4_4_ - fVar26;
    auVar38._8_4_ = fStack_a0 - fVar35;
    auVar38._12_4_ = fStack_9c - fVar40;
    fVar26 = fStack_78 * fVar24;
    fVar39 = (float)uStack_b8 - fVar41;
    fVar35 = (float)auStack_68._0_4_ * fVar37;
    fVar40 = (float)auStack_68._4_4_ * fVar28;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      uStack_b8 = CONCAT44(uStack_b8._4_4_,(float)uStack_b8 - fVar41);
      auStack_68._4_4_ = (float)auStack_68._4_4_ * fVar28;
      auStack_68._0_4_ = (float)auStack_68._0_4_ * fVar37;
      fStack_60 = fStack_60 * fVar27;
      fStack_5c = fStack_5c * fVar31;
      _auStack_a8 = auVar38;
      fStack_78 = fStack_78 * fVar24;
      il2cpp_runtime_helper_02337ed0();
      fVar26 = fStack_78;
      auVar38 = _auStack_a8;
      fVar39 = (float)uStack_b8;
      fVar35 = (float)auStack_68._0_4_;
      fVar40 = (float)auStack_68._4_4_;
    }
    uVar29 = 0;
    uVar30 = 0;
    fVar27 = fVar39 * fVar39 + auVar38._4_4_ * auVar38._4_4_ + auVar38._0_4_ * auVar38._0_4_;
    if (fVar27 < 0.0) {
      uStack_b8 = CONCAT44(uStack_b8._4_4_,fVar39);
      _auStack_a8 = auVar38;
      fVar27 = sqrtf(fVar27);
      uVar29 = extraout_XMM0_Dc_17;
      uVar30 = extraout_XMM0_Dd_17;
      auVar38 = _auStack_a8;
      fVar39 = (float)uStack_b8;
    }
    else {
      fVar27 = SQRT(fVar27);
    }
    auStack_d8._0_4_ = auStack_d8._0_4_ * 1.2;
    fVar31 = (fStack_138 + fStack_138 + fVar35) * 0.5;
    fVar35 = (fStack_134 + fStack_134 + fVar40) * 0.5;
    fVar36 = (fVar36 + fVar36 + fVar26) * 0.5;
    if (fVar27 <= 1e-05) {
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0();
        g_data_057a65d5 = '\x01';
      }
      uVar21 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar39 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    else {
      fVar39 = fVar39 / fVar27;
      auVar9._4_4_ = fVar27;
      auVar9._0_4_ = fVar27;
      auVar9._8_4_ = uVar29;
      auVar9._12_4_ = uVar30;
      auVar32 = divps(auVar38,auVar9);
      uVar21 = auVar32._0_8_;
    }
    forward_00.fields.z = fVar39;
    forward_00.fields.x = (float)(int)uVar21;
    forward_00.fields.y = (float)(int)((ulong)uVar21 >> 0x20);
    auVar32 = ZEXT816(0) << 0x20;
    UVar45 = UnityEngine_Quaternion__LookRotation_4debb20(forward_00,(MethodInfo *)0x0);
    uStack_b0 = auVar32._8_8_;
    uStack_b8 = UVar45.fields._8_8_;
    fStack_a0 = (float)extraout_XMM0_Dc_18;
    auStack_a8 = (undefined1  [8])UVar45.fields._0_8_;
    fStack_9c = (float)extraout_XMM0_Dd_18;
    pSVar14 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,5);
    fVar37 = fVar37 * (float)auStack_d8._0_4_ * 0.5;
    fVar28 = fVar28 * (float)auStack_d8._0_4_ * 0.5;
    fVar24 = fVar24 * (float)auStack_d8._0_4_ * 0.5;
    fStack_80 = fVar24 + fVar36;
    uStack_88 = CONCAT44(fVar28 + fVar35,fVar37 + fVar31);
    pSVar20 = (System_Object_array *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&uStack_88);
    auVar32 = _auStack_a8;
    if (pSVar14 == (System_Object_array *)0x0) goto label_042f73b4;
    __this = (Characters_EscapeSpecial_o *)pSVar20;
    if ((pSVar20 == (System_Object_array *)0x0) ||
       (lVar16 = il2cpp_runtime_helper_023051f0(pSVar20,(((pSVar14->obj).klass)->_1).element_class), lVar16 != 0)) {
      if ((int)pSVar14->max_length != 0) {
        pSVar14->m_Items[0] = (Il2CppObject *)pSVar20;
        il2cpp_runtime_helper_022b4080(pSVar14->m_Items,pSVar20);
        fStack_c0 = fVar36 - fVar24;
        uStack_c8 = CONCAT44(fVar35 - fVar28,fVar31 - fVar37);
        __this = (Characters_EscapeSpecial_o *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&uStack_c8);
        if (((System_Object_array *)__this != (System_Object_array *)0x0) &&
           (lVar16 = il2cpp_runtime_helper_023051f0(__this,(((pSVar14->obj).klass)->_1).element_class), lVar16 == 0))
        goto label_042f73c6;
        if (1 < (uint)pSVar14->max_length) {
          pSVar14->m_Items[1] = (Il2CppObject *)__this;
          il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 1,__this);
          fStack_dc = fVar25 * 4.0;
          __this = (Characters_EscapeSpecial_o *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&fStack_dc);
          if (((System_Object_array *)__this != (System_Object_array *)0x0) &&
             (lVar16 = il2cpp_runtime_helper_023051f0(__this,(((pSVar14->obj).klass)->_1).element_class), lVar16 == 0))
          goto label_042f73c6;
          if (2 < (uint)pSVar14->max_length) {
            pSVar14->m_Items[2] = (Il2CppObject *)__this;
            il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 2,__this);
            fStack_8c = fVar25 * 4.0;
            __this = (Characters_EscapeSpecial_o *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&fStack_8c);
            if (((System_Object_array *)__this != (System_Object_array *)0x0) &&
               (lVar16 = il2cpp_runtime_helper_023051f0(__this,(((pSVar14->obj).klass)->_1).element_class), lVar16 == 0))
            goto label_042f73c6;
            if (3 < (uint)pSVar14->max_length) {
              pSVar14->m_Items[3] = (Il2CppObject *)__this;
              il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 3,__this);
              uStack_90 = 0x3e800000;
              __this = (Characters_EscapeSpecial_o *)il2cpp_runtime_helper_02304f30(g_data_057b9be8,&uStack_90);
              if (((System_Object_array *)__this != (System_Object_array *)0x0) &&
                 (lVar16 = il2cpp_runtime_helper_023051f0(__this,(((pSVar14->obj).klass)->_1).element_class), lVar16 == 0)
                 ) goto label_042f73c6;
              if (4 < (uint)pSVar14->max_length) {
                fVar36 = (float)auStack_48._0_4_ * 0.8;
                fVar24 = (float)auStack_48._4_4_ * 0.8;
                uStack_f8._0_4_ = UVar42.fields.x;
                uStack_f8._4_4_ = UVar42.fields.y;
                position_01.fields.z = UVar42.fields.z + fStack_94 * 0.8;
                pSVar14->m_Items[4] = (Il2CppObject *)__this;
                il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 4,__this);
                auVar32 = _auStack_a8;
                position_01.fields.x = (float)uStack_f8 + fVar36;
                position_01.fields.y = uStack_f8._4_4_ + fVar24;
                UVar45.fields.z = (float)uStack_b8;
                UVar45.fields.w = (float)uStack_b8._4_4_;
                UVar45.fields.x = (float)auStack_a8._0_4_;
                UVar45.fields.y = (float)auStack_a8._4_4_;
                _auStack_a8 = auVar32;
                Effects_EffectSpawner__Spawn(pSVar18,position_01,UVar45,4.0,1,pSVar14,(MethodInfo *)0x0);
                pOVar4 = (__this_00->fields).OutlineComponent;
                auVar32 = _auStack_a8;
                if ((pOVar4 != (Outline_o *)0x0) &&
                   (pUVar5 = (UnityEngine_Component_o *)pOVar4[1].fields.outlineMaskAndFillMaterial,
                   pUVar5 != (UnityEngine_Component_o *)0x0)) {
                  __this = *(Characters_EscapeSpecial_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
                  pUVar17 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0);
                  auVar32 = _auStack_a8;
                  if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
                    UVar42 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
                    UVar45 = UnityEngine_Quaternion__Internal_FromEulerRad
                                       ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0);
                    Effects_EffectSpawner__Spawn
                              ((System_String_o *)__this,UVar42,UVar45,1.0,1,(System_Object_array *)0x0,
                               (MethodInfo *)0x0);
                    pMVar23 = TypeInfo_HumanSounds;
                    if (*(int *)((long)&TypeInfo_HumanSounds[2].parameters + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar18 = Characters_HumanSounds__GetRandomAPGShot(pMVar23);
                    Characters_BaseCharacter__PlaySound
                              ((Characters_BaseCharacter_o *)__this_00,pSVar18,(MethodInfo *)0x0);
                    Characters_Human__SpecialActionState(__this_00,0.5,(MethodInfo *)0x0);
                    goto label_042f733f;
                  }
                }
                goto label_042f73b4;
              }
            }
          }
        }
      }
      goto label_042f73c1;
    }
  }
label_042f73c6:
  uVar21 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar21,0);
label_042f73d5:
  il2cpp_runtime_helper_022b2fd0(__this);
  return;
}


