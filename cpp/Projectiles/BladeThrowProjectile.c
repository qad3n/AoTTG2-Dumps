// Type: Projectiles.BladeThrowProjectile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Projectiles/BladeThrowProjectile.cs
// Prior real C# source (older reference): Assets/Scripts/Projectiles/BladeThrowProjectile.cs
// --------------------------------

// Projectiles.BladeThrowProjectile$$get_DestroyDelay
// il2cpp: float Projectiles_BladeThrowProjectile__get_DestroyDelay (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x5870120

float Projectiles_BladeThrowProjectile__get_DestroyDelay
                (Projectiles_BladeThrowProjectile_o *__this,MethodInfo *method)

{
  return 1.5;
}


// Projectiles.BladeThrowProjectile$$Awake
// il2cpp: void Projectiles_BladeThrowProjectile__Awake (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x5870130

void Projectiles_BladeThrowProjectile__Awake(Projectiles_BladeThrowProjectile_o *__this,MethodInfo *method)

{
  Settings_GraphicsSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  MeleeWeaponTrail_o *pMVar5;
  MeleeWeaponTrail_o **targetAddress;
  
  if (Il2CppMethodInitialized_0754516d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_MeleeWeaponTrail);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Blade");
    il2cpp_codegen_initialize_runtime_metadata(&"Model");
    Il2CppMethodInitialized_0754516d = '\x01';
  }
  Characters_BaseMovementSync__Awake((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"Blade",(MethodInfo *)0x0);
    (__this->fields)._blade = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._blade);
    pUVar3 = (__this->fields)._blade;
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Transform__Find(pUVar3,"Model",(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
        (__this->fields)._model = pUVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._model);
        pMVar5 = UnityEngine_Component__GetComponentInChildren_object__34b09d0
                           ((UnityEngine_Component_o *)__this,
                            (MethodInfo_34B09D0 *)
                            MethodInfo_UnityEngine_Component_GetComponentInChildren_MeleeWeaponTrail);
        (__this->fields).WeaponTrail = pMVar5;
        targetAddress = &(__this->fields).WeaponTrail;
        Il2CppCodeGenWriteBarrier(targetAddress);
        pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
        if ((pSVar1 != (Settings_GraphicsSettings_o *)0x0) &&
           (pSVar2 = (pSVar1->fields).WeaponTrail, pSVar2 != (Settings_IntSetting_o *)0x0)) {
          pMVar5 = *targetAddress;
          if ((pSVar2->fields)._value == 0) {
            if (pMVar5 != (MeleeWeaponTrail_o *)0x0) {
              (pMVar5->fields)._emit = false;
              return;
            }
          }
          else if (pMVar5 != (MeleeWeaponTrail_o *)0x0) {
            (pMVar5->fields)._emit = true;
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.BladeThrowProjectile$$Start
// il2cpp: void Projectiles_BladeThrowProjectile__Start (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x5870290

void Projectiles_BladeThrowProjectile__Start(Projectiles_BladeThrowProjectile_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  MeleeWeaponTrail_o *pMVar3;
  System_String_o *pSVar4;
  System_String_Fields SVar5;
  bool bVar6;
  Characters_BaseCharacter_c *pCVar7;
  
  if (Il2CppMethodInitialized_0754516e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754516e = '\x01';
  }
  pCVar2 = (__this->fields)._owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar6) && (pCVar2 = (__this->fields)._owner, pCVar2 != (Characters_BaseCharacter_o *)0x0)) {
    pCVar7 = pCVar2->klass;
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((pCVar7->_2).typeHierarchyDepth < bVar1) {
      return;
    }
    if ((pCVar7->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human) {
      return;
    }
    if ((pCVar2->fields).EffectsEnabled == false) {
      pMVar3 = (__this->fields).WeaponTrail;
      if (pMVar3 == (MeleeWeaponTrail_o *)0x0) goto label_058703cf;
      (pMVar3->fields)._emit = false;
      pCVar7 = pCVar2->klass;
    }
    bVar6 = (*(pCVar7->vtable)._74_IsMine.methodPtr)(pCVar2,(pCVar7->vtable)._74_IsMine.method);
    if (bVar6) {
      pCVar2 = (__this->fields)._owner;
      if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
        bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
        if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human))
        {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        pSVar4 = (*(uint64_t *)((char *)pCVar2 + 0x150));
        if (((pSVar4 != (System_String_o *)0x0) &&
            (SVar5 = pSVar4[0xf].fields, SVar5 != (System_String_Fields)0x0)) &&
           (pMVar3 = (__this->fields).WeaponTrail, pMVar3 != (MeleeWeaponTrail_o *)0x0)) {
          MeleeWeaponTrail__SetMaterial
                    (pMVar3,*(UnityEngine_Material_o **)((long)SVar5 + 0x28),(MethodInfo *)0x0);
          return;
        }
      }
label_058703cf:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Projectiles.BladeThrowProjectile$$RegisterObjects
// il2cpp: void Projectiles_BladeThrowProjectile__RegisterObjects (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x58703e0

void Projectiles_BladeThrowProjectile__RegisterObjects
               (Projectiles_BladeThrowProjectile_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_o *item;
  UnityEngine_GameObject_array *pUVar3;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_0754516f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    Il2CppMethodInitialized_0754516f = '\x01';
  }
  pMVar4 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
  __this_00 = (__this->fields)._hideObjects;
  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    item = (__this->fields)._model;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar3 = (__this_00->fields)._items;
    if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pUVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pUVar3->m_Items[(int)uVar2] = item;
        Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
        return;
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                 (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.BladeThrowProjectile$$DisableRPC
// il2cpp: void Projectiles_BladeThrowProjectile__DisableRPC (Projectiles_BladeThrowProjectile_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5870470

void Projectiles_BladeThrowProjectile__DisableRPC
               (Projectiles_BladeThrowProjectile_o *__this,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  MethodInfo *method_00;
  
  if ((__this->fields).Disabled == false) {
    method_00 = (MethodInfo *)0x0;
    pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (info.fields.Sender == (pPVar1->fields)._Owner_k__BackingField) {
      Projectiles_BaseProjectile__DisableRPC((Projectiles_BaseProjectile_o *)__this,info,method_00);
      return;
    }
  }
  return;
}


// Projectiles.BladeThrowProjectile$$OnCollisionEnter
// il2cpp: void Projectiles_BladeThrowProjectile__OnCollisionEnter (Projectiles_BladeThrowProjectile_o* __this, UnityEngine_Collision_o* collision, const MethodInfo* method);
// 0x58704c0

void Projectiles_BladeThrowProjectile__OnCollisionEnter
               (Projectiles_BladeThrowProjectile_o *__this,UnityEngine_Collision_o *collision,
               MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  bool bVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  UnityEngine_Collider_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  Characters_BaseCharacter_o *a;
  UnityEngine_AudioSource_o *__this_00;
  MethodInfo *method_00;
  System_String_o *pSVar7;
  float fVar8;
  float fVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined8 uVar10;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined4 uVar11;
  undefined4 uVar12;
  UnityEngine_Quaternion_o UVar13;
  UnityEngine_Vector3_o UVar14;
  float fStack_7c;
  UnityEngine_Vector3_Fields UStack_78;
  undefined1 auStack_68 [16];
  float fStack_58;
  float fStack_54;
  undefined1 auStack_48 [16];
  UnityEngine_Vector3_Fields UStack_30;
  
  if (Il2CppMethodInitialized_07545170 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_AudioSource);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"BladeHit");
    Il2CppMethodInitialized_07545170 = '\x01';
  }
  pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar4 == (Photon_Pun_PhotonView_o *)0x0) goto label_05870860;
  if ((pPVar4->fields)._IsMine_k__BackingField == false) {
    return;
  }
  if ((__this->fields).Disabled != false) {
    return;
  }
  if ((((collision == (UnityEngine_Collision_o *)0x0) ||
       (pUVar5 = UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_Collider_o *)0x0)) ||
      (pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
      pUVar6 == (UnityEngine_Transform_o *)0x0)) ||
     (pUVar6 = UnityEngine_Transform__get_root(pUVar6,(MethodInfo *)0x0),
     pUVar6 == (UnityEngine_Transform_o *)0x0)) goto label_05870860;
  a = UnityEngine_Component__GetComponent_object_
                ((UnityEngine_Component_o *)pUVar6,
                 (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    pSVar7 = TypeInfo_Effects_EffectPrefabs->static_fields->BladeThrowHit;
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_05870860;
    UVar14 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
    fStack_7c = UVar14.fields.z;
    auStack_48._8_4_ = extraout_XMM0_Dc;
    auStack_48._0_8_ = UVar14.fields._0_8_;
    auStack_48._12_4_ = extraout_XMM0_Dd;
    UStack_78.x = (__this->fields)._velocity.fields.x;
    UStack_78.y = (__this->fields)._velocity.fields.y;
    UStack_78.z = (__this->fields)._velocity.fields.z;
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
    UStack_30.x = (pUVar2->upVector).fields.x;
    UStack_30.y = (pUVar2->upVector).fields.y;
    UStack_30.z = (pUVar2->upVector).fields.z;
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    UVar13 = UnityEngine_Quaternion__Internal_LookRotation
                       ((UnityEngine_Vector3_o *)&UStack_78,(UnityEngine_Vector3_o *)&UStack_30,
                        (MethodInfo *)0x0);
    uVar10 = UVar13.fields._8_8_;
    fVar8 = UVar13.fields.x;
    fVar9 = UVar13.fields.y;
label_058706ac:
    uVar11 = (int)uVar10;
    uVar12 = (int)((ulong)uVar10 >> 0x20);
    if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
      auStack_68._8_4_ = in_XMM1_Dc;
      auStack_68._0_8_ = uVar10;
      auStack_68._12_4_ = in_XMM1_Dd;
      fStack_58 = fVar8;
      fStack_54 = fVar9;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      fVar8 = fStack_58;
      fVar9 = fStack_54;
      uVar11 = auStack_68._0_4_;
      uVar12 = auStack_68._4_4_;
    }
    UVar13.fields.y = fVar9;
    UVar13.fields.x = fVar8;
    UVar13.fields.w = (float)uVar12;
    UVar13.fields.z = (float)uVar11;
    UVar14.fields.z = fStack_7c;
    UVar14.fields.x = (float)auStack_48._0_4_;
    UVar14.fields.y = (float)auStack_48._4_4_;
    Effects_EffectSpawner__Spawn(pSVar7,UVar14,UVar13,1.0,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
  }
  else {
    pSVar7 = (__this->fields)._team;
    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    bVar3 = GameManagers_TeamInfo__SameTeam_5858ba0(a,pSVar7,(MethodInfo *)0x0);
    if ((!bVar3) && (a != (Characters_BaseCharacter_o *)0x0)) {
      bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
      if ((bVar1 <= (a->klass->_2).typeHierarchyDepth) &&
         ((a->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
        if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
        }
        pSVar7 = TypeInfo_Effects_EffectPrefabs->static_fields->Blood1;
        pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_05870860;
        UVar14 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
        fStack_7c = UVar14.fields.z;
        auStack_48._8_4_ = extraout_XMM0_Dc_00;
        auStack_48._0_8_ = UVar14.fields._0_8_;
        auStack_48._12_4_ = extraout_XMM0_Dd_00;
        UStack_78.x = 4.712389;
        UStack_78.y = 0.0;
        UStack_78.z = 0.0;
        UVar13 = UnityEngine_Quaternion__Internal_FromEulerRad
                           ((UnityEngine_Vector3_o *)&UStack_78,(MethodInfo *)0x0);
        uVar10 = UVar13.fields._8_8_;
        fVar8 = UVar13.fields.x;
        fVar9 = UVar13.fields.y;
        goto label_058706ac;
      }
    }
  }
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (((pUVar6 != (UnityEngine_Transform_o *)0x0) &&
      (pUVar6 = UnityEngine_Transform__Find(pUVar6,"BladeHit",(MethodInfo *)0x0),
      pUVar6 != (UnityEngine_Transform_o *)0x0)) &&
     (__this_00 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar6,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_AudioSource),
     __this_00 != (UnityEngine_AudioSource_o *)0x0)) {
    UnityEngine_AudioSource__Play_68b06a0(__this_00,(MethodInfo *)0x0);
    pUVar5 = UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
    Projectiles_BladeThrowProjectile__CheckHurtboxes(__this,pUVar5,method_00);
    (*(__this->klass->vtable)._17_DestroySelf.methodPtr)
              (__this,(__this->klass->vtable)._17_DestroySelf.method);
    return;
  }
label_05870860:
  ThrowNullReferenceException();
}


// Projectiles.BladeThrowProjectile$$CheckHurtboxes
// il2cpp: void Projectiles_BladeThrowProjectile__CheckHurtboxes (Projectiles_BladeThrowProjectile_o* __this, UnityEngine_Collider_o* firstCollider, const MethodInfo* method);
// 0x5870870
// eh: try 0x5870caa..0x5871780 -> pad 0x5871864 (+88 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x587187c..0x5871881 -> pad 0x58718a6 cleanup
// eh: try 0x58718a9..0x58718b3 -> pad 0x58718bb catch (...) [compiler noexcept guard]
// asm: 108 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5870c9c: nop dword ptr [rax]
// asm:   0x5871780: jmp 0x5871864
// asm:   0x5871785: jmp 0x5871864
// asm:   0x587178a: jmp 0x5871864
// asm:   0x587178f: jmp 0x5871864
// asm:   0x5871794: jmp 0x5871864
// asm:   0x5871799: jmp 0x5871864
// asm:   0x587179e: jmp 0x5871864
// asm:   0x58717a3: jmp 0x5871864
// asm:   0x58717a8: jmp 0x5871864
// asm:   0x58717ad: jmp 0x5871864
// asm:   0x58717b2: jmp 0x5871864
// asm:   0x58717b7: jmp 0x5871864
// asm:   0x58717bc: jmp 0x5871864
// asm:   0x58717c1: jmp 0x5871864
// asm:   0x58717c6: jmp 0x5871864
// asm:   0x58717cb: jmp 0x5871864
// asm:   0x58717d0: jmp 0x5871864
// asm:   0x58717d5: jmp 0x5871864
// asm:   0x58717da: jmp 0x5871864
// asm:   0x58717df: jmp 0x5871864
// asm:   0x58717e4: jmp 0x5871864
// asm:   0x58717e6: jmp 0x5871864
// asm:   0x58717e8: jmp 0x5871864
// asm:   0x58717ea: jmp 0x5871864
// asm:   0x58717ec: jmp 0x5871864
// asm:   0x58717ee: jmp 0x5871864
// asm:   0x58717f0: jmp 0x5871864
// asm:   0x58717f2: jmp 0x5871864
// asm:   0x58717f4: jmp 0x5871864
// asm:   0x58717f6: jmp 0x5871864
// asm:   0x58717f8: jmp 0x5871864
// asm:   0x58717fa: jmp 0x5871864
// asm:   0x58717fc: jmp 0x5871864
// asm:   0x58717fe: jmp 0x5871864
// asm:   0x5871800: jmp 0x5871864
// asm:   0x5871802: jmp 0x5871864
// asm:   0x5871804: jmp 0x5871864
// asm:   0x5871806: jmp 0x5871864
// asm:   0x5871808: jmp 0x5871864
// asm:   0x587180a: jmp 0x5871864
// asm:   0x587180c: jmp 0x5871864
// asm:   0x587180e: jmp 0x5871864
// asm:   0x5871810: jmp 0x5871864
// asm:   0x5871812: jmp 0x5871864
// asm:   0x5871814: jmp 0x5871864
// asm:   0x5871816: jmp 0x5871864
// asm:   0x5871818: jmp 0x5871864
// asm:   0x587181a: jmp 0x5871864
// asm:   0x587181c: jmp 0x5871864
// asm:   0x587181e: jmp 0x5871864
// asm:   0x5871820: jmp 0x5871864
// asm:   0x5871822: jmp 0x5871864
// asm:   0x5871824: jmp 0x5871864
// asm:   0x5871826: jmp 0x5871864
// asm:   0x5871828: jmp 0x5871864
// asm:   0x587182a: jmp 0x5871864
// asm:   0x587182c: jmp 0x5871864
// asm:   0x587182e: jmp 0x5871864
// asm:   0x5871830: jmp 0x5871864
// asm:   0x5871832: jmp 0x5871864
// asm:   0x5871834: jmp 0x5871864
// asm:   0x5871836: jmp 0x5871864
// asm:   0x5871838: jmp 0x5871864
// asm:   0x587183a: jmp 0x5871864
// asm:   0x587183c: jmp 0x5871864
// asm:   0x587183e: jmp 0x5871864
// asm:   0x5871840: jmp 0x5871864
// asm:   0x5871842: jmp 0x5871864
// asm:   0x5871844: jmp 0x5871864
// asm:   0x5871846: jmp 0x5871864
// asm:   0x5871848: jmp 0x5871864
// asm:   0x587184a: jmp 0x5871864
// asm:   0x587184c: jmp 0x5871864
// asm:   0x587184e: jmp 0x5871864
// asm:   0x5871850: jmp 0x5871864
// asm:   0x5871852: jmp 0x5871864
// asm:   0x5871854: jmp 0x5871864
// asm:   0x5871856: jmp 0x5871864
// asm:   0x5871858: jmp 0x5871864
// asm:   0x587185a: jmp 0x5871864
// asm:   0x587185c: jmp 0x5871864
// asm:   0x587185e: jmp 0x5871864
// asm:   0x5871860: jmp 0x5871864
// asm:   0x5871862: jmp 0x5871864
// asm:   0x5871864: mov rbx, rax
// asm:   0x5871867: cmp edx, 1
// asm:   0x587186a: jne 0x58718a9
// asm:   0x587186c: mov rdi, rbx
// asm:   0x587186f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5871874: mov rbx, qword ptr [rax]
// asm:   0x5871877: mov qword ptr [rsp + 0x58], rbx
// asm:   0x587187c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5871881: lea rax, [rip + 0x1a1c0b8]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose
// asm:   0x5871888: mov rsi, qword ptr [rax]
// asm:   0x587188b: lea rdi, [rsp + 0x40]
// asm:   0x5871890: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5871895: test rbx, rbx
// asm:   0x5871898: je 0x58716c6
// asm:   0x587189e: mov rdi, rbx
// asm:   0x58718a1: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58718a6: mov rbx, rax
// asm:   0x58718a9: lea rdi, [rsp + 0x58]
// asm:   0x58718ae: call 0x2fcf690  ; il2cpp_runtime_helper_02fcf690()
// asm:   0x58718b3: mov rdi, rbx
// asm:   0x58718b6: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58718bb: mov rdi, rax
// asm:   0x58718be: call 0x2ab61e0  ; __clang_call_terminate()

void Projectiles_BladeThrowProjectile__CheckHurtboxes
               (Projectiles_BladeThrowProjectile_o *__this,UnityEngine_Collider_o *firstCollider,
               MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  Utility_PhysicsLayer_StaticFields *pUVar6;
  UnityEngine_Object_o *y;
  UI_BaseMenu_o *obj;
  Cameras_BaseCamera_o *obj_00;
  System_Collections_Generic_List_object__o *__this_00;
  Utility_BaseComponentCache_o *pUVar7;
  Il2CppObject *x;
  bool bVar8;
  byte bVar9;
  char cVar10;
  UnityEngine_LayerMask_o mask;
  int32_t iVar11;
  UnityEngine_SphereCollider_o *__this_01;
  UnityEngine_Transform_o *pUVar12;
  System_Int32_array *layers;
  UnityEngine_Collider_array *pUVar13;
  System_Collections_Generic_List_Collider__o *__this_02;
  System_Collections_Generic_HashSet_Horse__o *__this_03;
  UnityEngine_GameObject_o *pUVar14;
  Characters_BaseCharacter_o *pCVar15;
  CustomLogic_CustomLogicCollisionHandler_o *__this_04;
  System_String_o *pSVar16;
  SimpleJSONFixed_JSONNode_o *pSVar17;
  Il2CppObject *pIVar18;
  UI_InGameMenu_o *pUVar19;
  Cameras_InGameCamera_o *pCVar20;
  UnityEngine_AudioSource_o *__this_05;
  Characters_BaseCharacter_c *pCVar21;
  Characters_BaseCharacter_o *pCVar22;
  MethodInfo *pMVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar29;
  UnityEngine_Quaternion_o UVar27;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar28;
  UnityEngine_Vector3_o position;
  float local_b8;
  System_Collections_Generic_List_Enumerator_object__o local_98;
  undefined1 local_80 [16];
  UnityEngine_Object_o *local_70;
  undefined1 local_68 [16];
  UnityEngine_Vector3_Fields local_58;
  float local_48;
  
  if (Il2CppMethodInitialized_07545171 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_AudioSource);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_SphereCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Collider_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Horse_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Horse_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Horse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Horse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Collider_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Collider_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Collider_ctor_7193be0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"BladeThrow");
    il2cpp_codegen_initialize_runtime_metadata(&"Blade");
    il2cpp_codegen_initialize_runtime_metadata(&"RestrictAngle");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeHitNape");
    Il2CppMethodInitialized_07545171 = '\x01';
  }
  local_98.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_98.fields._index = 0;
  local_98.fields._version = 0;
  local_98.fields._current = (Il2CppObject *)0x0;
  __this_01 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_SphereCollider);
  if (__this_01 != (UnityEngine_SphereCollider_o *)0x0) {
    fVar24 = UnityEngine_SphereCollider__get_radius(__this_01,(MethodInfo *)0x0);
    pUVar12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
      UVar28 = UnityEngine_Transform__get_lossyScale(pUVar12,(MethodInfo *)0x0);
      pUVar12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
        position = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
        layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,3);
        if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
        }
        if (layers != (System_Int32_array *)0x0) {
          uVar5 = (uint)layers->max_length;
          if (uVar5 != 0) {
            pUVar6 = TypeInfo_Utility_PhysicsLayer->static_fields;
            layers->m_Items[0] = pUVar6->Hurtbox;
            if ((uVar5 != 1) && (layers->m_Items[1] = pUVar6->Human, 2 < uVar5)) {
              local_b8 = UVar28.fields.x;
              layers->m_Items[2] = pUVar6->NPC;
              mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
              iVar11 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
              }
              uVar25 = 0;
              uVar26 = 0;
              pUVar13 = UnityEngine_Physics__OverlapSphere_69dcbd0
                                  (position,fVar24 * local_b8 * 1.3,iVar11,(MethodInfo *)0x0);
              __this_02 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Collider);
              System_Collections_Generic_List_object____ctor_395ca70
                        ((System_Collections_Generic_List_object__o *)__this_02,
                         (System_Collections_Generic_IEnumerable_T__o *)pUVar13,
                         (MethodInfo_395CA70 *)
                         MethodInfo_System_Collections_Generic_List_Collider_ctor_7193be0);
              __this_03 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Horse);
              System_Collections_Generic_HashSet_object____ctor
                        ((System_Collections_Generic_HashSet_object__o *)__this_03,
                         (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_Horse_ctor);
              if (__this_02 != (System_Collections_Generic_List_Collider__o *)0x0) {
                bVar8 = System_Collections_Generic_List_object___Contains
                                  ((System_Collections_Generic_List_object__o *)__this_02,
                                   (Il2CppObject *)firstCollider,
                                   (MethodInfo_395D6D0 *)
                                   MethodInfo_System_Collections_Generic_List_Collider_Contains);
                pMVar23 = MethodInfo_System_Collections_Generic_List_Collider_Add;
                if (!bVar8) {
                  piVar1 = &(__this_02->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pUVar13 = (__this_02->fields)._items;
                  if (pUVar13 == (UnityEngine_Collider_array *)0x0) goto label_05871700;
                  uVar5 = (__this_02->fields)._size;
                  if (uVar5 < (uint)pUVar13->max_length) {
                    (__this_02->fields)._size = uVar5 + 1;
                    pUVar13->m_Items[(int)uVar5] = firstCollider;
                    Il2CppCodeGenWriteBarrier(pUVar13->m_Items + (int)uVar5);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_02,
                               (Il2CppObject *)firstCollider,
                               (MethodInfo_395D230 *)pMVar23->klass->rgctx_data[0xe].method);
                  }
                }
                System_Collections_Generic_List_object___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
                           (System_Collections_Generic_List_object__o *)__this_02,
                           (MethodInfo_395E050 *)
                           MethodInfo_System_Collections_Generic_List_Collider_GetEnumerator);
                local_98.fields._current = (Il2CppObject *)local_70;
                local_98.fields._list = (System_Collections_Generic_List_T__o *)local_80._0_8_;
                local_98.fields._index = local_80._8_4_;
                local_98.fields._version = local_80._12_4_;
                local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
                local_80._8_8_ = &local_98;
label_05870ca0:
                do {
                  do {
                    do {
                      do {
                        while( true ) {
                          bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                            (&local_98,
                                             (MethodInfo_4C45C50 *)
                                             MethodInfo_System_Collections_Generic_List_Enumerator_Collider_MoveNext
                                            );
                          x = local_98.fields._current;
                          if (!bVar8) {
                            System_Collections_Generic_List_Enumerator_object___Dispose
                                      (&local_98,
                                       (MethodInfo_4C45C40 *)
                                       MethodInfo_System_Collections_Generic_List_Enumerator_Collider_Dispose)
                            ;
                            return;
                          }
                          if ((UnityEngine_Object_o *)local_98.fields._current == (UnityEngine_Object_o *)0x0)
                          {
                            ThrowNullReferenceException();
                          }
                          pUVar12 = UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)local_98.fields._current,
                                               (MethodInfo *)0x0);
                          if (pUVar12 == (UnityEngine_Transform_o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          pUVar12 = UnityEngine_Transform__get_root(pUVar12,(MethodInfo *)0x0);
                          if (pUVar12 == (UnityEngine_Transform_o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          pUVar14 = UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0);
                          if (pUVar14 == (UnityEngine_GameObject_o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          pCVar15 = UnityEngine_GameObject__GetComponent_object_
                                              (pUVar14,(MethodInfo_353B730 *)
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter
                                              );
                          pUVar14 = UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
                          if (pUVar14 == (UnityEngine_GameObject_o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          pMVar23 = MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler
                          ;
                          __this_04 = UnityEngine_GameObject__GetComponent_object_
                                                (pUVar14,(MethodInfo_353B730 *)
                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler
                                                );
                          iVar11 = Projectiles_BladeThrowProjectile__CalculateDamage(__this,pMVar23);
                          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                          }
                          bVar8 = UnityEngine_Object__op_Inequality
                                            ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,
                                             (MethodInfo *)0x0);
                          pSVar16 = "BladeThrow";
                          if (!bVar8) break;
                          pCVar15 = (__this->fields)._owner;
                          pCVar22 = pCVar15;
                          if (Il2CppMethodInitialized_07545163 == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
                            Il2CppMethodInitialized_07545163 = '\x01';
                            pCVar22 = (__this->fields)._owner;
                          }
                          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                          }
                          bVar8 = UnityEngine_Object__op_Inequality
                                            ((UnityEngine_Object_o *)pCVar22,(UnityEngine_Object_o *)0x0,
                                             (MethodInfo *)0x0);
                          if (bVar8) {
                            pCVar22 = (__this->fields)._owner;
                            if (pCVar22 == (Characters_BaseCharacter_o *)0x0) {
                              ThrowNullReferenceException();
                            }
                            pSVar16 = (pCVar22->fields).RichTextName;
                          }
                          pUVar12 = UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                          if (pUVar12 == (UnityEngine_Transform_o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          UVar28 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
                          if (__this_04 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          CustomLogic_CustomLogicCollisionHandler__GetHit
                                    (__this_04,pCVar15,pSVar16,iVar11,"BladeThrow",UVar28,
                                     (MethodInfo *)0x0);
                        }
                        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                        }
                        bVar8 = UnityEngine_Object__op_Equality
                                          ((UnityEngine_Object_o *)pCVar15,(UnityEngine_Object_o *)0x0,
                                           (MethodInfo *)0x0);
                      } while (bVar8);
                      pCVar22 = (__this->fields)._owner;
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      bVar8 = UnityEngine_Object__op_Equality
                                        ((UnityEngine_Object_o *)pCVar15,(UnityEngine_Object_o *)pCVar22,
                                         (MethodInfo *)0x0);
                    } while (bVar8);
                    pSVar16 = (__this->fields)._team;
                    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
                    }
                    bVar8 = GameManagers_TeamInfo__SameTeam_5858ba0(pCVar15,pSVar16,(MethodInfo *)0x0);
                  } while (bVar8);
                  if (pCVar15 == (Characters_BaseCharacter_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                } while ((pCVar15->fields).Dead != false);
                pCVar21 = pCVar15->klass;
                bVar9 = (pCVar21->_2).typeHierarchyDepth;
                bVar4 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
                if ((bVar4 <= bVar9) &&
                   ((pCVar21->_2).typeHierarchy[(ulong)bVar4 - 1] == (Il2CppClass *)TypeInfo_Characters_Horse)
                   ) goto code_r0x05870f2f;
                goto label_05870f62;
              }
              goto label_05871700;
            }
          }
          ThrowIndexOutOfRangeException();
        }
      }
    }
  }
label_05871700:
  ThrowNullReferenceException();
code_r0x05870f2f:
  if (__this_03 == (System_Collections_Generic_HashSet_Horse__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar8 = System_Collections_Generic_HashSet_object___Add
                    ((System_Collections_Generic_HashSet_object__o *)__this_03,(Il2CppObject *)pCVar15,
                     (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_Horse_Add);
  if (bVar8) {
    pCVar21 = pCVar15->klass;
    bVar9 = (pCVar21->_2).typeHierarchyDepth;
label_05870f62:
    bVar4 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if ((bVar9 < bVar4) ||
       ((pCVar21->_2).typeHierarchy[(ulong)bVar4 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
      pCVar22 = (__this->fields)._owner;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((bVar8) && (pCVar22 = (__this->fields)._owner, pCVar22 != (Characters_BaseCharacter_o *)0x0)) {
        pCVar21 = pCVar22->klass;
        bVar9 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
        if ((bVar9 <= (pCVar21->_2).typeHierarchyDepth) &&
           ((pCVar21->_2).typeHierarchy[(ulong)bVar9 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pUVar19 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
          if (pUVar19 == (UI_InGameMenu_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar9 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
          if (((pUVar19->klass->_2).typeHierarchyDepth < bVar9) ||
             ((pUVar19->klass->_2).typeHierarchy[(ulong)bVar9 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu))
          {
            il2cpp_codegen_raise_invalid_cast_exception();
          }
          UI_InGameMenu__ShowKillScore(pUVar19,iVar11,false,(MethodInfo *)0x0);
          pCVar22 = (__this->fields)._owner;
          pSVar16 = UnityEngine_Object__get_name((UnityEngine_Object_o *)x,(MethodInfo *)0x0);
          (*(pCVar15->klass->vtable)._95_GetHit.methodPtr)
                    (pCVar15,pCVar22,iVar11,"BladeThrow",pSVar16,
                     (pCVar15->klass->vtable)._95_GetHit.method);
          pUVar7 = (pCVar15->fields).Cache;
          if (pUVar7 == (Utility_BaseComponentCache_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar12 = (pUVar7->fields).Transform;
          if (pUVar12 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          pCVar20 = (Cameras_InGameCamera_o *)
                    TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
          UVar28 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
          if (pCVar20 == (Cameras_InGameCamera_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar9 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
          if (((pCVar20->klass->_2).typeHierarchyDepth < bVar9) ||
             ((pCVar20->klass->_2).typeHierarchy[(ulong)bVar9 - 1] !=
              (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
            il2cpp_codegen_raise_invalid_cast_exception(pCVar20);
          }
          Cameras_InGameCamera__TakeSnapshot(pCVar20,UVar28,iVar11,(MethodInfo *)0x0);
          goto label_05870ca0;
        }
      }
      pSVar16 = UnityEngine_Object__get_name((UnityEngine_Object_o *)x,(MethodInfo *)0x0);
      (*(pCVar15->klass->vtable)._96_GetHit.methodPtr)
                (pCVar15,"Blade",100,"BladeThrow",pSVar16,
                 (pCVar15->klass->vtable)._96_GetHit.method);
      goto label_05870ca0;
    }
    if ((pCVar15->fields).AI != false) {
      pUVar12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar12 == (UnityEngine_Transform_o *)0x0) {
        ThrowNullReferenceException();
      }
      UVar28 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
      uVar2 = (__this->fields)._velocity.fields.x;
      uVar3 = (__this->fields)._velocity.fields.y;
      local_68._4_4_ = uVar3;
      local_68._0_4_ = uVar2;
      local_68._8_8_ = 0;
      fVar24 = (__this->fields)._velocity.fields.z;
      local_48 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
      if ((*(uint64_t *)((char *)pCVar15 + 0x108)) == (void *)0x0) {
        ThrowNullReferenceException();
      }
      y = *(UnityEngine_Object_o **)((long)(*(uint64_t *)((char *)pCVar15 + 0x108)) + 0x68);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)x,y,(MethodInfo *)0x0);
      if (bVar8) {
        if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
        }
        pSVar17 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
        if (pSVar17 == (SimpleJSONFixed_JSONNode_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar17 = (*(pSVar17->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar17,"Blade",(pSVar17->klass->vtable)._7_get_Item.method);
        if (pSVar17 == (SimpleJSONFixed_JSONNode_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar17 = (*(pSVar17->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar17,"RestrictAngle",(pSVar17->klass->vtable)._7_get_Item.method);
        if (pSVar17 == (SimpleJSONFixed_JSONNode_o *)0x0) {
          ThrowNullReferenceException();
        }
        _fVar29 = (*(pSVar17->klass->vtable)._37_get_AsFloat.methodPtr)
                            (pSVar17,(pSVar17->klass->vtable)._37_get_AsFloat.method);
        fVar24 = fVar24 * local_48;
        local_b8 = UVar28.fields.x;
        uVar25 = 0;
        uVar26 = 0;
        cVar10 = (*(code *)((Il2CppClass *)pCVar15->klass)->vtable[202].methodPtr)
                           (local_b8 - ((float)local_68._0_4_ * local_48 + (float)local_68._0_4_ * local_48),
                            UVar28.fields.z - (fVar24 + fVar24),(undefined8)_fVar29,pCVar15);
        if (cVar10 == '\0') goto label_05870ca0;
        pCVar22 = (__this->fields)._owner;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar8 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((bVar8) && (pCVar22 = (__this->fields)._owner, pCVar22 != (Characters_BaseCharacter_o *)0x0)) {
          pCVar21 = pCVar22->klass;
          bVar9 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
          if ((bVar9 <= (pCVar21->_2).typeHierarchyDepth) &&
             ((pCVar21->_2).typeHierarchy[(ulong)bVar9 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            obj = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
            pIVar18 = il2cpp_codegen_is_inst_class((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_UI_InGameMenu);
            if (pIVar18 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar19 = (UI_InGameMenu_o *)
                      il2cpp_codegen_is_inst_class((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_UI_InGameMenu);
            UI_InGameMenu__ShowKillScore(pUVar19,iVar11,false,(MethodInfo *)0x0);
            if ((*(uint64_t *)((char *)pCVar15 + 0x108)) == (void *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar12 = *(UnityEngine_Transform_o **)((long)(*(uint64_t *)((char *)pCVar15 + 0x108)) + 0x40);
            if (pUVar12 == (UnityEngine_Transform_o *)0x0) {
              ThrowNullReferenceException();
            }
            obj_00 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
            UVar28 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
            pIVar18 = il2cpp_codegen_is_inst_class
                                ((Il2CppObject *)obj_00,(Il2CppClass *)TypeInfo_Cameras_InGameCamera);
            if (pIVar18 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            pCVar20 = (Cameras_InGameCamera_o *)
                      il2cpp_codegen_is_inst_class
                                ((Il2CppObject *)obj_00,(Il2CppClass *)TypeInfo_Cameras_InGameCamera);
            uVar25 = 0;
            uVar26 = 0;
            Cameras_InGameCamera__TakeSnapshot(pCVar20,UVar28,iVar11,(MethodInfo *)0x0);
          }
        }
        pUVar12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar12 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar12 = UnityEngine_Transform__Find(pUVar12,"BladeHitNape",(MethodInfo *)0x0);
        if (pUVar12 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_05 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar12,
                               (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_AudioSource
                              );
        if (__this_05 == (UnityEngine_AudioSource_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_AudioSource__Play_68b06a0(__this_05,(MethodInfo *)0x0);
      }
      if ((*(uint64_t *)((char *)pCVar15 + 0x108)) == (void *)0x0) {
        ThrowNullReferenceException();
      }
      __this_00 = *(System_Collections_Generic_List_object__o **)((long)(*(uint64_t *)((char *)pCVar15 + 0x108)) + 0xf8);
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar8 = System_Collections_Generic_List_object___Contains
                        (__this_00,x,
                         (MethodInfo_395D6D0 *)MethodInfo_System_Collections_Generic_List_Collider_Contains);
      if (bVar8) {
        if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
        }
        pSVar16 = TypeInfo_Effects_EffectPrefabs->static_fields->CriticalHit;
        pUVar12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar12 == (UnityEngine_Transform_o *)0x0) {
          ThrowNullReferenceException();
        }
        UVar28 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
        local_58.x = 4.712389;
        local_58.y = 0.0;
        local_58.z = 0.0;
        UVar27 = UnityEngine_Quaternion__Internal_FromEulerRad
                           ((UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
        local_68._8_4_ = uVar25;
        local_68._0_8_ = UVar27.fields._8_8_;
        local_68._12_4_ = uVar26;
        if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
        }
        uVar25 = 0;
        uVar26 = 0;
        rotation.fields.z = (float)local_68._0_4_;
        rotation.fields.w = (float)local_68._4_4_;
        rotation.fields.x = UVar27.fields.x;
        rotation.fields.y = UVar27.fields.y;
        Effects_EffectSpawner__Spawn
                  (pSVar16,UVar28,rotation,1.0,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
        pCVar22 = (__this->fields)._owner;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar8 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pCVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((!bVar8) && (pCVar22 = (__this->fields)._owner, pCVar22 != (Characters_BaseCharacter_o *)0x0)) {
          bVar9 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
          if ((bVar9 <= (pCVar22->klass->_2).typeHierarchyDepth) &&
             ((pCVar22->klass->_2).typeHierarchy[(ulong)bVar9 - 1] == (Il2CppClass *)TypeInfo_Characters_Human
             )) {
            pSVar16 = UnityEngine_Object__get_name((UnityEngine_Object_o *)x,(MethodInfo *)0x0);
            (*(pCVar15->klass->vtable)._95_GetHit.methodPtr)
                      (pCVar15,pCVar22,iVar11,"BladeThrow",pSVar16,
                       (pCVar15->klass->vtable)._95_GetHit.method);
            goto label_05870ca0;
          }
        }
        pSVar16 = UnityEngine_Object__get_name((UnityEngine_Object_o *)x,(MethodInfo *)0x0);
        (*(pCVar15->klass->vtable)._96_GetHit.methodPtr)
                  (pCVar15,"Blade",100,"BladeThrow",pSVar16,
                   (pCVar15->klass->vtable)._96_GetHit.method);
      }
    }
  }
  goto label_05870ca0;
}


// Projectiles.BladeThrowProjectile$$CalculateDamage
// il2cpp: int32_t Projectiles_BladeThrowProjectile__CalculateDamage (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x58718d0

int32_t Projectiles_BladeThrowProjectile__CalculateDamage
                  (Projectiles_BladeThrowProjectile_o *__this,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  Characters_BaseCharacter_o *pCVar3;
  bool bVar4;
  int iVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  long *plVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  if (Il2CppMethodInitialized_07545172 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Blade");
    il2cpp_codegen_initialize_runtime_metadata(&"DamageMultiplier");
    Il2CppMethodInitialized_07545172 = '\x01';
  }
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  fVar9 = (__this->fields).InitialPlayerVelocity.fields.x;
  fVar10 = (__this->fields).InitialPlayerVelocity.fields.y;
  fVar1 = (__this->fields).InitialPlayerVelocity.fields.z;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar9 = fVar1 * fVar1 + fVar10 * fVar10 + fVar9 * fVar9;
  if (fVar9 < 0.0) {
    fVar9 = sqrtf(fVar9);
  }
  else {
    fVar9 = SQRT(fVar9);
  }
  if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
  }
  pSVar6 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
  if (pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar6 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar6,"Blade",(pSVar6->klass->vtable)._7_get_Item.method);
    if (pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      plVar7 = (long *)(*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar6,"DamageMultiplier",
                                  *(MethodInfo **)((long)&(pSVar6->klass->vtable)._7_get_Item + 8));
      if (plVar7 != (long *)0x0) {
        fVar10 = (float)(**(code **)(*plVar7 + 0x388))(plVar7);
        iVar5 = (int)(fVar9 * 10.0 * fVar10);
        iVar8 = 10;
        if (10 < iVar5) {
          iVar8 = iVar5;
        }
        pCVar3 = (__this->fields)._owner;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((bVar4) && (pCVar3 = (__this->fields)._owner, pCVar3 != (Characters_BaseCharacter_o *)0x0)) {
          bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
          if ((bVar2 <= (pCVar3->klass->_2).typeHierarchyDepth) &&
             (((pCVar3->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Characters_Human
              && ((pCVar3->fields).CustomDamageEnabled != false)))) {
            iVar8 = (pCVar3->fields).CustomDamage;
          }
        }
        return iVar8;
      }
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.BladeThrowProjectile$$Update
// il2cpp: void Projectiles_BladeThrowProjectile__Update (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x5871b00

void Projectiles_BladeThrowProjectile__Update(Projectiles_BladeThrowProjectile_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Rigidbody_o *__this_02;
  float fVar3;
  float fVar4;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o axis;
  
  if (Il2CppMethodInitialized_07545173 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Rigidbody);
    Il2CppMethodInitialized_07545173 = '\x01';
  }
  Characters_BaseMovementSync__Update((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  pPVar2 = (__this->fields)._photonView;
  if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((pPVar2->fields)._IsMine_k__BackingField != false) {
      fVar4 = (__this->fields)._timeLeft;
      fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar4 = fVar4 - fVar3;
      (__this->fields)._timeLeft = fVar4;
      if (fVar4 <= 0.0) {
        (*(__this->klass->vtable)._16_OnExceedLiveTime.methodPtr)
                  (__this,(__this->klass->vtable)._16_OnExceedLiveTime.method);
      }
    }
    if ((__this->fields).Disabled != false) {
      return;
    }
    __this_02 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Rigidbody);
    if (__this_02 != (UnityEngine_Rigidbody_o *)0x0) {
      UVar5 = UnityEngine_Rigidbody__get_linearVelocity(__this_02,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753e729 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e729 = '\x01';
        uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      fVar4 = UVar5.fields.z * UVar5.fields.z +
              UVar5.fields.y * UVar5.fields.y + UVar5.fields.x * UVar5.fields.x;
      if (fVar4 < 0.0) {
        fVar4 = sqrtf(fVar4);
      }
      else {
        fVar4 = SQRT(fVar4);
      }
      __this_00 = (__this->fields)._blade;
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UVar5 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._blade;
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          if (fVar4 <= 80.0) {
            fVar4 = 80.0;
          }
          axis = UnityEngine_Transform__get_right(__this_01,(MethodInfo *)0x0);
          fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          UnityEngine_Transform__RotateAround(__this_00,UVar5,axis,fVar4 * 1600.0 * fVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.BladeThrowProjectile$$.ctor
// il2cpp: void Projectiles_BladeThrowProjectile___ctor (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x5871d20

void Projectiles_BladeThrowProjectile___ctor(Projectiles_BladeThrowProjectile_o *__this,MethodInfo *method)

{
  Projectiles_BaseProjectile___ctor((Projectiles_SmokeBombProjectile_o *)__this,method);
  return;
}


