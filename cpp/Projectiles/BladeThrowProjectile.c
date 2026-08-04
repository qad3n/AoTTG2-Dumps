// Type: Projectiles.BladeThrowProjectile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Projectiles/BladeThrowProjectile.cs
// Prior real C# source (older reference): Assets/Scripts/Projectiles/BladeThrowProjectile.cs
// --------------------------------

// Projectiles.BladeThrowProjectile$$get_DestroyDelay
// il2cpp: float Projectiles_BladeThrowProjectile__get_DestroyDelay (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x4205df0

float Projectiles_BladeThrowProjectile__get_DestroyDelay
                (Projectiles_BladeThrowProjectile_o *__this,MethodInfo *method)

{
  return 1.5;
}


// Projectiles.BladeThrowProjectile$$Awake
// il2cpp: void Projectiles_BladeThrowProjectile__Awake (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x4205e00

void Projectiles_BladeThrowProjectile__Awake(Projectiles_BladeThrowProjectile_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  Il2CppObject *item;
  System_Object_array *pSVar5;
  Il2CppClass *pIVar6;
  UnityEngine_Collider_c *pUVar7;
  System_Action_Hashtable__o *pSVar8;
  System_Delegate_array *__this_00;
  UI_InGameMenu_o *pUVar9;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  Photon_Pun_PhotonMessageInfo_o info;
  UnityEngine_Object_o *x;
  char cVar10;
  bool_conflict bVar11;
  UnityEngine_LayerMask_o mask;
  int32_t layerMask;
  uint uVar12;
  UnityEngine_Transform_o *pUVar13;
  UnityEngine_GameObject_o *pUVar14;
  MeleeWeaponTrail_o *pMVar15;
  undefined8 uVar16;
  Photon_Pun_PhotonView_o *pPVar17;
  UnityEngine_Collider_array *pUVar18;
  UnityEngine_Collider_array *pUVar19;
  Characters_BaseCharacter_o *pCVar20;
  UnityEngine_AudioSource_o *pUVar21;
  UnityEngine_Collider_o *firstCollider;
  UnityEngine_SphereCollider_o *__this_05;
  System_Int32_array *layers;
  System_Collections_Generic_List_object__o *__this_06;
  System_String_o *pSVar22;
  long *plVar23;
  MethodInfo *method_00;
  long *plVar24;
  UnityEngine_Collider_array *__this_07;
  MethodInfo_24E7B40 *item_00;
  MethodInfo *method_01;
  Projectiles_BladeThrowProjectile_o *pPVar25;
  UnityEngine_Collider_array *pUVar26;
  System_String_o *unaff_R12;
  Photon_Pun_PhotonView_o *unaff_R14;
  float fVar27;
  float fVar28;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Vector3_o UVar29;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  undefined1 auVar30 [12];
  UnityEngine_Quaternion_o UVar31;
  undefined1 in_stack_fffffffffffffec0 [12];
  float in_stack_fffffffffffffecc;
  float in_stack_fffffffffffffed0;
  float in_stack_fffffffffffffed4;
  _union_249395 _Stack_110;
  undefined8 uStack_108;
  UnityEngine_Object_o *pUStack_100;
  undefined1 auStack_f0 [16];
  float fStack_e0;
  _union_249395 _Stack_d0;
  undefined8 uStack_c8;
  UnityEngine_Object_o *pUStack_c0;
  UnityEngine_Collider_array *pUStack_b8;
  System_String_o *pSStack_b0;
  float fStack_7c;
  undefined8 uStack_78;
  
  if (g_data_057ad8e1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWeaponTrail);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Blade");
    il2cpp_runtime_helper_023445d0(&"Model");
    g_data_057ad8e1 = '\x01';
  }
  Characters_BaseMovementSync__Awake((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  pPVar25 = __this;
  pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
    pUVar13 = UnityEngine_Transform__Find(pUVar13,"Blade",(MethodInfo *)0x0);
    (__this->fields)._blade = pUVar13;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._blade);
    pPVar25 = (Projectiles_BladeThrowProjectile_o *)(__this->fields)._blade;
    if ((pPVar25 != (Projectiles_BladeThrowProjectile_o *)0x0) &&
       (pUVar13 = UnityEngine_Transform__Find
                            ((UnityEngine_Transform_o *)pPVar25,"Model",(MethodInfo *)0x0),
       pUVar13 != (UnityEngine_Transform_o *)0x0)) {
      pUVar14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0);
      (__this->fields)._model = pUVar14;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._model,pUVar14);
      pMVar15 = (MeleeWeaponTrail_o *)
                UnityEngine_Component__GetComponentInChildren_object__24e7d50
                          ((UnityEngine_Component_o *)__this,MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWeaponTrail);
      (__this->fields).WeaponTrail = pMVar15;
      __this = (Projectiles_BladeThrowProjectile_o *)&(__this->fields).WeaponTrail;
      pPVar25 = __this;
      il2cpp_runtime_helper_022b4080();
      lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
      if ((lVar4 != 0) &&
         ((lVar4 = *(long *)(lVar4 + 0xa0), lVar4 != 0 &&
          (*(MeleeWeaponTrail_o **)__this != (MeleeWeaponTrail_o *)0x0)))) {
        *(bool *)&((*(MeleeWeaponTrail_o **)__this)->fields)._emit = *(int *)(lVar4 + 0x14) != 0;
        return;
      }
    }
  }
  uVar16 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ad8e2 = '\x01';
  }
  pCVar20 = (pPVar25->fields)._owner;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pCVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar11 == '\0') ||
     (pCVar20 = (pPVar25->fields)._owner, pCVar20 == (Characters_BaseCharacter_o *)0x0)) {
    return;
  }
  bVar2 = (TypeInfo_Human->_2).naturalAligment;
  if ((pCVar20->klass->_2).naturalAligment < bVar2) {
    return;
  }
  if ((pCVar20->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Human) {
    return;
  }
  bVar11 = Characters_BaseCharacter__IsMine(pCVar20,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  pCVar20 = (pPVar25->fields)._owner;
  if (pCVar20 == (Characters_BaseCharacter_o *)0x0) {
label_04206064:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar2 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar2 <= (pCVar20->klass->_2).naturalAligment) &&
       ((pCVar20->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Human)) {
      lVar4 = *(long *)&pCVar20[1].fields.FootstepsEnabled;
      if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x178), lVar4 != 0)) {
        pMVar15 = (pPVar25->fields).WeaponTrail;
        pCVar20 = (Characters_BaseCharacter_o *)0x0;
        if (pMVar15 != (MeleeWeaponTrail_o *)0x0) {
          MeleeWeaponTrail__SetMaterial(pMVar15,*(UnityEngine_Material_o **)(lVar4 + 0x28),(MethodInfo *)0x0);
          return;
        }
      }
      goto label_04206064;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad8e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ad8e3 = '\x01';
  }
  lVar4 = MethodInfo_Void_Add;
  pUVar26 = (UnityEngine_Collider_array *)(pCVar20->fields).Animation;
  if (pUVar26 != (UnityEngine_Collider_array *)0x0) {
    item = *(Il2CppObject **)&(pCVar20->fields).GroundMaskLayers;
    piVar1 = (int32_t *)((long)&pUVar26->max_length + 4);
    *piVar1 = *piVar1 + 1;
    pSVar5 = ((System_Collections_Generic_List_object__Fields *)&pUVar26->bounds)->_items;
    if (pSVar5 != (System_Object_array *)0x0) {
      uVar12 = (uint)pUVar26->max_length;
      if ((uint)pSVar5->max_length <= uVar12) {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pUVar26,item,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        return;
      }
      *(uint *)&pUVar26->max_length = uVar12 + 1;
      pSVar5->m_Items[(int)uVar12] = item;
      il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar12);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)(pUVar26->m_Items + 1) != '\0') {
    return;
  }
  __this_07 = (UnityEngine_Collider_array *)0x0;
  plVar24 = (long *)pUVar26;
  pPVar25 = __this;
  pPVar17 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)pUVar26,(MethodInfo *)0x0);
  if (pPVar17 != (Photon_Pun_PhotonView_o *)0x0) {
    if (__this != (Projectiles_BladeThrowProjectile_o *)(pPVar17->fields)._Owner_k__BackingField) {
      return;
    }
    info.fields.Sender = (Photon_Realtime_Player_o *)pPVar25;
    info.fields._0_8_ = uVar16;
    info.fields.photonView = unaff_R14;
    Projectiles_BaseProjectile__DisableRPC
              ((Projectiles_BaseProjectile_o *)pUVar26,info,(MethodInfo *)__this_07);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_GetComponent_AudioSource);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&"BladeHit");
    g_data_057ad8e4 = '\x01';
  }
  item_00 = (MethodInfo_24E7B40 *)0x0;
  pUVar26 = (UnityEngine_Collider_array *)plVar24;
  pPVar17 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)plVar24,(MethodInfo *)0x0);
  if (pPVar17 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((char)(pPVar17->fields)._IsMine_k__BackingField == '\0') ||
       (*(char *)(((UnityEngine_Collider_array *)plVar24)->m_Items + 1) != '\0')) {
      return;
    }
    if (__this_07 != (UnityEngine_Collider_array *)0x0) {
      item_00 = (MethodInfo_24E7B40 *)0x0;
      pUVar26 = __this_07;
      pUVar18 = (UnityEngine_Collider_array *)
                UnityEngine_Collision__get_collider((UnityEngine_Collision_o *)__this_07,(MethodInfo *)0x0);
      if (pUVar18 != (UnityEngine_Collider_array *)0x0) {
        item_00 = (MethodInfo_24E7B40 *)0x0;
        pUVar19 = (UnityEngine_Collider_array *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0);
        pUVar26 = pUVar18;
        if (pUVar19 != (UnityEngine_Collider_array *)0x0) {
          item_00 = (MethodInfo_24E7B40 *)0x0;
          pUVar13 = UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pUVar19,(MethodInfo *)0x0);
          pUVar26 = pUVar19;
          if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
            pCVar20 = (Characters_BaseCharacter_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar13,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar11 = UnityEngine_Object__op_Equality
                               ((UnityEngine_Object_o *)pCVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            if ((char)bVar11 == '\0') {
              unaff_R12 = (System_String_o *)((UnityEngine_Collider_array *)plVar24)->m_Items[0x11];
              if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar11 = GameManagers_TeamInfo__SameTeam_446ffa0(pCVar20,unaff_R12,(MethodInfo *)0x0);
              if (((char)bVar11 == '\0') && (pCVar20 != (Characters_BaseCharacter_o *)0x0)) {
                bVar2 = (TypeInfo_BaseTitan->_2).naturalAligment;
                if ((bVar2 <= (pCVar20->klass->_2).naturalAligment) &&
                   ((pCVar20->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BaseTitan)) {
                  if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar22 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
                  item_00 = (MethodInfo_24E7B40 *)0x0;
                  pUVar26 = (UnityEngine_Collider_array *)plVar24;
                  pUVar13 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)plVar24,(MethodInfo *)0x0);
                  if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
                    UVar29 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
                    fStack_7c = UVar29.fields.z;
                    uStack_78 = UVar29.fields._0_8_;
                    UVar31 = UnityEngine_Quaternion__Internal_FromEulerRad
                                       ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0);
                    uVar16 = UVar31.fields._8_8_;
                    fVar27 = UVar31.fields.x;
                    fVar28 = UVar31.fields.y;
                    goto label_042062db;
                  }
                  goto label_04206456;
                }
              }
            }
            else {
              if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar22 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb0);
              item_00 = (MethodInfo_24E7B40 *)0x0;
              pUVar26 = (UnityEngine_Collider_array *)plVar24;
              pUVar13 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)plVar24,(MethodInfo *)0x0);
              if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_04206456;
              UVar29 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
              fStack_7c = UVar29.fields.z;
              uStack_78 = UVar29.fields._0_8_;
              UVar31 = UnityEngine_Quaternion__LookRotation_4debb20
                                 ((UnityEngine_Vector3_o)
                                  *(UnityEngine_Vector3_Fields *)
                                   (((UnityEngine_Collider_array *)plVar24)->m_Items + 0x12),(MethodInfo *)0x0
                                 );
              uVar16 = UVar31.fields._8_8_;
              fVar27 = UVar31.fields.x;
              fVar28 = UVar31.fields.y;
label_042062db:
              UVar31.fields.y = fVar28;
              UVar31.fields.x = fVar27;
              UVar29.fields.z = fStack_7c;
              UVar29.fields.x = (float)(undefined4)uStack_78;
              UVar29.fields.y = (float)uStack_78._4_4_;
              UVar31.fields.z = (float)(int)uVar16;
              UVar31.fields.w = (float)(int)((ulong)uVar16 >> 0x20);
              Effects_EffectSpawner__Spawn
                        (pSVar22,UVar29,UVar31,1.0,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
            }
            item_00 = (MethodInfo_24E7B40 *)0x0;
            pUVar26 = (UnityEngine_Collider_array *)plVar24;
            pUVar18 = (UnityEngine_Collider_array *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)plVar24,(MethodInfo *)0x0);
            if (((pUVar18 != (UnityEngine_Collider_array *)0x0) &&
                (item_00 = "BladeHit",
                pUVar19 = (UnityEngine_Collider_array *)
                          UnityEngine_Transform__Find
                                    ((UnityEngine_Transform_o *)pUVar18,(System_String_o *)"BladeHit",
                                     (MethodInfo *)0x0), pUVar26 = pUVar18,
                pUVar19 != (UnityEngine_Collider_array *)0x0)) &&
               (item_00 = MethodInfo_AudioSource_GetComponent_AudioSource,
               pUVar21 = (UnityEngine_AudioSource_o *)
                         UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar19,MethodInfo_AudioSource_GetComponent_AudioSource), pUVar26 = pUVar19,
               pUVar21 != (UnityEngine_AudioSource_o *)0x0)) {
              UnityEngine_AudioSource__Play_4daa2c0(pUVar21,(MethodInfo *)0x0);
              firstCollider =
                   UnityEngine_Collision__get_collider((UnityEngine_Collision_o *)__this_07,(MethodInfo *)0x0)
              ;
              Projectiles_BladeThrowProjectile__CheckHurtboxes
                        ((Projectiles_BladeThrowProjectile_o *)plVar24,firstCollider,method_00);
              pIVar6 = (((UnityEngine_Collider_array *)plVar24)->obj).klass;
              (*pIVar6->vtable[0x11].methodPtr)(plVar24,pIVar6->vtable[0x11].method);
              return;
            }
          }
        }
      }
    }
  }
label_04206456:
  il2cpp_runtime_helper_022b2c90();
  pUStack_b8 = (UnityEngine_Collider_array *)plVar24;
  pSStack_b0 = unaff_R12;
  if (g_data_057ad8e5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_GetComponent_AudioSource);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SphereCollider_GetComponent_SphereCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"BladeThrow");
    il2cpp_runtime_helper_023445d0(&"Blade");
    il2cpp_runtime_helper_023445d0(&"RestrictAngle");
    il2cpp_runtime_helper_023445d0(&"BladeHitNape");
    g_data_057ad8e5 = '\x01';
  }
  _Stack_110.genericMethod = (void *)0x0;
  uStack_108 = 0;
  pUStack_100 = (UnityEngine_Object_o *)0x0;
  __this_05 = (UnityEngine_SphereCollider_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar26,MethodInfo_SphereCollider_GetComponent_SphereCollider);
  if (__this_05 != (UnityEngine_SphereCollider_o *)0x0) {
    in_stack_fffffffffffffed0 = UnityEngine_SphereCollider__get_radius(__this_05,(MethodInfo *)0x0);
    pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0);
    if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
      UVar29 = UnityEngine_Transform__get_lossyScale(pUVar13,(MethodInfo *)0x0);
      auStack_f0._8_4_ = extraout_XMM0_Dc;
      auStack_f0._0_8_ = UVar29.fields._0_8_;
      auStack_f0._12_4_ = extraout_XMM0_Dd;
      pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0);
      if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
        UVar29 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
        in_stack_fffffffffffffecc = UVar29.fields.z;
        layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
        plVar24 = &TypeInfo_PhysicsLayer;
        if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (layers != (System_Int32_array *)0x0) {
          iVar3 = (int)layers->max_length;
          if (iVar3 == 0) goto label_04207103;
          lVar4 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
          layers->m_Items[0] = *(int32_t *)(lVar4 + 0x18);
          if (iVar3 == 1) goto label_04207103;
          in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 * (float)auStack_f0._0_4_ * 1.3;
          layers->m_Items[1] = *(int32_t *)(lVar4 + 0xc);
          mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
          layerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          position.fields.z = in_stack_fffffffffffffecc;
          position.fields.x = (float)(int)UVar29.fields._0_8_;
          position.fields.y = (float)(int)((ulong)UVar29.fields._0_8_ >> 0x20);
          plVar24 = (long *)UnityEngine_Physics__OverlapSphere_4e7aff0
                                      (position,in_stack_fffffffffffffed0,layerMask,(MethodInfo *)0x0);
          __this_06 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
          System_Collections_Generic_List_object____ctor_362ba10
                    (__this_06,(System_Collections_Generic_IEnumerable_T__o *)plVar24,MethodInfo_List_1_UnityEngine_Collider);
          if (__this_06 != (System_Collections_Generic_List_object__o *)0x0) {
            bVar11 = System_Collections_Generic_List_object___Contains
                               (__this_06,(Il2CppObject *)item_00,MethodInfo_Boolean_Contains);
            lVar4 = MethodInfo_Void_Add;
            if ((char)bVar11 != '\0') {
label_042067d7:
              System_Collections_Generic_List_object___GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_d0,__this_06,MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator)
              ;
              pUStack_100 = pUStack_c0;
              _Stack_110 = _Stack_d0;
              uStack_108 = uStack_c8;
label_04206810:
              do {
                __this_01.fields._version = (int32_t)in_stack_fffffffffffffecc;
                __this_01.fields._list =
                     (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec0._0_8_;
                __this_01.fields._index = in_stack_fffffffffffffec0._8_4_;
                __this_01.fields._current._0_4_ = in_stack_fffffffffffffed0;
                __this_01.fields._current._4_4_ = in_stack_fffffffffffffed4;
                bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   (__this_01,(MethodInfo_321A1D0 *)&_Stack_110);
                x = pUStack_100;
                if ((char)bVar11 == '\0') {
                  __this_02.fields._version = (int32_t)in_stack_fffffffffffffecc;
                  __this_02.fields._list =
                       (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec0._0_8_;
                  __this_02.fields._index = in_stack_fffffffffffffec0._8_4_;
                  __this_02.fields._current._0_4_ = in_stack_fffffffffffffed0;
                  __this_02.fields._current._4_4_ = in_stack_fffffffffffffed4;
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            (__this_02,(MethodInfo_321A1C0 *)&_Stack_110);
                  return;
                }
                if (pUStack_100 == (UnityEngine_Object_o *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
label_042070db:
                  il2cpp_runtime_helper_022b2c90();
label_042070e0:
                  il2cpp_runtime_helper_022b2c90();
label_042070e5:
                  il2cpp_runtime_helper_022b2c90();
label_042070ea:
                  il2cpp_runtime_helper_022b2c90();
label_042070ef:
                  il2cpp_runtime_helper_022b2c90();
label_042070f4:
                  il2cpp_runtime_helper_022b2c90();
label_042070f9:
                  il2cpp_runtime_helper_022b2c90();
                  goto label_042070fe;
                }
                pUVar13 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pUStack_100,(MethodInfo *)0x0);
                if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_042070db;
                pUVar13 = UnityEngine_Transform__get_root(pUVar13,(MethodInfo *)0x0);
                if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_042070e0;
                pUVar14 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0);
                if (pUVar14 == (UnityEngine_GameObject_o *)0x0) goto label_042070e5;
                pCVar20 = (Characters_BaseCharacter_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar14,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
                pUVar14 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
                if (pUVar14 == (UnityEngine_GameObject_o *)0x0) goto label_042070ea;
                method_01 = MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl;
                plVar24 = (long *)UnityEngine_GameObject__GetComponent_object_
                                            (pUVar14,(MethodInfo_255A0F0 *)MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
                uVar12 = Projectiles_BladeThrowProjectile__CalculateDamage
                                   ((Projectiles_BladeThrowProjectile_o *)pUVar26,method_01);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar11 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)plVar24,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar11 == '\0') {
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar11 = UnityEngine_Object__op_Equality
                                     ((UnityEngine_Object_o *)pCVar20,(UnityEngine_Object_o *)0x0,
                                      (MethodInfo *)0x0);
                  if ((char)bVar11 == '\0') {
                    plVar24 = (long *)pUVar26->m_Items[0xf];
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    bVar11 = UnityEngine_Object__op_Equality
                                       ((UnityEngine_Object_o *)pCVar20,(UnityEngine_Object_o *)plVar24,
                                        (MethodInfo *)0x0);
                    if ((char)bVar11 == '\0') {
                      plVar24 = (long *)pUVar26->m_Items[0x11];
                      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      bVar11 = GameManagers_TeamInfo__SameTeam_446ffa0
                                         (pCVar20,(System_String_o *)plVar24,(MethodInfo *)0x0);
                      if ((char)bVar11 == '\0') {
                        if (pCVar20 == (Characters_BaseCharacter_o *)0x0) goto label_04207108;
                        if (*(char *)&(pCVar20->fields).FeedVictimName == '\0') {
                          bVar2 = (TypeInfo_BaseTitan->_2).naturalAligment;
                          if ((bVar2 <= (pCVar20->klass->_2).naturalAligment) &&
                             ((pCVar20->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BaseTitan)) {
                            if ((char)(pCVar20->fields).CustomDamage != '\0') {
                              pUVar13 = UnityEngine_Component__get_transform
                                                  ((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0);
                              if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_04207129;
                              UVar29 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
                              in_stack_fffffffffffffed0 = UVar29.fields.x;
                              in_stack_fffffffffffffed4 = UVar29.fields.y;
                              auStack_f0._8_8_ = 0;
                              auStack_f0._0_8_ = pUVar26->m_Items[0x12];
                              in_stack_fffffffffffffecc = *(float *)(pUVar26->m_Items + 0x13);
                              fStack_e0 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
                              pSVar8 = (pCVar20->fields).OnPlayerPropertiesChanged;
                              if (pSVar8 == (System_Action_Hashtable__o *)0x0) goto label_04207138;
                              plVar24 = (long *)(pSVar8->fields).data;
                              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              bVar11 = UnityEngine_Object__op_Equality
                                                 (x,(UnityEngine_Object_o *)plVar24,(MethodInfo *)0x0);
                              if ((char)bVar11 != '\0') {
                                if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                plVar23 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
                                if (plVar23 == (long *)0x0) goto label_04207151;
                                plVar23 = (long *)(**(code **)(*plVar23 + 0x1a8))
                                                            (plVar23,"Blade",
                                                             *(undefined8 *)(*plVar23 + 0x1b0));
                                if (plVar23 == (long *)0x0) goto label_04207165;
                                plVar23 = (long *)(**(code **)(*plVar23 + 0x1a8))
                                                            (plVar23,"RestrictAngle",
                                                             *(undefined8 *)(*plVar23 + 0x1b0));
                                if (plVar23 == (long *)0x0) goto label_04207179;
                                uVar16 = (**(code **)(*plVar23 + 0x388))
                                                   (plVar23,*(undefined8 *)(*plVar23 + 0x390));
                                cVar10 = (*(code *)pCVar20->klass[1].vtable._44_OnJoinRandomFailed.method)
                                                   (in_stack_fffffffffffffed0 -
                                                    ((float)auStack_f0._0_4_ * fStack_e0 +
                                                    (float)auStack_f0._0_4_ * fStack_e0),
                                                    UVar29.fields.z -
                                                    (in_stack_fffffffffffffecc * fStack_e0 +
                                                    in_stack_fffffffffffffecc * fStack_e0),uVar16,pCVar20);
                                if (cVar10 == '\0') goto label_04206810;
                                plVar24 = (long *)pUVar26->m_Items[0xf];
                                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                bVar11 = UnityEngine_Object__op_Inequality
                                                   ((UnityEngine_Object_o *)plVar24,
                                                    (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                if (((char)bVar11 != '\0') &&
                                   (pUVar26->m_Items[0xf] != (UnityEngine_Collider_o *)0x0)) {
                                  pUVar7 = pUVar26->m_Items[0xf]->klass;
                                  bVar2 = (TypeInfo_Human->_2).naturalAligment;
                                  if ((bVar2 <= (pUVar7->_2).naturalAligment) &&
                                     ((pUVar7->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Human)) {
                                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                      il2cpp_runtime_helper_02337ed0();
                                    }
                                    pUVar9 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                                    if (pUVar9 == (UI_InGameMenu_o *)0x0) goto label_0420710d;
                                    bVar2 = (TypeInfo_InGameMenu->_2).naturalAligment;
                                    if (((pUVar9->klass->_2).naturalAligment < bVar2) ||
                                       ((pUVar9->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameMenu))
                                    goto label_0420711f;
                                    UI_InGameMenu__ShowKillScore(pUVar9,uVar12,0,(MethodInfo *)0x0);
                                    pSVar8 = (pCVar20->fields).OnPlayerPropertiesChanged;
                                    if (pSVar8 == (System_Action_Hashtable__o *)0x0) goto label_0420712e;
                                    pUVar13 = (UnityEngine_Transform_o *)(pSVar8->fields).method_code;
                                    if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_04207142;
                                    plVar24 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                                    UVar29 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
                                    if ((UnityEngine_Collider_array *)plVar24 ==
                                        (UnityEngine_Collider_array *)0x0) goto label_04207160;
                                    pIVar6 = (((UnityEngine_Collider_array *)plVar24)->obj).klass;
                                    bVar2 = (TypeInfo_InGameCamera->_2).naturalAligment;
                                    if (((pIVar6->_2).naturalAligment < bVar2) ||
                                       ((pIVar6->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameCamera))
                                    goto label_0420717e;
                                    Cameras_InGameCamera__TakeSnapshot
                                              ((Cameras_InGameCamera_o *)plVar24,UVar29,uVar12,
                                               (MethodInfo *)0x0);
                                  }
                                }
                                pUVar13 = UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0);
                                if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_0420711a;
                                pUVar13 = UnityEngine_Transform__Find(pUVar13,"BladeHitNape",(MethodInfo *)0x0);
                                if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_04207124;
                                pUVar21 = (UnityEngine_AudioSource_o *)
                                          UnityEngine_Component__GetComponent_object_
                                                    ((UnityEngine_Component_o *)pUVar13,MethodInfo_AudioSource_GetComponent_AudioSource);
                                if (pUVar21 == (UnityEngine_AudioSource_o *)0x0) goto label_04207133;
                                UnityEngine_AudioSource__Play_4daa2c0(pUVar21,(MethodInfo *)0x0);
                              }
                              pSVar8 = (pCVar20->fields).OnPlayerPropertiesChanged;
                              if (pSVar8 == (System_Action_Hashtable__o *)0x0) goto label_04207147;
                              __this_00 = pSVar8[1].fields.delegates;
                              if (__this_00 == (System_Delegate_array *)0x0) goto label_0420715b;
                              bVar11 = System_Collections_Generic_List_object___Contains
                                                 ((System_Collections_Generic_List_object__o *)__this_00,
                                                  (Il2CppObject *)x,MethodInfo_Boolean_Contains);
                              if ((char)bVar11 != '\0') {
                                if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                plVar24 = *(long **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x38);
                                pUVar13 = UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0);
                                if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_0420716f;
                                UVar29 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
                                position_00.fields.z = UVar29.fields.z;
                                in_stack_fffffffffffffed0 = UVar29.fields.x;
                                in_stack_fffffffffffffed4 = UVar29.fields.y;
                                UVar31 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                   ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),
                                                    (MethodInfo *)0x0);
                                position_00.fields.y = in_stack_fffffffffffffed4;
                                position_00.fields.x = in_stack_fffffffffffffed0;
                                Effects_EffectSpawner__Spawn
                                          ((System_String_o *)plVar24,position_00,UVar31,1.0,1,
                                           (System_Object_array *)0x0,(MethodInfo *)0x0);
                                plVar24 = (long *)pUVar26->m_Items[0xf];
                                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                bVar11 = UnityEngine_Object__op_Equality
                                                   ((UnityEngine_Object_o *)plVar24,
                                                    (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                if (((char)bVar11 == '\0') &&
                                   (plVar24 = (long *)pUVar26->m_Items[0xf],
                                   (UnityEngine_Collider_array *)plVar24 != (UnityEngine_Collider_array *)0x0)
                                   ) {
                                  pIVar6 = (((UnityEngine_Collider_array *)plVar24)->obj).klass;
                                  bVar2 = (TypeInfo_Human->_2).naturalAligment;
                                  if ((bVar2 <= (pIVar6->_2).naturalAligment) &&
                                     ((pIVar6->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Human)) {
                                    pSVar22 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                                    (*(pCVar20->klass->vtable)._84_GetHit.methodPtr)
                                              (pCVar20,plVar24,(ulong)uVar12,"BladeThrow",pSVar22);
                                    goto label_04206810;
                                  }
                                }
                                pSVar22 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                                (*(pCVar20->klass->vtable)._85_GetHit.methodPtr)
                                          (pCVar20,"Blade",100,"BladeThrow",pSVar22);
                              }
                            }
                            goto label_04206810;
                          }
                          plVar24 = (long *)pUVar26->m_Items[0xf];
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          bVar11 = UnityEngine_Object__op_Inequality
                                             ((UnityEngine_Object_o *)plVar24,(UnityEngine_Object_o *)0x0,
                                              (MethodInfo *)0x0);
                          if (((char)bVar11 != '\0') &&
                             (pUVar26->m_Items[0xf] != (UnityEngine_Collider_o *)0x0)) {
                            pUVar7 = pUVar26->m_Items[0xf]->klass;
                            bVar2 = (TypeInfo_Human->_2).naturalAligment;
                            if ((bVar2 <= (pUVar7->_2).naturalAligment) &&
                               ((pUVar7->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Human)) {
                              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              pUVar9 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                              if (pUVar9 == (UI_InGameMenu_o *)0x0) goto label_0420713d;
                              bVar2 = (TypeInfo_InGameMenu->_2).naturalAligment;
                              if (((pUVar9->klass->_2).naturalAligment < bVar2) ||
                                 ((pUVar9->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameMenu))
                              goto label_0420714c;
                              UI_InGameMenu__ShowKillScore(pUVar9,uVar12,0,(MethodInfo *)0x0);
                              plVar24 = (long *)pUVar26->m_Items[0xf];
                              pSVar22 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                              (*(pCVar20->klass->vtable)._84_GetHit.methodPtr)
                                        (pCVar20,plVar24,(ulong)uVar12,"BladeThrow",pSVar22);
                              lVar4 = *(long *)&(pCVar20->fields).Dead;
                              if (lVar4 == 0) goto label_04207156;
                              pUVar13 = *(UnityEngine_Transform_o **)(lVar4 + 0x10);
                              if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_0420716a;
                              plVar24 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                              UVar29 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
                              if ((UnityEngine_Collider_array *)plVar24 == (UnityEngine_Collider_array *)0x0)
                              goto label_04207174;
                              pIVar6 = (((UnityEngine_Collider_array *)plVar24)->obj).klass;
                              bVar2 = (TypeInfo_InGameCamera->_2).naturalAligment;
                              if (((pIVar6->_2).naturalAligment < bVar2) ||
                                 ((pIVar6->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameCamera))
                              goto label_04207112;
                              Cameras_InGameCamera__TakeSnapshot
                                        ((Cameras_InGameCamera_o *)plVar24,UVar29,uVar12,(MethodInfo *)0x0);
                              goto label_04206810;
                            }
                          }
                          pSVar22 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                          (*(pCVar20->klass->vtable)._85_GetHit.methodPtr)
                                    (pCVar20,"Blade",100,"BladeThrow",pSVar22);
                        }
                      }
                    }
                  }
                  goto label_04206810;
                }
                pCVar20 = (Characters_BaseCharacter_o *)pUVar26->m_Items[0xf];
                if (pCVar20 == (Characters_BaseCharacter_o *)0x0) goto label_042070ef;
                pSVar22 = *(System_String_o **)&(pCVar20->fields)._disableKinematicTimeLeft;
                pUVar13 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0);
                if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_042070f4;
                UVar29 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
                if ((UnityEngine_Collider_array *)plVar24 == (UnityEngine_Collider_array *)0x0)
                goto label_042070f9;
                CustomLogic_CustomLogicCollisionHandler__GetHit
                          ((CustomLogic_CustomLogicCollisionHandler_o *)plVar24,pCVar20,pSVar22,uVar12,
                           "BladeThrow",UVar29,(MethodInfo *)0x0);
              } while( true );
            }
            piVar1 = &(__this_06->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar5 = (__this_06->fields)._items;
            if (pSVar5 != (System_Object_array *)0x0) {
              uVar12 = (__this_06->fields)._size;
              if (uVar12 < (uint)pSVar5->max_length) {
                (__this_06->fields)._size = uVar12 + 1;
                pSVar5->m_Items[(int)uVar12] = (Il2CppObject *)item_00;
                il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar12,item_00);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_06,(Il2CppObject *)item_00,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              goto label_042067d7;
            }
          }
        }
      }
    }
  }
label_042070fe:
  il2cpp_runtime_helper_022b2c90();
label_04207103:
  il2cpp_runtime_helper_022b2ca0();
label_04207108:
  il2cpp_runtime_helper_022b2c90();
label_0420710d:
  il2cpp_runtime_helper_022b2c90();
label_04207112:
  il2cpp_runtime_helper_022b2fd0(plVar24);
label_0420711a:
  il2cpp_runtime_helper_022b2c90();
label_0420711f:
  il2cpp_runtime_helper_022b2fd0();
label_04207124:
  il2cpp_runtime_helper_022b2c90();
label_04207129:
  il2cpp_runtime_helper_022b2c90();
label_0420712e:
  il2cpp_runtime_helper_022b2c90();
label_04207133:
  il2cpp_runtime_helper_022b2c90();
label_04207138:
  il2cpp_runtime_helper_022b2c90();
label_0420713d:
  il2cpp_runtime_helper_022b2c90();
label_04207142:
  il2cpp_runtime_helper_022b2c90();
label_04207147:
  il2cpp_runtime_helper_022b2c90();
label_0420714c:
  il2cpp_runtime_helper_022b2fd0();
label_04207151:
  il2cpp_runtime_helper_022b2c90();
label_04207156:
  il2cpp_runtime_helper_022b2c90();
label_0420715b:
  il2cpp_runtime_helper_022b2c90();
label_04207160:
  il2cpp_runtime_helper_022b2c90();
label_04207165:
  il2cpp_runtime_helper_022b2c90();
label_0420716a:
  il2cpp_runtime_helper_022b2c90();
label_0420716f:
  il2cpp_runtime_helper_022b2c90();
label_04207174:
  il2cpp_runtime_helper_022b2c90();
label_04207179:
  il2cpp_runtime_helper_022b2c90();
label_0420717e:
  auVar30 = il2cpp_runtime_helper_022b2fd0(plVar24);
  if (auVar30._8_4_ == 1) {
    plVar24 = (long *)__cxa_begin_catch(auVar30._0_8_);
    lVar4 = *plVar24;
    __cxa_end_catch();
    __this_03.fields._version = (int32_t)in_stack_fffffffffffffecc;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec0._0_8_;
    __this_03.fields._index = in_stack_fffffffffffffec0._8_4_;
    __this_03.fields._current._0_4_ = in_stack_fffffffffffffed0;
    __this_03.fields._current._4_4_ = in_stack_fffffffffffffed4;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_03,(MethodInfo_321A1C0 *)&_Stack_110);
    if (lVar4 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_04.fields._version = (int32_t)in_stack_fffffffffffffecc;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec0._0_8_;
  __this_04.fields._index = in_stack_fffffffffffffec0._8_4_;
  __this_04.fields._current._0_4_ = in_stack_fffffffffffffed0;
  __this_04.fields._current._4_4_ = in_stack_fffffffffffffed4;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)&_Stack_110);
  _Unwind_Resume(auVar30._0_8_);
}


// Projectiles.BladeThrowProjectile$$Start
// il2cpp: void Projectiles_BladeThrowProjectile__Start (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x4205f50

void Projectiles_BladeThrowProjectile__Start(Projectiles_BladeThrowProjectile_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  MeleeWeaponTrail_o *__this_00;
  Il2CppObject *item;
  System_Object_array *pSVar5;
  Il2CppClass *pIVar6;
  UnityEngine_Collider_c *pUVar7;
  System_Action_Hashtable__o *pSVar8;
  System_Delegate_array *__this_01;
  UI_InGameMenu_o *pUVar9;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  Photon_Pun_PhotonMessageInfo_o info;
  UnityEngine_Object_o *x;
  char cVar10;
  bool_conflict bVar11;
  UnityEngine_LayerMask_o mask;
  int32_t layerMask;
  uint uVar12;
  undefined8 in_RAX;
  Photon_Pun_PhotonView_o *pPVar13;
  UnityEngine_Collider_array *pUVar14;
  UnityEngine_Collider_array *pUVar15;
  UnityEngine_Transform_o *pUVar16;
  Characters_BaseCharacter_o *pCVar17;
  UnityEngine_AudioSource_o *pUVar18;
  UnityEngine_Collider_o *firstCollider;
  UnityEngine_SphereCollider_o *__this_06;
  System_Int32_array *layers;
  System_Collections_Generic_List_object__o *__this_07;
  UnityEngine_GameObject_o *pUVar19;
  System_String_o *pSVar20;
  long *plVar21;
  MethodInfo *method_00;
  Photon_Realtime_Player_o *unaff_RBX;
  long *plVar22;
  UnityEngine_Collider_array *__this_08;
  MethodInfo_24E7B40 *item_00;
  MethodInfo *method_01;
  UnityEngine_Collider_array *pUVar23;
  System_String_o *unaff_R12;
  Photon_Pun_PhotonView_o *unaff_R14;
  float fVar24;
  float fVar25;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined8 uVar26;
  UnityEngine_Vector3_o UVar27;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  undefined1 auVar28 [12];
  UnityEngine_Quaternion_o UVar29;
  undefined1 in_stack_fffffffffffffec8 [12];
  float in_stack_fffffffffffffed4;
  float in_stack_fffffffffffffed8;
  float in_stack_fffffffffffffedc;
  _union_249395 _Stack_108;
  undefined8 uStack_100;
  UnityEngine_Object_o *pUStack_f8;
  undefined1 auStack_e8 [16];
  float fStack_d8;
  _union_249395 _Stack_c8;
  undefined8 uStack_c0;
  UnityEngine_Object_o *pUStack_b8;
  UnityEngine_Collider_array *pUStack_b0;
  System_String_o *pSStack_a8;
  float fStack_74;
  undefined8 uStack_70;
  Photon_Realtime_Player_o *pPVar30;
  
  if (g_data_057ad8e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ad8e2 = '\x01';
  }
  pCVar17 = (__this->fields)._owner;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pCVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar11 == '\0') ||
     (pCVar17 = (__this->fields)._owner, pCVar17 == (Characters_BaseCharacter_o *)0x0)) {
    return;
  }
  bVar2 = (TypeInfo_Human->_2).naturalAligment;
  if ((pCVar17->klass->_2).naturalAligment < bVar2) {
    return;
  }
  if ((pCVar17->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Human) {
    return;
  }
  bVar11 = Characters_BaseCharacter__IsMine(pCVar17,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  pCVar17 = (__this->fields)._owner;
  if (pCVar17 == (Characters_BaseCharacter_o *)0x0) {
label_04206064:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar2 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar2 <= (pCVar17->klass->_2).naturalAligment) &&
       ((pCVar17->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Human)) {
      lVar4 = *(long *)&pCVar17[1].fields.FootstepsEnabled;
      if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x178), lVar4 != 0)) {
        __this_00 = (__this->fields).WeaponTrail;
        pCVar17 = (Characters_BaseCharacter_o *)0x0;
        if (__this_00 != (MeleeWeaponTrail_o *)0x0) {
          MeleeWeaponTrail__SetMaterial
                    (__this_00,*(UnityEngine_Material_o **)(lVar4 + 0x28),(MethodInfo *)0x0);
          return;
        }
      }
      goto label_04206064;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad8e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ad8e3 = '\x01';
  }
  lVar4 = MethodInfo_Void_Add;
  pUVar23 = (UnityEngine_Collider_array *)(pCVar17->fields).Animation;
  if (pUVar23 != (UnityEngine_Collider_array *)0x0) {
    item = *(Il2CppObject **)&(pCVar17->fields).GroundMaskLayers;
    piVar1 = (int32_t *)((long)&pUVar23->max_length + 4);
    *piVar1 = *piVar1 + 1;
    pSVar5 = ((System_Collections_Generic_List_object__Fields *)&pUVar23->bounds)->_items;
    if (pSVar5 != (System_Object_array *)0x0) {
      uVar12 = (uint)pUVar23->max_length;
      if ((uint)pSVar5->max_length <= uVar12) {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pUVar23,item,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        return;
      }
      *(uint *)&pUVar23->max_length = uVar12 + 1;
      pSVar5->m_Items[(int)uVar12] = item;
      il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar12);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)(pUVar23->m_Items + 1) != '\0') {
    return;
  }
  __this_08 = (UnityEngine_Collider_array *)0x0;
  plVar22 = (long *)pUVar23;
  pPVar30 = unaff_RBX;
  pPVar13 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)pUVar23,(MethodInfo *)0x0);
  if (pPVar13 != (Photon_Pun_PhotonView_o *)0x0) {
    if (unaff_RBX != (pPVar13->fields)._Owner_k__BackingField) {
      return;
    }
    info.fields.Sender = pPVar30;
    info.fields._0_8_ = in_RAX;
    info.fields.photonView = unaff_R14;
    Projectiles_BaseProjectile__DisableRPC
              ((Projectiles_BaseProjectile_o *)pUVar23,info,(MethodInfo *)__this_08);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_GetComponent_AudioSource);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&"BladeHit");
    g_data_057ad8e4 = '\x01';
  }
  item_00 = (MethodInfo_24E7B40 *)0x0;
  pUVar23 = (UnityEngine_Collider_array *)plVar22;
  pPVar13 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)plVar22,(MethodInfo *)0x0);
  if (pPVar13 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((char)(pPVar13->fields)._IsMine_k__BackingField == '\0') ||
       (*(char *)(((UnityEngine_Collider_array *)plVar22)->m_Items + 1) != '\0')) {
      return;
    }
    if (__this_08 != (UnityEngine_Collider_array *)0x0) {
      item_00 = (MethodInfo_24E7B40 *)0x0;
      pUVar23 = __this_08;
      pUVar14 = (UnityEngine_Collider_array *)
                UnityEngine_Collision__get_collider((UnityEngine_Collision_o *)__this_08,(MethodInfo *)0x0);
      if (pUVar14 != (UnityEngine_Collider_array *)0x0) {
        item_00 = (MethodInfo_24E7B40 *)0x0;
        pUVar15 = (UnityEngine_Collider_array *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0);
        pUVar23 = pUVar14;
        if (pUVar15 != (UnityEngine_Collider_array *)0x0) {
          item_00 = (MethodInfo_24E7B40 *)0x0;
          pUVar16 = UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pUVar15,(MethodInfo *)0x0);
          pUVar23 = pUVar15;
          if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
            pCVar17 = (Characters_BaseCharacter_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar16,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar11 = UnityEngine_Object__op_Equality
                               ((UnityEngine_Object_o *)pCVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            if ((char)bVar11 == '\0') {
              unaff_R12 = (System_String_o *)((UnityEngine_Collider_array *)plVar22)->m_Items[0x11];
              if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar11 = GameManagers_TeamInfo__SameTeam_446ffa0(pCVar17,unaff_R12,(MethodInfo *)0x0);
              if (((char)bVar11 == '\0') && (pCVar17 != (Characters_BaseCharacter_o *)0x0)) {
                bVar2 = (TypeInfo_BaseTitan->_2).naturalAligment;
                if ((bVar2 <= (pCVar17->klass->_2).naturalAligment) &&
                   ((pCVar17->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BaseTitan)) {
                  if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar20 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
                  item_00 = (MethodInfo_24E7B40 *)0x0;
                  pUVar23 = (UnityEngine_Collider_array *)plVar22;
                  pUVar16 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)plVar22,(MethodInfo *)0x0);
                  if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
                    UVar27 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                    fStack_74 = UVar27.fields.z;
                    uStack_70 = UVar27.fields._0_8_;
                    UVar29 = UnityEngine_Quaternion__Internal_FromEulerRad
                                       ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0);
                    uVar26 = UVar29.fields._8_8_;
                    fVar24 = UVar29.fields.x;
                    fVar25 = UVar29.fields.y;
                    goto label_042062db;
                  }
                  goto label_04206456;
                }
              }
            }
            else {
              if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar20 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb0);
              item_00 = (MethodInfo_24E7B40 *)0x0;
              pUVar23 = (UnityEngine_Collider_array *)plVar22;
              pUVar16 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)plVar22,(MethodInfo *)0x0);
              if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_04206456;
              UVar27 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
              fStack_74 = UVar27.fields.z;
              uStack_70 = UVar27.fields._0_8_;
              UVar29 = UnityEngine_Quaternion__LookRotation_4debb20
                                 ((UnityEngine_Vector3_o)
                                  *(UnityEngine_Vector3_Fields *)
                                   (((UnityEngine_Collider_array *)plVar22)->m_Items + 0x12),(MethodInfo *)0x0
                                 );
              uVar26 = UVar29.fields._8_8_;
              fVar24 = UVar29.fields.x;
              fVar25 = UVar29.fields.y;
label_042062db:
              UVar29.fields.y = fVar25;
              UVar29.fields.x = fVar24;
              UVar27.fields.z = fStack_74;
              UVar27.fields.x = (float)(undefined4)uStack_70;
              UVar27.fields.y = (float)uStack_70._4_4_;
              UVar29.fields.z = (float)(int)uVar26;
              UVar29.fields.w = (float)(int)((ulong)uVar26 >> 0x20);
              Effects_EffectSpawner__Spawn
                        (pSVar20,UVar27,UVar29,1.0,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
            }
            item_00 = (MethodInfo_24E7B40 *)0x0;
            pUVar23 = (UnityEngine_Collider_array *)plVar22;
            pUVar14 = (UnityEngine_Collider_array *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)plVar22,(MethodInfo *)0x0);
            if (((pUVar14 != (UnityEngine_Collider_array *)0x0) &&
                (item_00 = "BladeHit",
                pUVar15 = (UnityEngine_Collider_array *)
                          UnityEngine_Transform__Find
                                    ((UnityEngine_Transform_o *)pUVar14,(System_String_o *)"BladeHit",
                                     (MethodInfo *)0x0), pUVar23 = pUVar14,
                pUVar15 != (UnityEngine_Collider_array *)0x0)) &&
               (item_00 = MethodInfo_AudioSource_GetComponent_AudioSource,
               pUVar18 = (UnityEngine_AudioSource_o *)
                         UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar15,MethodInfo_AudioSource_GetComponent_AudioSource), pUVar23 = pUVar15,
               pUVar18 != (UnityEngine_AudioSource_o *)0x0)) {
              UnityEngine_AudioSource__Play_4daa2c0(pUVar18,(MethodInfo *)0x0);
              firstCollider =
                   UnityEngine_Collision__get_collider((UnityEngine_Collision_o *)__this_08,(MethodInfo *)0x0)
              ;
              Projectiles_BladeThrowProjectile__CheckHurtboxes
                        ((Projectiles_BladeThrowProjectile_o *)plVar22,firstCollider,method_00);
              pIVar6 = (((UnityEngine_Collider_array *)plVar22)->obj).klass;
              (*pIVar6->vtable[0x11].methodPtr)(plVar22,pIVar6->vtable[0x11].method);
              return;
            }
          }
        }
      }
    }
  }
label_04206456:
  il2cpp_runtime_helper_022b2c90();
  pUStack_b0 = (UnityEngine_Collider_array *)plVar22;
  pSStack_a8 = unaff_R12;
  if (g_data_057ad8e5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_GetComponent_AudioSource);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SphereCollider_GetComponent_SphereCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"BladeThrow");
    il2cpp_runtime_helper_023445d0(&"Blade");
    il2cpp_runtime_helper_023445d0(&"RestrictAngle");
    il2cpp_runtime_helper_023445d0(&"BladeHitNape");
    g_data_057ad8e5 = '\x01';
  }
  _Stack_108.genericMethod = (void *)0x0;
  uStack_100 = 0;
  pUStack_f8 = (UnityEngine_Object_o *)0x0;
  __this_06 = (UnityEngine_SphereCollider_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar23,MethodInfo_SphereCollider_GetComponent_SphereCollider);
  if (__this_06 != (UnityEngine_SphereCollider_o *)0x0) {
    in_stack_fffffffffffffed8 = UnityEngine_SphereCollider__get_radius(__this_06,(MethodInfo *)0x0);
    pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0);
    if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
      UVar27 = UnityEngine_Transform__get_lossyScale(pUVar16,(MethodInfo *)0x0);
      auStack_e8._8_4_ = extraout_XMM0_Dc;
      auStack_e8._0_8_ = UVar27.fields._0_8_;
      auStack_e8._12_4_ = extraout_XMM0_Dd;
      pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0);
      if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
        UVar27 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
        in_stack_fffffffffffffed4 = UVar27.fields.z;
        layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
        plVar22 = &TypeInfo_PhysicsLayer;
        if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (layers != (System_Int32_array *)0x0) {
          iVar3 = (int)layers->max_length;
          if (iVar3 == 0) goto label_04207103;
          lVar4 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
          layers->m_Items[0] = *(int32_t *)(lVar4 + 0x18);
          if (iVar3 == 1) goto label_04207103;
          in_stack_fffffffffffffed8 = in_stack_fffffffffffffed8 * (float)auStack_e8._0_4_ * 1.3;
          layers->m_Items[1] = *(int32_t *)(lVar4 + 0xc);
          mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
          layerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          position.fields.z = in_stack_fffffffffffffed4;
          position.fields.x = (float)(int)UVar27.fields._0_8_;
          position.fields.y = (float)(int)((ulong)UVar27.fields._0_8_ >> 0x20);
          plVar22 = (long *)UnityEngine_Physics__OverlapSphere_4e7aff0
                                      (position,in_stack_fffffffffffffed8,layerMask,(MethodInfo *)0x0);
          __this_07 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
          System_Collections_Generic_List_object____ctor_362ba10
                    (__this_07,(System_Collections_Generic_IEnumerable_T__o *)plVar22,MethodInfo_List_1_UnityEngine_Collider);
          if (__this_07 != (System_Collections_Generic_List_object__o *)0x0) {
            bVar11 = System_Collections_Generic_List_object___Contains
                               (__this_07,(Il2CppObject *)item_00,MethodInfo_Boolean_Contains);
            lVar4 = MethodInfo_Void_Add;
            if ((char)bVar11 != '\0') {
label_042067d7:
              System_Collections_Generic_List_object___GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_c8,__this_07,MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator)
              ;
              pUStack_f8 = pUStack_b8;
              _Stack_108 = _Stack_c8;
              uStack_100 = uStack_c0;
label_04206810:
              do {
                __this_02.fields._version = (int32_t)in_stack_fffffffffffffed4;
                __this_02.fields._list =
                     (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8._0_8_;
                __this_02.fields._index = in_stack_fffffffffffffec8._8_4_;
                __this_02.fields._current._0_4_ = in_stack_fffffffffffffed8;
                __this_02.fields._current._4_4_ = in_stack_fffffffffffffedc;
                bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   (__this_02,(MethodInfo_321A1D0 *)&_Stack_108);
                x = pUStack_f8;
                if ((char)bVar11 == '\0') {
                  __this_03.fields._version = (int32_t)in_stack_fffffffffffffed4;
                  __this_03.fields._list =
                       (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8._0_8_;
                  __this_03.fields._index = in_stack_fffffffffffffec8._8_4_;
                  __this_03.fields._current._0_4_ = in_stack_fffffffffffffed8;
                  __this_03.fields._current._4_4_ = in_stack_fffffffffffffedc;
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            (__this_03,(MethodInfo_321A1C0 *)&_Stack_108);
                  return;
                }
                if (pUStack_f8 == (UnityEngine_Object_o *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
label_042070db:
                  il2cpp_runtime_helper_022b2c90();
label_042070e0:
                  il2cpp_runtime_helper_022b2c90();
label_042070e5:
                  il2cpp_runtime_helper_022b2c90();
label_042070ea:
                  il2cpp_runtime_helper_022b2c90();
label_042070ef:
                  il2cpp_runtime_helper_022b2c90();
label_042070f4:
                  il2cpp_runtime_helper_022b2c90();
label_042070f9:
                  il2cpp_runtime_helper_022b2c90();
                  goto label_042070fe;
                }
                pUVar16 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pUStack_f8,(MethodInfo *)0x0);
                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_042070db;
                pUVar16 = UnityEngine_Transform__get_root(pUVar16,(MethodInfo *)0x0);
                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_042070e0;
                pUVar19 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
                if (pUVar19 == (UnityEngine_GameObject_o *)0x0) goto label_042070e5;
                pCVar17 = (Characters_BaseCharacter_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar19,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
                pUVar19 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
                if (pUVar19 == (UnityEngine_GameObject_o *)0x0) goto label_042070ea;
                method_01 = MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl;
                plVar22 = (long *)UnityEngine_GameObject__GetComponent_object_
                                            (pUVar19,(MethodInfo_255A0F0 *)MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
                uVar12 = Projectiles_BladeThrowProjectile__CalculateDamage
                                   ((Projectiles_BladeThrowProjectile_o *)pUVar23,method_01);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar11 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)plVar22,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar11 == '\0') {
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar11 = UnityEngine_Object__op_Equality
                                     ((UnityEngine_Object_o *)pCVar17,(UnityEngine_Object_o *)0x0,
                                      (MethodInfo *)0x0);
                  if ((char)bVar11 == '\0') {
                    plVar22 = (long *)pUVar23->m_Items[0xf];
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    bVar11 = UnityEngine_Object__op_Equality
                                       ((UnityEngine_Object_o *)pCVar17,(UnityEngine_Object_o *)plVar22,
                                        (MethodInfo *)0x0);
                    if ((char)bVar11 == '\0') {
                      plVar22 = (long *)pUVar23->m_Items[0x11];
                      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      bVar11 = GameManagers_TeamInfo__SameTeam_446ffa0
                                         (pCVar17,(System_String_o *)plVar22,(MethodInfo *)0x0);
                      if ((char)bVar11 == '\0') {
                        if (pCVar17 == (Characters_BaseCharacter_o *)0x0) goto label_04207108;
                        if (*(char *)&(pCVar17->fields).FeedVictimName == '\0') {
                          bVar2 = (TypeInfo_BaseTitan->_2).naturalAligment;
                          if ((bVar2 <= (pCVar17->klass->_2).naturalAligment) &&
                             ((pCVar17->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BaseTitan)) {
                            if ((char)(pCVar17->fields).CustomDamage != '\0') {
                              pUVar16 = UnityEngine_Component__get_transform
                                                  ((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0);
                              if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_04207129;
                              UVar27 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                              in_stack_fffffffffffffed8 = UVar27.fields.x;
                              in_stack_fffffffffffffedc = UVar27.fields.y;
                              auStack_e8._8_8_ = 0;
                              auStack_e8._0_8_ = pUVar23->m_Items[0x12];
                              in_stack_fffffffffffffed4 = *(float *)(pUVar23->m_Items + 0x13);
                              fStack_d8 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
                              pSVar8 = (pCVar17->fields).OnPlayerPropertiesChanged;
                              if (pSVar8 == (System_Action_Hashtable__o *)0x0) goto label_04207138;
                              plVar22 = (long *)(pSVar8->fields).data;
                              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              bVar11 = UnityEngine_Object__op_Equality
                                                 (x,(UnityEngine_Object_o *)plVar22,(MethodInfo *)0x0);
                              if ((char)bVar11 != '\0') {
                                if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                plVar21 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
                                if (plVar21 == (long *)0x0) goto label_04207151;
                                plVar21 = (long *)(**(code **)(*plVar21 + 0x1a8))
                                                            (plVar21,"Blade",
                                                             *(undefined8 *)(*plVar21 + 0x1b0));
                                if (plVar21 == (long *)0x0) goto label_04207165;
                                plVar21 = (long *)(**(code **)(*plVar21 + 0x1a8))
                                                            (plVar21,"RestrictAngle",
                                                             *(undefined8 *)(*plVar21 + 0x1b0));
                                if (plVar21 == (long *)0x0) goto label_04207179;
                                uVar26 = (**(code **)(*plVar21 + 0x388))
                                                   (plVar21,*(undefined8 *)(*plVar21 + 0x390));
                                cVar10 = (*(code *)pCVar17->klass[1].vtable._44_OnJoinRandomFailed.method)
                                                   (in_stack_fffffffffffffed8 -
                                                    ((float)auStack_e8._0_4_ * fStack_d8 +
                                                    (float)auStack_e8._0_4_ * fStack_d8),
                                                    UVar27.fields.z -
                                                    (in_stack_fffffffffffffed4 * fStack_d8 +
                                                    in_stack_fffffffffffffed4 * fStack_d8),uVar26,pCVar17);
                                if (cVar10 == '\0') goto label_04206810;
                                plVar22 = (long *)pUVar23->m_Items[0xf];
                                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                bVar11 = UnityEngine_Object__op_Inequality
                                                   ((UnityEngine_Object_o *)plVar22,
                                                    (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                if (((char)bVar11 != '\0') &&
                                   (pUVar23->m_Items[0xf] != (UnityEngine_Collider_o *)0x0)) {
                                  pUVar7 = pUVar23->m_Items[0xf]->klass;
                                  bVar2 = (TypeInfo_Human->_2).naturalAligment;
                                  if ((bVar2 <= (pUVar7->_2).naturalAligment) &&
                                     ((pUVar7->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Human)) {
                                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                      il2cpp_runtime_helper_02337ed0();
                                    }
                                    pUVar9 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                                    if (pUVar9 == (UI_InGameMenu_o *)0x0) goto label_0420710d;
                                    bVar2 = (TypeInfo_InGameMenu->_2).naturalAligment;
                                    if (((pUVar9->klass->_2).naturalAligment < bVar2) ||
                                       ((pUVar9->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameMenu))
                                    goto label_0420711f;
                                    UI_InGameMenu__ShowKillScore(pUVar9,uVar12,0,(MethodInfo *)0x0);
                                    pSVar8 = (pCVar17->fields).OnPlayerPropertiesChanged;
                                    if (pSVar8 == (System_Action_Hashtable__o *)0x0) goto label_0420712e;
                                    pUVar16 = (UnityEngine_Transform_o *)(pSVar8->fields).method_code;
                                    if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_04207142;
                                    plVar22 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                                    UVar27 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                                    if ((UnityEngine_Collider_array *)plVar22 ==
                                        (UnityEngine_Collider_array *)0x0) goto label_04207160;
                                    pIVar6 = (((UnityEngine_Collider_array *)plVar22)->obj).klass;
                                    bVar2 = (TypeInfo_InGameCamera->_2).naturalAligment;
                                    if (((pIVar6->_2).naturalAligment < bVar2) ||
                                       ((pIVar6->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameCamera))
                                    goto label_0420717e;
                                    Cameras_InGameCamera__TakeSnapshot
                                              ((Cameras_InGameCamera_o *)plVar22,UVar27,uVar12,
                                               (MethodInfo *)0x0);
                                  }
                                }
                                pUVar16 = UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0);
                                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_0420711a;
                                pUVar16 = UnityEngine_Transform__Find(pUVar16,"BladeHitNape",(MethodInfo *)0x0);
                                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_04207124;
                                pUVar18 = (UnityEngine_AudioSource_o *)
                                          UnityEngine_Component__GetComponent_object_
                                                    ((UnityEngine_Component_o *)pUVar16,MethodInfo_AudioSource_GetComponent_AudioSource);
                                if (pUVar18 == (UnityEngine_AudioSource_o *)0x0) goto label_04207133;
                                UnityEngine_AudioSource__Play_4daa2c0(pUVar18,(MethodInfo *)0x0);
                              }
                              pSVar8 = (pCVar17->fields).OnPlayerPropertiesChanged;
                              if (pSVar8 == (System_Action_Hashtable__o *)0x0) goto label_04207147;
                              __this_01 = pSVar8[1].fields.delegates;
                              if (__this_01 == (System_Delegate_array *)0x0) goto label_0420715b;
                              bVar11 = System_Collections_Generic_List_object___Contains
                                                 ((System_Collections_Generic_List_object__o *)__this_01,
                                                  (Il2CppObject *)x,MethodInfo_Boolean_Contains);
                              if ((char)bVar11 != '\0') {
                                if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                plVar22 = *(long **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x38);
                                pUVar16 = UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0);
                                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_0420716f;
                                UVar27 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                                position_00.fields.z = UVar27.fields.z;
                                in_stack_fffffffffffffed8 = UVar27.fields.x;
                                in_stack_fffffffffffffedc = UVar27.fields.y;
                                UVar29 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                   ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),
                                                    (MethodInfo *)0x0);
                                position_00.fields.y = in_stack_fffffffffffffedc;
                                position_00.fields.x = in_stack_fffffffffffffed8;
                                Effects_EffectSpawner__Spawn
                                          ((System_String_o *)plVar22,position_00,UVar29,1.0,1,
                                           (System_Object_array *)0x0,(MethodInfo *)0x0);
                                plVar22 = (long *)pUVar23->m_Items[0xf];
                                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                bVar11 = UnityEngine_Object__op_Equality
                                                   ((UnityEngine_Object_o *)plVar22,
                                                    (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                if (((char)bVar11 == '\0') &&
                                   (plVar22 = (long *)pUVar23->m_Items[0xf],
                                   (UnityEngine_Collider_array *)plVar22 != (UnityEngine_Collider_array *)0x0)
                                   ) {
                                  pIVar6 = (((UnityEngine_Collider_array *)plVar22)->obj).klass;
                                  bVar2 = (TypeInfo_Human->_2).naturalAligment;
                                  if ((bVar2 <= (pIVar6->_2).naturalAligment) &&
                                     ((pIVar6->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Human)) {
                                    pSVar20 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                                    (*(pCVar17->klass->vtable)._84_GetHit.methodPtr)
                                              (pCVar17,plVar22,(ulong)uVar12,"BladeThrow",pSVar20);
                                    goto label_04206810;
                                  }
                                }
                                pSVar20 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                                (*(pCVar17->klass->vtable)._85_GetHit.methodPtr)
                                          (pCVar17,"Blade",100,"BladeThrow",pSVar20);
                              }
                            }
                            goto label_04206810;
                          }
                          plVar22 = (long *)pUVar23->m_Items[0xf];
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          bVar11 = UnityEngine_Object__op_Inequality
                                             ((UnityEngine_Object_o *)plVar22,(UnityEngine_Object_o *)0x0,
                                              (MethodInfo *)0x0);
                          if (((char)bVar11 != '\0') &&
                             (pUVar23->m_Items[0xf] != (UnityEngine_Collider_o *)0x0)) {
                            pUVar7 = pUVar23->m_Items[0xf]->klass;
                            bVar2 = (TypeInfo_Human->_2).naturalAligment;
                            if ((bVar2 <= (pUVar7->_2).naturalAligment) &&
                               ((pUVar7->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Human)) {
                              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              pUVar9 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                              if (pUVar9 == (UI_InGameMenu_o *)0x0) goto label_0420713d;
                              bVar2 = (TypeInfo_InGameMenu->_2).naturalAligment;
                              if (((pUVar9->klass->_2).naturalAligment < bVar2) ||
                                 ((pUVar9->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameMenu))
                              goto label_0420714c;
                              UI_InGameMenu__ShowKillScore(pUVar9,uVar12,0,(MethodInfo *)0x0);
                              plVar22 = (long *)pUVar23->m_Items[0xf];
                              pSVar20 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                              (*(pCVar17->klass->vtable)._84_GetHit.methodPtr)
                                        (pCVar17,plVar22,(ulong)uVar12,"BladeThrow",pSVar20);
                              lVar4 = *(long *)&(pCVar17->fields).Dead;
                              if (lVar4 == 0) goto label_04207156;
                              pUVar16 = *(UnityEngine_Transform_o **)(lVar4 + 0x10);
                              if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_0420716a;
                              plVar22 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                              UVar27 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                              if ((UnityEngine_Collider_array *)plVar22 == (UnityEngine_Collider_array *)0x0)
                              goto label_04207174;
                              pIVar6 = (((UnityEngine_Collider_array *)plVar22)->obj).klass;
                              bVar2 = (TypeInfo_InGameCamera->_2).naturalAligment;
                              if (((pIVar6->_2).naturalAligment < bVar2) ||
                                 ((pIVar6->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameCamera))
                              goto label_04207112;
                              Cameras_InGameCamera__TakeSnapshot
                                        ((Cameras_InGameCamera_o *)plVar22,UVar27,uVar12,(MethodInfo *)0x0);
                              goto label_04206810;
                            }
                          }
                          pSVar20 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                          (*(pCVar17->klass->vtable)._85_GetHit.methodPtr)
                                    (pCVar17,"Blade",100,"BladeThrow",pSVar20);
                        }
                      }
                    }
                  }
                  goto label_04206810;
                }
                pCVar17 = (Characters_BaseCharacter_o *)pUVar23->m_Items[0xf];
                if (pCVar17 == (Characters_BaseCharacter_o *)0x0) goto label_042070ef;
                pSVar20 = *(System_String_o **)&(pCVar17->fields)._disableKinematicTimeLeft;
                pUVar16 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0);
                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_042070f4;
                UVar27 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                if ((UnityEngine_Collider_array *)plVar22 == (UnityEngine_Collider_array *)0x0)
                goto label_042070f9;
                CustomLogic_CustomLogicCollisionHandler__GetHit
                          ((CustomLogic_CustomLogicCollisionHandler_o *)plVar22,pCVar17,pSVar20,uVar12,
                           "BladeThrow",UVar27,(MethodInfo *)0x0);
              } while( true );
            }
            piVar1 = &(__this_07->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar5 = (__this_07->fields)._items;
            if (pSVar5 != (System_Object_array *)0x0) {
              uVar12 = (__this_07->fields)._size;
              if (uVar12 < (uint)pSVar5->max_length) {
                (__this_07->fields)._size = uVar12 + 1;
                pSVar5->m_Items[(int)uVar12] = (Il2CppObject *)item_00;
                il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar12,item_00);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_07,(Il2CppObject *)item_00,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              goto label_042067d7;
            }
          }
        }
      }
    }
  }
label_042070fe:
  il2cpp_runtime_helper_022b2c90();
label_04207103:
  il2cpp_runtime_helper_022b2ca0();
label_04207108:
  il2cpp_runtime_helper_022b2c90();
label_0420710d:
  il2cpp_runtime_helper_022b2c90();
label_04207112:
  il2cpp_runtime_helper_022b2fd0(plVar22);
label_0420711a:
  il2cpp_runtime_helper_022b2c90();
label_0420711f:
  il2cpp_runtime_helper_022b2fd0();
label_04207124:
  il2cpp_runtime_helper_022b2c90();
label_04207129:
  il2cpp_runtime_helper_022b2c90();
label_0420712e:
  il2cpp_runtime_helper_022b2c90();
label_04207133:
  il2cpp_runtime_helper_022b2c90();
label_04207138:
  il2cpp_runtime_helper_022b2c90();
label_0420713d:
  il2cpp_runtime_helper_022b2c90();
label_04207142:
  il2cpp_runtime_helper_022b2c90();
label_04207147:
  il2cpp_runtime_helper_022b2c90();
label_0420714c:
  il2cpp_runtime_helper_022b2fd0();
label_04207151:
  il2cpp_runtime_helper_022b2c90();
label_04207156:
  il2cpp_runtime_helper_022b2c90();
label_0420715b:
  il2cpp_runtime_helper_022b2c90();
label_04207160:
  il2cpp_runtime_helper_022b2c90();
label_04207165:
  il2cpp_runtime_helper_022b2c90();
label_0420716a:
  il2cpp_runtime_helper_022b2c90();
label_0420716f:
  il2cpp_runtime_helper_022b2c90();
label_04207174:
  il2cpp_runtime_helper_022b2c90();
label_04207179:
  il2cpp_runtime_helper_022b2c90();
label_0420717e:
  auVar28 = il2cpp_runtime_helper_022b2fd0(plVar22);
  if (auVar28._8_4_ == 1) {
    plVar22 = (long *)__cxa_begin_catch(auVar28._0_8_);
    lVar4 = *plVar22;
    __cxa_end_catch();
    __this_04.fields._version = (int32_t)in_stack_fffffffffffffed4;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8._0_8_;
    __this_04.fields._index = in_stack_fffffffffffffec8._8_4_;
    __this_04.fields._current._0_4_ = in_stack_fffffffffffffed8;
    __this_04.fields._current._4_4_ = in_stack_fffffffffffffedc;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)&_Stack_108);
    if (lVar4 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_05.fields._version = (int32_t)in_stack_fffffffffffffed4;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffec8._0_8_;
  __this_05.fields._index = in_stack_fffffffffffffec8._8_4_;
  __this_05.fields._current._0_4_ = in_stack_fffffffffffffed8;
  __this_05.fields._current._4_4_ = in_stack_fffffffffffffedc;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_05,(MethodInfo_321A1C0 *)&_Stack_108);
  _Unwind_Resume(auVar28._0_8_);
}


// Projectiles.BladeThrowProjectile$$RegisterObjects
// il2cpp: void Projectiles_BladeThrowProjectile__RegisterObjects (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x4206070

void Projectiles_BladeThrowProjectile__RegisterObjects
               (Projectiles_BladeThrowProjectile_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  System_Object_array *pSVar4;
  Il2CppClass *pIVar5;
  long lVar6;
  UnityEngine_Collider_c *pUVar7;
  System_Action_Hashtable__o *pSVar8;
  System_Delegate_array *__this_00;
  UI_InGameMenu_o *pUVar9;
  Photon_Pun_PhotonMessageInfo_o info;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  UnityEngine_Object_o *x;
  char cVar10;
  bool_conflict bVar11;
  UnityEngine_LayerMask_o mask;
  int32_t layerMask;
  uint uVar12;
  Photon_Pun_PhotonView_o *pPVar13;
  UnityEngine_Collider_array *pUVar14;
  UnityEngine_Collider_array *pUVar15;
  UnityEngine_Transform_o *pUVar16;
  Characters_BaseCharacter_o *pCVar17;
  UnityEngine_AudioSource_o *pUVar18;
  UnityEngine_Collider_o *firstCollider;
  UnityEngine_SphereCollider_o *__this_05;
  System_Int32_array *layers;
  System_Collections_Generic_List_object__o *__this_06;
  UnityEngine_GameObject_o *pUVar19;
  System_String_o *pSVar20;
  long *plVar21;
  MethodInfo *method_00;
  long *plVar22;
  UnityEngine_Collider_array *__this_07;
  MethodInfo_24E7B40 *item;
  MethodInfo *method_01;
  UnityEngine_Collider_array *pUVar23;
  System_String_o *unaff_R12;
  float fVar24;
  float fVar25;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined8 uVar26;
  UnityEngine_Vector3_o UVar27;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  undefined1 auVar28 [12];
  UnityEngine_Quaternion_o UVar29;
  undefined8 unaff_retaddr;
  Photon_Realtime_Player_o *in_stack_00000008;
  Photon_Pun_PhotonView_o *in_stack_00000010;
  undefined1 in_stack_fffffffffffffee0 [12];
  float in_stack_fffffffffffffeec;
  float in_stack_fffffffffffffef0;
  float in_stack_fffffffffffffef4;
  _union_249395 _Stack_f0;
  undefined8 uStack_e8;
  UnityEngine_Object_o *pUStack_e0;
  undefined1 auStack_d0 [16];
  float fStack_c0;
  _union_249395 _Stack_b0;
  undefined8 uStack_a8;
  UnityEngine_Object_o *pUStack_a0;
  UnityEngine_Collider_array *pUStack_98;
  System_String_o *pSStack_90;
  float local_5c;
  undefined8 local_58;
  
  if (g_data_057ad8e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ad8e3 = '\x01';
  }
  lVar6 = MethodInfo_Void_Add;
  pUVar23 = (UnityEngine_Collider_array *)(__this->fields)._hideObjects;
  if (pUVar23 != (UnityEngine_Collider_array *)0x0) {
    pUVar19 = (__this->fields)._model;
    piVar1 = (int32_t *)((long)&pUVar23->max_length + 4);
    *piVar1 = *piVar1 + 1;
    pSVar4 = ((System_Collections_Generic_List_object__Fields *)&pUVar23->bounds)->_items;
    if (pSVar4 != (System_Object_array *)0x0) {
      uVar12 = (uint)pUVar23->max_length;
      if ((uint)pSVar4->max_length <= uVar12) {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pUVar23,(Il2CppObject *)pUVar19,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        return;
      }
      *(uint *)&pUVar23->max_length = uVar12 + 1;
      pSVar4->m_Items[(int)uVar12] = (Il2CppObject *)pUVar19;
      il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar12);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(char *)(pUVar23->m_Items + 1) != '\0') {
    return;
  }
  __this_07 = (UnityEngine_Collider_array *)0x0;
  plVar22 = (long *)pUVar23;
  pPVar13 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)pUVar23,(MethodInfo *)0x0);
  if (pPVar13 != (Photon_Pun_PhotonView_o *)0x0) {
    if (in_stack_00000008 != (pPVar13->fields)._Owner_k__BackingField) {
      return;
    }
    info.fields.Sender = in_stack_00000008;
    info.fields._0_8_ = unaff_retaddr;
    info.fields.photonView = in_stack_00000010;
    Projectiles_BaseProjectile__DisableRPC
              ((Projectiles_BaseProjectile_o *)pUVar23,info,(MethodInfo *)__this_07);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_GetComponent_AudioSource);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&"BladeHit");
    g_data_057ad8e4 = '\x01';
  }
  item = (MethodInfo_24E7B40 *)0x0;
  pUVar23 = (UnityEngine_Collider_array *)plVar22;
  pPVar13 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)plVar22,(MethodInfo *)0x0);
  if (pPVar13 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((char)(pPVar13->fields)._IsMine_k__BackingField == '\0') ||
       (*(char *)(((UnityEngine_Collider_array *)plVar22)->m_Items + 1) != '\0')) {
      return;
    }
    if (__this_07 != (UnityEngine_Collider_array *)0x0) {
      item = (MethodInfo_24E7B40 *)0x0;
      pUVar23 = __this_07;
      pUVar14 = (UnityEngine_Collider_array *)
                UnityEngine_Collision__get_collider((UnityEngine_Collision_o *)__this_07,(MethodInfo *)0x0);
      if (pUVar14 != (UnityEngine_Collider_array *)0x0) {
        item = (MethodInfo_24E7B40 *)0x0;
        pUVar15 = (UnityEngine_Collider_array *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0);
        pUVar23 = pUVar14;
        if (pUVar15 != (UnityEngine_Collider_array *)0x0) {
          item = (MethodInfo_24E7B40 *)0x0;
          pUVar16 = UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pUVar15,(MethodInfo *)0x0);
          pUVar23 = pUVar15;
          if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
            pCVar17 = (Characters_BaseCharacter_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar16,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar11 = UnityEngine_Object__op_Equality
                               ((UnityEngine_Object_o *)pCVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            if ((char)bVar11 == '\0') {
              unaff_R12 = (System_String_o *)((UnityEngine_Collider_array *)plVar22)->m_Items[0x11];
              if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar11 = GameManagers_TeamInfo__SameTeam_446ffa0(pCVar17,unaff_R12,(MethodInfo *)0x0);
              if (((char)bVar11 == '\0') && (pCVar17 != (Characters_BaseCharacter_o *)0x0)) {
                bVar2 = (TypeInfo_BaseTitan->_2).naturalAligment;
                if ((bVar2 <= (pCVar17->klass->_2).naturalAligment) &&
                   ((pCVar17->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BaseTitan)) {
                  if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar20 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
                  item = (MethodInfo_24E7B40 *)0x0;
                  pUVar23 = (UnityEngine_Collider_array *)plVar22;
                  pUVar16 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)plVar22,(MethodInfo *)0x0);
                  if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
                    UVar27 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                    local_5c = UVar27.fields.z;
                    local_58 = UVar27.fields._0_8_;
                    UVar29 = UnityEngine_Quaternion__Internal_FromEulerRad
                                       ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0);
                    uVar26 = UVar29.fields._8_8_;
                    fVar24 = UVar29.fields.x;
                    fVar25 = UVar29.fields.y;
                    goto label_042062db;
                  }
                  goto label_04206456;
                }
              }
            }
            else {
              if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar20 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb0);
              item = (MethodInfo_24E7B40 *)0x0;
              pUVar23 = (UnityEngine_Collider_array *)plVar22;
              pUVar16 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)plVar22,(MethodInfo *)0x0);
              if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_04206456;
              UVar27 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
              local_5c = UVar27.fields.z;
              local_58 = UVar27.fields._0_8_;
              UVar29 = UnityEngine_Quaternion__LookRotation_4debb20
                                 ((UnityEngine_Vector3_o)
                                  *(UnityEngine_Vector3_Fields *)
                                   (((UnityEngine_Collider_array *)plVar22)->m_Items + 0x12),(MethodInfo *)0x0
                                 );
              uVar26 = UVar29.fields._8_8_;
              fVar24 = UVar29.fields.x;
              fVar25 = UVar29.fields.y;
label_042062db:
              UVar29.fields.y = fVar25;
              UVar29.fields.x = fVar24;
              UVar27.fields.z = local_5c;
              UVar27.fields.x = (float)(undefined4)local_58;
              UVar27.fields.y = (float)local_58._4_4_;
              UVar29.fields.z = (float)(int)uVar26;
              UVar29.fields.w = (float)(int)((ulong)uVar26 >> 0x20);
              Effects_EffectSpawner__Spawn
                        (pSVar20,UVar27,UVar29,1.0,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
            }
            item = (MethodInfo_24E7B40 *)0x0;
            pUVar23 = (UnityEngine_Collider_array *)plVar22;
            pUVar14 = (UnityEngine_Collider_array *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)plVar22,(MethodInfo *)0x0);
            if (((pUVar14 != (UnityEngine_Collider_array *)0x0) &&
                (item = "BladeHit",
                pUVar15 = (UnityEngine_Collider_array *)
                          UnityEngine_Transform__Find
                                    ((UnityEngine_Transform_o *)pUVar14,(System_String_o *)"BladeHit",
                                     (MethodInfo *)0x0), pUVar23 = pUVar14,
                pUVar15 != (UnityEngine_Collider_array *)0x0)) &&
               (item = MethodInfo_AudioSource_GetComponent_AudioSource,
               pUVar18 = (UnityEngine_AudioSource_o *)
                         UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar15,MethodInfo_AudioSource_GetComponent_AudioSource), pUVar23 = pUVar15,
               pUVar18 != (UnityEngine_AudioSource_o *)0x0)) {
              UnityEngine_AudioSource__Play_4daa2c0(pUVar18,(MethodInfo *)0x0);
              firstCollider =
                   UnityEngine_Collision__get_collider((UnityEngine_Collision_o *)__this_07,(MethodInfo *)0x0)
              ;
              Projectiles_BladeThrowProjectile__CheckHurtboxes
                        ((Projectiles_BladeThrowProjectile_o *)plVar22,firstCollider,method_00);
              pIVar5 = (((UnityEngine_Collider_array *)plVar22)->obj).klass;
              (*pIVar5->vtable[0x11].methodPtr)(plVar22,pIVar5->vtable[0x11].method);
              return;
            }
          }
        }
      }
    }
  }
label_04206456:
  il2cpp_runtime_helper_022b2c90();
  pUStack_98 = (UnityEngine_Collider_array *)plVar22;
  pSStack_90 = unaff_R12;
  if (g_data_057ad8e5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_GetComponent_AudioSource);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SphereCollider_GetComponent_SphereCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"BladeThrow");
    il2cpp_runtime_helper_023445d0(&"Blade");
    il2cpp_runtime_helper_023445d0(&"RestrictAngle");
    il2cpp_runtime_helper_023445d0(&"BladeHitNape");
    g_data_057ad8e5 = '\x01';
  }
  _Stack_f0.genericMethod = (void *)0x0;
  uStack_e8 = 0;
  pUStack_e0 = (UnityEngine_Object_o *)0x0;
  __this_05 = (UnityEngine_SphereCollider_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar23,MethodInfo_SphereCollider_GetComponent_SphereCollider);
  if (__this_05 != (UnityEngine_SphereCollider_o *)0x0) {
    in_stack_fffffffffffffef0 = UnityEngine_SphereCollider__get_radius(__this_05,(MethodInfo *)0x0);
    pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0);
    if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
      UVar27 = UnityEngine_Transform__get_lossyScale(pUVar16,(MethodInfo *)0x0);
      auStack_d0._8_4_ = extraout_XMM0_Dc;
      auStack_d0._0_8_ = UVar27.fields._0_8_;
      auStack_d0._12_4_ = extraout_XMM0_Dd;
      pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0);
      if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
        UVar27 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
        in_stack_fffffffffffffeec = UVar27.fields.z;
        layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
        plVar22 = &TypeInfo_PhysicsLayer;
        if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (layers != (System_Int32_array *)0x0) {
          iVar3 = (int)layers->max_length;
          if (iVar3 == 0) goto label_04207103;
          lVar6 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
          layers->m_Items[0] = *(int32_t *)(lVar6 + 0x18);
          if (iVar3 == 1) goto label_04207103;
          in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 * (float)auStack_d0._0_4_ * 1.3;
          layers->m_Items[1] = *(int32_t *)(lVar6 + 0xc);
          mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
          layerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          position.fields.z = in_stack_fffffffffffffeec;
          position.fields.x = (float)(int)UVar27.fields._0_8_;
          position.fields.y = (float)(int)((ulong)UVar27.fields._0_8_ >> 0x20);
          plVar22 = (long *)UnityEngine_Physics__OverlapSphere_4e7aff0
                                      (position,in_stack_fffffffffffffef0,layerMask,(MethodInfo *)0x0);
          __this_06 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
          System_Collections_Generic_List_object____ctor_362ba10
                    (__this_06,(System_Collections_Generic_IEnumerable_T__o *)plVar22,MethodInfo_List_1_UnityEngine_Collider);
          if (__this_06 != (System_Collections_Generic_List_object__o *)0x0) {
            bVar11 = System_Collections_Generic_List_object___Contains
                               (__this_06,(Il2CppObject *)item,MethodInfo_Boolean_Contains);
            lVar6 = MethodInfo_Void_Add;
            if ((char)bVar11 != '\0') {
label_042067d7:
              System_Collections_Generic_List_object___GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_b0,__this_06,MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator)
              ;
              pUStack_e0 = pUStack_a0;
              _Stack_f0 = _Stack_b0;
              uStack_e8 = uStack_a8;
label_04206810:
              do {
                __this_01.fields._version = (int32_t)in_stack_fffffffffffffeec;
                __this_01.fields._list =
                     (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee0._0_8_;
                __this_01.fields._index = in_stack_fffffffffffffee0._8_4_;
                __this_01.fields._current._0_4_ = in_stack_fffffffffffffef0;
                __this_01.fields._current._4_4_ = in_stack_fffffffffffffef4;
                bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   (__this_01,(MethodInfo_321A1D0 *)&_Stack_f0);
                x = pUStack_e0;
                if ((char)bVar11 == '\0') {
                  __this_02.fields._version = (int32_t)in_stack_fffffffffffffeec;
                  __this_02.fields._list =
                       (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee0._0_8_;
                  __this_02.fields._index = in_stack_fffffffffffffee0._8_4_;
                  __this_02.fields._current._0_4_ = in_stack_fffffffffffffef0;
                  __this_02.fields._current._4_4_ = in_stack_fffffffffffffef4;
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            (__this_02,(MethodInfo_321A1C0 *)&_Stack_f0);
                  return;
                }
                if (pUStack_e0 == (UnityEngine_Object_o *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
label_042070db:
                  il2cpp_runtime_helper_022b2c90();
label_042070e0:
                  il2cpp_runtime_helper_022b2c90();
label_042070e5:
                  il2cpp_runtime_helper_022b2c90();
label_042070ea:
                  il2cpp_runtime_helper_022b2c90();
label_042070ef:
                  il2cpp_runtime_helper_022b2c90();
label_042070f4:
                  il2cpp_runtime_helper_022b2c90();
label_042070f9:
                  il2cpp_runtime_helper_022b2c90();
                  goto label_042070fe;
                }
                pUVar16 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pUStack_e0,(MethodInfo *)0x0);
                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_042070db;
                pUVar16 = UnityEngine_Transform__get_root(pUVar16,(MethodInfo *)0x0);
                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_042070e0;
                pUVar19 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
                if (pUVar19 == (UnityEngine_GameObject_o *)0x0) goto label_042070e5;
                pCVar17 = (Characters_BaseCharacter_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar19,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
                pUVar19 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
                if (pUVar19 == (UnityEngine_GameObject_o *)0x0) goto label_042070ea;
                method_01 = MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl;
                plVar22 = (long *)UnityEngine_GameObject__GetComponent_object_
                                            (pUVar19,(MethodInfo_255A0F0 *)MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
                uVar12 = Projectiles_BladeThrowProjectile__CalculateDamage
                                   ((Projectiles_BladeThrowProjectile_o *)pUVar23,method_01);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar11 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)plVar22,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar11 == '\0') {
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar11 = UnityEngine_Object__op_Equality
                                     ((UnityEngine_Object_o *)pCVar17,(UnityEngine_Object_o *)0x0,
                                      (MethodInfo *)0x0);
                  if ((char)bVar11 == '\0') {
                    plVar22 = (long *)pUVar23->m_Items[0xf];
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    bVar11 = UnityEngine_Object__op_Equality
                                       ((UnityEngine_Object_o *)pCVar17,(UnityEngine_Object_o *)plVar22,
                                        (MethodInfo *)0x0);
                    if ((char)bVar11 == '\0') {
                      plVar22 = (long *)pUVar23->m_Items[0x11];
                      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      bVar11 = GameManagers_TeamInfo__SameTeam_446ffa0
                                         (pCVar17,(System_String_o *)plVar22,(MethodInfo *)0x0);
                      if ((char)bVar11 == '\0') {
                        if (pCVar17 == (Characters_BaseCharacter_o *)0x0) goto label_04207108;
                        if (*(char *)&(pCVar17->fields).FeedVictimName == '\0') {
                          bVar2 = (TypeInfo_BaseTitan->_2).naturalAligment;
                          if ((bVar2 <= (pCVar17->klass->_2).naturalAligment) &&
                             ((pCVar17->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BaseTitan)) {
                            if ((char)(pCVar17->fields).CustomDamage != '\0') {
                              pUVar16 = UnityEngine_Component__get_transform
                                                  ((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0);
                              if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_04207129;
                              UVar27 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                              in_stack_fffffffffffffef0 = UVar27.fields.x;
                              in_stack_fffffffffffffef4 = UVar27.fields.y;
                              auStack_d0._8_8_ = 0;
                              auStack_d0._0_8_ = pUVar23->m_Items[0x12];
                              in_stack_fffffffffffffeec = *(float *)(pUVar23->m_Items + 0x13);
                              fStack_c0 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
                              pSVar8 = (pCVar17->fields).OnPlayerPropertiesChanged;
                              if (pSVar8 == (System_Action_Hashtable__o *)0x0) goto label_04207138;
                              plVar22 = (long *)(pSVar8->fields).data;
                              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              bVar11 = UnityEngine_Object__op_Equality
                                                 (x,(UnityEngine_Object_o *)plVar22,(MethodInfo *)0x0);
                              if ((char)bVar11 != '\0') {
                                if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                plVar21 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
                                if (plVar21 == (long *)0x0) goto label_04207151;
                                plVar21 = (long *)(**(code **)(*plVar21 + 0x1a8))
                                                            (plVar21,"Blade",
                                                             *(undefined8 *)(*plVar21 + 0x1b0));
                                if (plVar21 == (long *)0x0) goto label_04207165;
                                plVar21 = (long *)(**(code **)(*plVar21 + 0x1a8))
                                                            (plVar21,"RestrictAngle",
                                                             *(undefined8 *)(*plVar21 + 0x1b0));
                                if (plVar21 == (long *)0x0) goto label_04207179;
                                uVar26 = (**(code **)(*plVar21 + 0x388))
                                                   (plVar21,*(undefined8 *)(*plVar21 + 0x390));
                                cVar10 = (*(code *)pCVar17->klass[1].vtable._44_OnJoinRandomFailed.method)
                                                   (in_stack_fffffffffffffef0 -
                                                    ((float)auStack_d0._0_4_ * fStack_c0 +
                                                    (float)auStack_d0._0_4_ * fStack_c0),
                                                    UVar27.fields.z -
                                                    (in_stack_fffffffffffffeec * fStack_c0 +
                                                    in_stack_fffffffffffffeec * fStack_c0),uVar26,pCVar17);
                                if (cVar10 == '\0') goto label_04206810;
                                plVar22 = (long *)pUVar23->m_Items[0xf];
                                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                bVar11 = UnityEngine_Object__op_Inequality
                                                   ((UnityEngine_Object_o *)plVar22,
                                                    (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                if (((char)bVar11 != '\0') &&
                                   (pUVar23->m_Items[0xf] != (UnityEngine_Collider_o *)0x0)) {
                                  pUVar7 = pUVar23->m_Items[0xf]->klass;
                                  bVar2 = (TypeInfo_Human->_2).naturalAligment;
                                  if ((bVar2 <= (pUVar7->_2).naturalAligment) &&
                                     ((pUVar7->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Human)) {
                                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                      il2cpp_runtime_helper_02337ed0();
                                    }
                                    pUVar9 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                                    if (pUVar9 == (UI_InGameMenu_o *)0x0) goto label_0420710d;
                                    bVar2 = (TypeInfo_InGameMenu->_2).naturalAligment;
                                    if (((pUVar9->klass->_2).naturalAligment < bVar2) ||
                                       ((pUVar9->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameMenu))
                                    goto label_0420711f;
                                    UI_InGameMenu__ShowKillScore(pUVar9,uVar12,0,(MethodInfo *)0x0);
                                    pSVar8 = (pCVar17->fields).OnPlayerPropertiesChanged;
                                    if (pSVar8 == (System_Action_Hashtable__o *)0x0) goto label_0420712e;
                                    pUVar16 = (UnityEngine_Transform_o *)(pSVar8->fields).method_code;
                                    if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_04207142;
                                    plVar22 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                                    UVar27 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                                    if ((UnityEngine_Collider_array *)plVar22 ==
                                        (UnityEngine_Collider_array *)0x0) goto label_04207160;
                                    pIVar5 = (((UnityEngine_Collider_array *)plVar22)->obj).klass;
                                    bVar2 = (TypeInfo_InGameCamera->_2).naturalAligment;
                                    if (((pIVar5->_2).naturalAligment < bVar2) ||
                                       ((pIVar5->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameCamera))
                                    goto label_0420717e;
                                    Cameras_InGameCamera__TakeSnapshot
                                              ((Cameras_InGameCamera_o *)plVar22,UVar27,uVar12,
                                               (MethodInfo *)0x0);
                                  }
                                }
                                pUVar16 = UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0);
                                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_0420711a;
                                pUVar16 = UnityEngine_Transform__Find(pUVar16,"BladeHitNape",(MethodInfo *)0x0);
                                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_04207124;
                                pUVar18 = (UnityEngine_AudioSource_o *)
                                          UnityEngine_Component__GetComponent_object_
                                                    ((UnityEngine_Component_o *)pUVar16,MethodInfo_AudioSource_GetComponent_AudioSource);
                                if (pUVar18 == (UnityEngine_AudioSource_o *)0x0) goto label_04207133;
                                UnityEngine_AudioSource__Play_4daa2c0(pUVar18,(MethodInfo *)0x0);
                              }
                              pSVar8 = (pCVar17->fields).OnPlayerPropertiesChanged;
                              if (pSVar8 == (System_Action_Hashtable__o *)0x0) goto label_04207147;
                              __this_00 = pSVar8[1].fields.delegates;
                              if (__this_00 == (System_Delegate_array *)0x0) goto label_0420715b;
                              bVar11 = System_Collections_Generic_List_object___Contains
                                                 ((System_Collections_Generic_List_object__o *)__this_00,
                                                  (Il2CppObject *)x,MethodInfo_Boolean_Contains);
                              if ((char)bVar11 != '\0') {
                                if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                plVar22 = *(long **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x38);
                                pUVar16 = UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0);
                                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_0420716f;
                                UVar27 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                                position_00.fields.z = UVar27.fields.z;
                                in_stack_fffffffffffffef0 = UVar27.fields.x;
                                in_stack_fffffffffffffef4 = UVar27.fields.y;
                                UVar29 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                   ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),
                                                    (MethodInfo *)0x0);
                                position_00.fields.y = in_stack_fffffffffffffef4;
                                position_00.fields.x = in_stack_fffffffffffffef0;
                                Effects_EffectSpawner__Spawn
                                          ((System_String_o *)plVar22,position_00,UVar29,1.0,1,
                                           (System_Object_array *)0x0,(MethodInfo *)0x0);
                                plVar22 = (long *)pUVar23->m_Items[0xf];
                                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                bVar11 = UnityEngine_Object__op_Equality
                                                   ((UnityEngine_Object_o *)plVar22,
                                                    (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                if (((char)bVar11 == '\0') &&
                                   (plVar22 = (long *)pUVar23->m_Items[0xf],
                                   (UnityEngine_Collider_array *)plVar22 != (UnityEngine_Collider_array *)0x0)
                                   ) {
                                  pIVar5 = (((UnityEngine_Collider_array *)plVar22)->obj).klass;
                                  bVar2 = (TypeInfo_Human->_2).naturalAligment;
                                  if ((bVar2 <= (pIVar5->_2).naturalAligment) &&
                                     ((pIVar5->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Human)) {
                                    pSVar20 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                                    (*(pCVar17->klass->vtable)._84_GetHit.methodPtr)
                                              (pCVar17,plVar22,(ulong)uVar12,"BladeThrow",pSVar20);
                                    goto label_04206810;
                                  }
                                }
                                pSVar20 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                                (*(pCVar17->klass->vtable)._85_GetHit.methodPtr)
                                          (pCVar17,"Blade",100,"BladeThrow",pSVar20);
                              }
                            }
                            goto label_04206810;
                          }
                          plVar22 = (long *)pUVar23->m_Items[0xf];
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          bVar11 = UnityEngine_Object__op_Inequality
                                             ((UnityEngine_Object_o *)plVar22,(UnityEngine_Object_o *)0x0,
                                              (MethodInfo *)0x0);
                          if (((char)bVar11 != '\0') &&
                             (pUVar23->m_Items[0xf] != (UnityEngine_Collider_o *)0x0)) {
                            pUVar7 = pUVar23->m_Items[0xf]->klass;
                            bVar2 = (TypeInfo_Human->_2).naturalAligment;
                            if ((bVar2 <= (pUVar7->_2).naturalAligment) &&
                               ((pUVar7->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Human)) {
                              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              pUVar9 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                              if (pUVar9 == (UI_InGameMenu_o *)0x0) goto label_0420713d;
                              bVar2 = (TypeInfo_InGameMenu->_2).naturalAligment;
                              if (((pUVar9->klass->_2).naturalAligment < bVar2) ||
                                 ((pUVar9->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameMenu))
                              goto label_0420714c;
                              UI_InGameMenu__ShowKillScore(pUVar9,uVar12,0,(MethodInfo *)0x0);
                              plVar22 = (long *)pUVar23->m_Items[0xf];
                              pSVar20 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                              (*(pCVar17->klass->vtable)._84_GetHit.methodPtr)
                                        (pCVar17,plVar22,(ulong)uVar12,"BladeThrow",pSVar20);
                              lVar6 = *(long *)&(pCVar17->fields).Dead;
                              if (lVar6 == 0) goto label_04207156;
                              pUVar16 = *(UnityEngine_Transform_o **)(lVar6 + 0x10);
                              if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_0420716a;
                              plVar22 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                              UVar27 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                              if ((UnityEngine_Collider_array *)plVar22 == (UnityEngine_Collider_array *)0x0)
                              goto label_04207174;
                              pIVar5 = (((UnityEngine_Collider_array *)plVar22)->obj).klass;
                              bVar2 = (TypeInfo_InGameCamera->_2).naturalAligment;
                              if (((pIVar5->_2).naturalAligment < bVar2) ||
                                 ((pIVar5->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameCamera))
                              goto label_04207112;
                              Cameras_InGameCamera__TakeSnapshot
                                        ((Cameras_InGameCamera_o *)plVar22,UVar27,uVar12,(MethodInfo *)0x0);
                              goto label_04206810;
                            }
                          }
                          pSVar20 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                          (*(pCVar17->klass->vtable)._85_GetHit.methodPtr)
                                    (pCVar17,"Blade",100,"BladeThrow",pSVar20);
                        }
                      }
                    }
                  }
                  goto label_04206810;
                }
                pCVar17 = (Characters_BaseCharacter_o *)pUVar23->m_Items[0xf];
                if (pCVar17 == (Characters_BaseCharacter_o *)0x0) goto label_042070ef;
                pSVar20 = *(System_String_o **)&(pCVar17->fields)._disableKinematicTimeLeft;
                pUVar16 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0);
                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_042070f4;
                UVar27 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                if ((UnityEngine_Collider_array *)plVar22 == (UnityEngine_Collider_array *)0x0)
                goto label_042070f9;
                CustomLogic_CustomLogicCollisionHandler__GetHit
                          ((CustomLogic_CustomLogicCollisionHandler_o *)plVar22,pCVar17,pSVar20,uVar12,
                           "BladeThrow",UVar27,(MethodInfo *)0x0);
              } while( true );
            }
            piVar1 = &(__this_06->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (__this_06->fields)._items;
            if (pSVar4 != (System_Object_array *)0x0) {
              uVar12 = (__this_06->fields)._size;
              if (uVar12 < (uint)pSVar4->max_length) {
                (__this_06->fields)._size = uVar12 + 1;
                pSVar4->m_Items[(int)uVar12] = (Il2CppObject *)item;
                il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar12,item);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_06,(Il2CppObject *)item,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
              goto label_042067d7;
            }
          }
        }
      }
    }
  }
label_042070fe:
  il2cpp_runtime_helper_022b2c90();
label_04207103:
  il2cpp_runtime_helper_022b2ca0();
label_04207108:
  il2cpp_runtime_helper_022b2c90();
label_0420710d:
  il2cpp_runtime_helper_022b2c90();
label_04207112:
  il2cpp_runtime_helper_022b2fd0(plVar22);
label_0420711a:
  il2cpp_runtime_helper_022b2c90();
label_0420711f:
  il2cpp_runtime_helper_022b2fd0();
label_04207124:
  il2cpp_runtime_helper_022b2c90();
label_04207129:
  il2cpp_runtime_helper_022b2c90();
label_0420712e:
  il2cpp_runtime_helper_022b2c90();
label_04207133:
  il2cpp_runtime_helper_022b2c90();
label_04207138:
  il2cpp_runtime_helper_022b2c90();
label_0420713d:
  il2cpp_runtime_helper_022b2c90();
label_04207142:
  il2cpp_runtime_helper_022b2c90();
label_04207147:
  il2cpp_runtime_helper_022b2c90();
label_0420714c:
  il2cpp_runtime_helper_022b2fd0();
label_04207151:
  il2cpp_runtime_helper_022b2c90();
label_04207156:
  il2cpp_runtime_helper_022b2c90();
label_0420715b:
  il2cpp_runtime_helper_022b2c90();
label_04207160:
  il2cpp_runtime_helper_022b2c90();
label_04207165:
  il2cpp_runtime_helper_022b2c90();
label_0420716a:
  il2cpp_runtime_helper_022b2c90();
label_0420716f:
  il2cpp_runtime_helper_022b2c90();
label_04207174:
  il2cpp_runtime_helper_022b2c90();
label_04207179:
  il2cpp_runtime_helper_022b2c90();
label_0420717e:
  auVar28 = il2cpp_runtime_helper_022b2fd0(plVar22);
  if (auVar28._8_4_ == 1) {
    plVar22 = (long *)__cxa_begin_catch(auVar28._0_8_);
    lVar6 = *plVar22;
    __cxa_end_catch();
    __this_03.fields._version = (int32_t)in_stack_fffffffffffffeec;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee0._0_8_;
    __this_03.fields._index = in_stack_fffffffffffffee0._8_4_;
    __this_03.fields._current._0_4_ = in_stack_fffffffffffffef0;
    __this_03.fields._current._4_4_ = in_stack_fffffffffffffef4;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_03,(MethodInfo_321A1C0 *)&_Stack_f0);
    if (lVar6 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar6);
  }
  __this_04.fields._version = (int32_t)in_stack_fffffffffffffeec;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee0._0_8_;
  __this_04.fields._index = in_stack_fffffffffffffee0._8_4_;
  __this_04.fields._current._0_4_ = in_stack_fffffffffffffef0;
  __this_04.fields._current._4_4_ = in_stack_fffffffffffffef4;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)&_Stack_f0);
  _Unwind_Resume(auVar28._0_8_);
}


// Projectiles.BladeThrowProjectile$$DisableRPC
// il2cpp: void Projectiles_BladeThrowProjectile__DisableRPC (Projectiles_BladeThrowProjectile_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4206100

void Projectiles_BladeThrowProjectile__DisableRPC
               (Projectiles_BladeThrowProjectile_o *__this,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  Il2CppClass *pIVar4;
  long lVar5;
  System_Object_array *pSVar6;
  UnityEngine_Collider_c *pUVar7;
  System_Action_Hashtable__o *pSVar8;
  System_Delegate_array *__this_00;
  UI_InGameMenu_o *pUVar9;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  UnityEngine_Object_o *x;
  char cVar10;
  bool_conflict bVar11;
  UnityEngine_LayerMask_o mask;
  int32_t layerMask;
  uint uVar12;
  Photon_Pun_PhotonView_o *pPVar13;
  UnityEngine_Collider_array *pUVar14;
  UnityEngine_Collider_array *pUVar15;
  UnityEngine_Transform_o *pUVar16;
  Characters_BaseCharacter_o *pCVar17;
  UnityEngine_AudioSource_o *pUVar18;
  UnityEngine_Collider_o *firstCollider;
  UnityEngine_SphereCollider_o *__this_05;
  System_Int32_array *layers;
  System_Collections_Generic_List_object__o *__this_06;
  UnityEngine_GameObject_o *pUVar19;
  System_String_o *pSVar20;
  long *plVar21;
  MethodInfo *method_00;
  long *plVar22;
  UnityEngine_Collider_array *__this_07;
  MethodInfo_24E7B40 *item;
  MethodInfo *method_01;
  UnityEngine_Collider_array *__this_08;
  System_String_o *unaff_R12;
  float fVar23;
  float fVar24;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined8 uVar25;
  UnityEngine_Vector3_o UVar26;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  undefined1 auVar27 [12];
  UnityEngine_Quaternion_o UVar28;
  undefined1 in_stack_fffffffffffffee8 [12];
  float in_stack_fffffffffffffef4;
  float in_stack_fffffffffffffef8;
  float in_stack_fffffffffffffefc;
  _union_249395 _Stack_e8;
  undefined8 uStack_e0;
  UnityEngine_Object_o *pUStack_d8;
  undefined1 auStack_c8 [16];
  float fStack_b8;
  _union_249395 _Stack_a8;
  undefined8 uStack_a0;
  UnityEngine_Object_o *pUStack_98;
  UnityEngine_Collider_array *pUStack_90;
  System_String_o *pSStack_88;
  float fStack_54;
  undefined8 uStack_50;
  
  if ((char)(__this->fields).Disabled != '\0') {
    return;
  }
  __this_07 = (UnityEngine_Collider_array *)0x0;
  plVar22 = (long *)__this;
  pPVar13 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar13 != (Photon_Pun_PhotonView_o *)0x0) {
    if (info.fields.Sender != (pPVar13->fields)._Owner_k__BackingField) {
      return;
    }
    Projectiles_BaseProjectile__DisableRPC
              ((Projectiles_BaseProjectile_o *)__this,info,(MethodInfo *)__this_07);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_GetComponent_AudioSource);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&"BladeHit");
    g_data_057ad8e4 = '\x01';
  }
  item = (MethodInfo_24E7B40 *)0x0;
  __this_08 = (UnityEngine_Collider_array *)plVar22;
  pPVar13 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)plVar22,(MethodInfo *)0x0);
  if (pPVar13 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((char)(pPVar13->fields)._IsMine_k__BackingField == '\0') ||
       (*(char *)(((UnityEngine_Collider_array *)plVar22)->m_Items + 1) != '\0')) {
      return;
    }
    if (__this_07 != (UnityEngine_Collider_array *)0x0) {
      item = (MethodInfo_24E7B40 *)0x0;
      __this_08 = __this_07;
      pUVar14 = (UnityEngine_Collider_array *)
                UnityEngine_Collision__get_collider((UnityEngine_Collision_o *)__this_07,(MethodInfo *)0x0);
      if (pUVar14 != (UnityEngine_Collider_array *)0x0) {
        item = (MethodInfo_24E7B40 *)0x0;
        pUVar15 = (UnityEngine_Collider_array *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0);
        __this_08 = pUVar14;
        if (pUVar15 != (UnityEngine_Collider_array *)0x0) {
          item = (MethodInfo_24E7B40 *)0x0;
          pUVar16 = UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pUVar15,(MethodInfo *)0x0);
          __this_08 = pUVar15;
          if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
            pCVar17 = (Characters_BaseCharacter_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar16,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar11 = UnityEngine_Object__op_Equality
                               ((UnityEngine_Object_o *)pCVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            if ((char)bVar11 == '\0') {
              unaff_R12 = (System_String_o *)((UnityEngine_Collider_array *)plVar22)->m_Items[0x11];
              if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar11 = GameManagers_TeamInfo__SameTeam_446ffa0(pCVar17,unaff_R12,(MethodInfo *)0x0);
              if (((char)bVar11 == '\0') && (pCVar17 != (Characters_BaseCharacter_o *)0x0)) {
                bVar2 = (TypeInfo_BaseTitan->_2).naturalAligment;
                if ((bVar2 <= (pCVar17->klass->_2).naturalAligment) &&
                   ((pCVar17->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BaseTitan)) {
                  if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar20 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
                  item = (MethodInfo_24E7B40 *)0x0;
                  __this_08 = (UnityEngine_Collider_array *)plVar22;
                  pUVar16 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)plVar22,(MethodInfo *)0x0);
                  if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
                    UVar26 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                    fStack_54 = UVar26.fields.z;
                    uStack_50 = UVar26.fields._0_8_;
                    UVar28 = UnityEngine_Quaternion__Internal_FromEulerRad
                                       ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0);
                    uVar25 = UVar28.fields._8_8_;
                    fVar23 = UVar28.fields.x;
                    fVar24 = UVar28.fields.y;
                    goto label_042062db;
                  }
                  goto label_04206456;
                }
              }
            }
            else {
              if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar20 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb0);
              item = (MethodInfo_24E7B40 *)0x0;
              __this_08 = (UnityEngine_Collider_array *)plVar22;
              pUVar16 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)plVar22,(MethodInfo *)0x0);
              if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_04206456;
              UVar26 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
              fStack_54 = UVar26.fields.z;
              uStack_50 = UVar26.fields._0_8_;
              UVar28 = UnityEngine_Quaternion__LookRotation_4debb20
                                 ((UnityEngine_Vector3_o)
                                  *(UnityEngine_Vector3_Fields *)
                                   (((UnityEngine_Collider_array *)plVar22)->m_Items + 0x12),(MethodInfo *)0x0
                                 );
              uVar25 = UVar28.fields._8_8_;
              fVar23 = UVar28.fields.x;
              fVar24 = UVar28.fields.y;
label_042062db:
              UVar28.fields.y = fVar24;
              UVar28.fields.x = fVar23;
              UVar26.fields.z = fStack_54;
              UVar26.fields.x = (float)(undefined4)uStack_50;
              UVar26.fields.y = (float)uStack_50._4_4_;
              UVar28.fields.z = (float)(int)uVar25;
              UVar28.fields.w = (float)(int)((ulong)uVar25 >> 0x20);
              Effects_EffectSpawner__Spawn
                        (pSVar20,UVar26,UVar28,1.0,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
            }
            item = (MethodInfo_24E7B40 *)0x0;
            __this_08 = (UnityEngine_Collider_array *)plVar22;
            pUVar14 = (UnityEngine_Collider_array *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)plVar22,(MethodInfo *)0x0);
            if (((pUVar14 != (UnityEngine_Collider_array *)0x0) &&
                (item = "BladeHit",
                pUVar15 = (UnityEngine_Collider_array *)
                          UnityEngine_Transform__Find
                                    ((UnityEngine_Transform_o *)pUVar14,(System_String_o *)"BladeHit",
                                     (MethodInfo *)0x0), __this_08 = pUVar14,
                pUVar15 != (UnityEngine_Collider_array *)0x0)) &&
               (item = MethodInfo_AudioSource_GetComponent_AudioSource,
               pUVar18 = (UnityEngine_AudioSource_o *)
                         UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar15,MethodInfo_AudioSource_GetComponent_AudioSource), __this_08 = pUVar15,
               pUVar18 != (UnityEngine_AudioSource_o *)0x0)) {
              UnityEngine_AudioSource__Play_4daa2c0(pUVar18,(MethodInfo *)0x0);
              firstCollider =
                   UnityEngine_Collision__get_collider((UnityEngine_Collision_o *)__this_07,(MethodInfo *)0x0)
              ;
              Projectiles_BladeThrowProjectile__CheckHurtboxes
                        ((Projectiles_BladeThrowProjectile_o *)plVar22,firstCollider,method_00);
              pIVar4 = (((UnityEngine_Collider_array *)plVar22)->obj).klass;
              (*pIVar4->vtable[0x11].methodPtr)(plVar22,pIVar4->vtable[0x11].method);
              return;
            }
          }
        }
      }
    }
  }
label_04206456:
  il2cpp_runtime_helper_022b2c90();
  pUStack_90 = (UnityEngine_Collider_array *)plVar22;
  pSStack_88 = unaff_R12;
  if (g_data_057ad8e5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_GetComponent_AudioSource);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SphereCollider_GetComponent_SphereCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"BladeThrow");
    il2cpp_runtime_helper_023445d0(&"Blade");
    il2cpp_runtime_helper_023445d0(&"RestrictAngle");
    il2cpp_runtime_helper_023445d0(&"BladeHitNape");
    g_data_057ad8e5 = '\x01';
  }
  _Stack_e8.genericMethod = (void *)0x0;
  uStack_e0 = 0;
  pUStack_d8 = (UnityEngine_Object_o *)0x0;
  __this_05 = (UnityEngine_SphereCollider_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_08,MethodInfo_SphereCollider_GetComponent_SphereCollider);
  if (__this_05 != (UnityEngine_SphereCollider_o *)0x0) {
    in_stack_fffffffffffffef8 = UnityEngine_SphereCollider__get_radius(__this_05,(MethodInfo *)0x0);
    pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_08,(MethodInfo *)0x0);
    if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
      UVar26 = UnityEngine_Transform__get_lossyScale(pUVar16,(MethodInfo *)0x0);
      auStack_c8._8_4_ = extraout_XMM0_Dc;
      auStack_c8._0_8_ = UVar26.fields._0_8_;
      auStack_c8._12_4_ = extraout_XMM0_Dd;
      pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_08,(MethodInfo *)0x0);
      if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
        UVar26 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
        in_stack_fffffffffffffef4 = UVar26.fields.z;
        layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
        plVar22 = &TypeInfo_PhysicsLayer;
        if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (layers != (System_Int32_array *)0x0) {
          iVar3 = (int)layers->max_length;
          if (iVar3 == 0) goto label_04207103;
          lVar5 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
          layers->m_Items[0] = *(int32_t *)(lVar5 + 0x18);
          if (iVar3 == 1) goto label_04207103;
          in_stack_fffffffffffffef8 = in_stack_fffffffffffffef8 * (float)auStack_c8._0_4_ * 1.3;
          layers->m_Items[1] = *(int32_t *)(lVar5 + 0xc);
          mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
          layerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          position.fields.z = in_stack_fffffffffffffef4;
          position.fields.x = (float)(int)UVar26.fields._0_8_;
          position.fields.y = (float)(int)((ulong)UVar26.fields._0_8_ >> 0x20);
          plVar22 = (long *)UnityEngine_Physics__OverlapSphere_4e7aff0
                                      (position,in_stack_fffffffffffffef8,layerMask,(MethodInfo *)0x0);
          __this_06 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
          System_Collections_Generic_List_object____ctor_362ba10
                    (__this_06,(System_Collections_Generic_IEnumerable_T__o *)plVar22,MethodInfo_List_1_UnityEngine_Collider);
          if (__this_06 != (System_Collections_Generic_List_object__o *)0x0) {
            bVar11 = System_Collections_Generic_List_object___Contains
                               (__this_06,(Il2CppObject *)item,MethodInfo_Boolean_Contains);
            lVar5 = MethodInfo_Void_Add;
            if ((char)bVar11 != '\0') {
label_042067d7:
              System_Collections_Generic_List_object___GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_a8,__this_06,MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator)
              ;
              pUStack_d8 = pUStack_98;
              _Stack_e8 = _Stack_a8;
              uStack_e0 = uStack_a0;
label_04206810:
              do {
                __this_01.fields._version = (int32_t)in_stack_fffffffffffffef4;
                __this_01.fields._list =
                     (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8._0_8_;
                __this_01.fields._index = in_stack_fffffffffffffee8._8_4_;
                __this_01.fields._current._0_4_ = in_stack_fffffffffffffef8;
                __this_01.fields._current._4_4_ = in_stack_fffffffffffffefc;
                bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   (__this_01,(MethodInfo_321A1D0 *)&_Stack_e8);
                x = pUStack_d8;
                if ((char)bVar11 == '\0') {
                  __this_02.fields._version = (int32_t)in_stack_fffffffffffffef4;
                  __this_02.fields._list =
                       (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8._0_8_;
                  __this_02.fields._index = in_stack_fffffffffffffee8._8_4_;
                  __this_02.fields._current._0_4_ = in_stack_fffffffffffffef8;
                  __this_02.fields._current._4_4_ = in_stack_fffffffffffffefc;
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            (__this_02,(MethodInfo_321A1C0 *)&_Stack_e8);
                  return;
                }
                if (pUStack_d8 == (UnityEngine_Object_o *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
label_042070db:
                  il2cpp_runtime_helper_022b2c90();
label_042070e0:
                  il2cpp_runtime_helper_022b2c90();
label_042070e5:
                  il2cpp_runtime_helper_022b2c90();
label_042070ea:
                  il2cpp_runtime_helper_022b2c90();
label_042070ef:
                  il2cpp_runtime_helper_022b2c90();
label_042070f4:
                  il2cpp_runtime_helper_022b2c90();
label_042070f9:
                  il2cpp_runtime_helper_022b2c90();
                  goto label_042070fe;
                }
                pUVar16 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pUStack_d8,(MethodInfo *)0x0);
                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_042070db;
                pUVar16 = UnityEngine_Transform__get_root(pUVar16,(MethodInfo *)0x0);
                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_042070e0;
                pUVar19 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
                if (pUVar19 == (UnityEngine_GameObject_o *)0x0) goto label_042070e5;
                pCVar17 = (Characters_BaseCharacter_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar19,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
                pUVar19 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
                if (pUVar19 == (UnityEngine_GameObject_o *)0x0) goto label_042070ea;
                method_01 = MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl;
                plVar22 = (long *)UnityEngine_GameObject__GetComponent_object_
                                            (pUVar19,(MethodInfo_255A0F0 *)MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
                uVar12 = Projectiles_BladeThrowProjectile__CalculateDamage
                                   ((Projectiles_BladeThrowProjectile_o *)__this_08,method_01);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar11 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)plVar22,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar11 == '\0') {
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar11 = UnityEngine_Object__op_Equality
                                     ((UnityEngine_Object_o *)pCVar17,(UnityEngine_Object_o *)0x0,
                                      (MethodInfo *)0x0);
                  if ((char)bVar11 == '\0') {
                    plVar22 = (long *)__this_08->m_Items[0xf];
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    bVar11 = UnityEngine_Object__op_Equality
                                       ((UnityEngine_Object_o *)pCVar17,(UnityEngine_Object_o *)plVar22,
                                        (MethodInfo *)0x0);
                    if ((char)bVar11 == '\0') {
                      plVar22 = (long *)__this_08->m_Items[0x11];
                      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      bVar11 = GameManagers_TeamInfo__SameTeam_446ffa0
                                         (pCVar17,(System_String_o *)plVar22,(MethodInfo *)0x0);
                      if ((char)bVar11 == '\0') {
                        if (pCVar17 == (Characters_BaseCharacter_o *)0x0) goto label_04207108;
                        if (*(char *)&(pCVar17->fields).FeedVictimName == '\0') {
                          bVar2 = (TypeInfo_BaseTitan->_2).naturalAligment;
                          if ((bVar2 <= (pCVar17->klass->_2).naturalAligment) &&
                             ((pCVar17->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BaseTitan)) {
                            if ((char)(pCVar17->fields).CustomDamage != '\0') {
                              pUVar16 = UnityEngine_Component__get_transform
                                                  ((UnityEngine_Component_o *)__this_08,(MethodInfo *)0x0);
                              if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_04207129;
                              UVar26 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                              in_stack_fffffffffffffef8 = UVar26.fields.x;
                              in_stack_fffffffffffffefc = UVar26.fields.y;
                              auStack_c8._8_8_ = 0;
                              auStack_c8._0_8_ = __this_08->m_Items[0x12];
                              in_stack_fffffffffffffef4 = *(float *)(__this_08->m_Items + 0x13);
                              fStack_b8 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
                              pSVar8 = (pCVar17->fields).OnPlayerPropertiesChanged;
                              if (pSVar8 == (System_Action_Hashtable__o *)0x0) goto label_04207138;
                              plVar22 = (long *)(pSVar8->fields).data;
                              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              bVar11 = UnityEngine_Object__op_Equality
                                                 (x,(UnityEngine_Object_o *)plVar22,(MethodInfo *)0x0);
                              if ((char)bVar11 != '\0') {
                                if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                plVar21 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
                                if (plVar21 == (long *)0x0) goto label_04207151;
                                plVar21 = (long *)(**(code **)(*plVar21 + 0x1a8))
                                                            (plVar21,"Blade",
                                                             *(undefined8 *)(*plVar21 + 0x1b0));
                                if (plVar21 == (long *)0x0) goto label_04207165;
                                plVar21 = (long *)(**(code **)(*plVar21 + 0x1a8))
                                                            (plVar21,"RestrictAngle",
                                                             *(undefined8 *)(*plVar21 + 0x1b0));
                                if (plVar21 == (long *)0x0) goto label_04207179;
                                uVar25 = (**(code **)(*plVar21 + 0x388))
                                                   (plVar21,*(undefined8 *)(*plVar21 + 0x390));
                                cVar10 = (*(code *)pCVar17->klass[1].vtable._44_OnJoinRandomFailed.method)
                                                   (in_stack_fffffffffffffef8 -
                                                    ((float)auStack_c8._0_4_ * fStack_b8 +
                                                    (float)auStack_c8._0_4_ * fStack_b8),
                                                    UVar26.fields.z -
                                                    (in_stack_fffffffffffffef4 * fStack_b8 +
                                                    in_stack_fffffffffffffef4 * fStack_b8),uVar25,pCVar17);
                                if (cVar10 == '\0') goto label_04206810;
                                plVar22 = (long *)__this_08->m_Items[0xf];
                                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                bVar11 = UnityEngine_Object__op_Inequality
                                                   ((UnityEngine_Object_o *)plVar22,
                                                    (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                if (((char)bVar11 != '\0') &&
                                   (__this_08->m_Items[0xf] != (UnityEngine_Collider_o *)0x0)) {
                                  pUVar7 = __this_08->m_Items[0xf]->klass;
                                  bVar2 = (TypeInfo_Human->_2).naturalAligment;
                                  if ((bVar2 <= (pUVar7->_2).naturalAligment) &&
                                     ((pUVar7->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Human)) {
                                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                      il2cpp_runtime_helper_02337ed0();
                                    }
                                    pUVar9 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                                    if (pUVar9 == (UI_InGameMenu_o *)0x0) goto label_0420710d;
                                    bVar2 = (TypeInfo_InGameMenu->_2).naturalAligment;
                                    if (((pUVar9->klass->_2).naturalAligment < bVar2) ||
                                       ((pUVar9->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameMenu))
                                    goto label_0420711f;
                                    UI_InGameMenu__ShowKillScore(pUVar9,uVar12,0,(MethodInfo *)0x0);
                                    pSVar8 = (pCVar17->fields).OnPlayerPropertiesChanged;
                                    if (pSVar8 == (System_Action_Hashtable__o *)0x0) goto label_0420712e;
                                    pUVar16 = (UnityEngine_Transform_o *)(pSVar8->fields).method_code;
                                    if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_04207142;
                                    plVar22 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                                    UVar26 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                                    if ((UnityEngine_Collider_array *)plVar22 ==
                                        (UnityEngine_Collider_array *)0x0) goto label_04207160;
                                    pIVar4 = (((UnityEngine_Collider_array *)plVar22)->obj).klass;
                                    bVar2 = (TypeInfo_InGameCamera->_2).naturalAligment;
                                    if (((pIVar4->_2).naturalAligment < bVar2) ||
                                       ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameCamera))
                                    goto label_0420717e;
                                    Cameras_InGameCamera__TakeSnapshot
                                              ((Cameras_InGameCamera_o *)plVar22,UVar26,uVar12,
                                               (MethodInfo *)0x0);
                                  }
                                }
                                pUVar16 = UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)__this_08,(MethodInfo *)0x0);
                                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_0420711a;
                                pUVar16 = UnityEngine_Transform__Find(pUVar16,"BladeHitNape",(MethodInfo *)0x0);
                                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_04207124;
                                pUVar18 = (UnityEngine_AudioSource_o *)
                                          UnityEngine_Component__GetComponent_object_
                                                    ((UnityEngine_Component_o *)pUVar16,MethodInfo_AudioSource_GetComponent_AudioSource);
                                if (pUVar18 == (UnityEngine_AudioSource_o *)0x0) goto label_04207133;
                                UnityEngine_AudioSource__Play_4daa2c0(pUVar18,(MethodInfo *)0x0);
                              }
                              pSVar8 = (pCVar17->fields).OnPlayerPropertiesChanged;
                              if (pSVar8 == (System_Action_Hashtable__o *)0x0) goto label_04207147;
                              __this_00 = pSVar8[1].fields.delegates;
                              if (__this_00 == (System_Delegate_array *)0x0) goto label_0420715b;
                              bVar11 = System_Collections_Generic_List_object___Contains
                                                 ((System_Collections_Generic_List_object__o *)__this_00,
                                                  (Il2CppObject *)x,MethodInfo_Boolean_Contains);
                              if ((char)bVar11 != '\0') {
                                if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                plVar22 = *(long **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x38);
                                pUVar16 = UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)__this_08,(MethodInfo *)0x0);
                                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_0420716f;
                                UVar26 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                                position_00.fields.z = UVar26.fields.z;
                                in_stack_fffffffffffffef8 = UVar26.fields.x;
                                in_stack_fffffffffffffefc = UVar26.fields.y;
                                UVar28 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                   ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),
                                                    (MethodInfo *)0x0);
                                position_00.fields.y = in_stack_fffffffffffffefc;
                                position_00.fields.x = in_stack_fffffffffffffef8;
                                Effects_EffectSpawner__Spawn
                                          ((System_String_o *)plVar22,position_00,UVar28,1.0,1,
                                           (System_Object_array *)0x0,(MethodInfo *)0x0);
                                plVar22 = (long *)__this_08->m_Items[0xf];
                                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                bVar11 = UnityEngine_Object__op_Equality
                                                   ((UnityEngine_Object_o *)plVar22,
                                                    (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                if (((char)bVar11 == '\0') &&
                                   (plVar22 = (long *)__this_08->m_Items[0xf],
                                   (UnityEngine_Collider_array *)plVar22 != (UnityEngine_Collider_array *)0x0)
                                   ) {
                                  pIVar4 = (((UnityEngine_Collider_array *)plVar22)->obj).klass;
                                  bVar2 = (TypeInfo_Human->_2).naturalAligment;
                                  if ((bVar2 <= (pIVar4->_2).naturalAligment) &&
                                     ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Human)) {
                                    pSVar20 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                                    (*(pCVar17->klass->vtable)._84_GetHit.methodPtr)
                                              (pCVar17,plVar22,(ulong)uVar12,"BladeThrow",pSVar20);
                                    goto label_04206810;
                                  }
                                }
                                pSVar20 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                                (*(pCVar17->klass->vtable)._85_GetHit.methodPtr)
                                          (pCVar17,"Blade",100,"BladeThrow",pSVar20);
                              }
                            }
                            goto label_04206810;
                          }
                          plVar22 = (long *)__this_08->m_Items[0xf];
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          bVar11 = UnityEngine_Object__op_Inequality
                                             ((UnityEngine_Object_o *)plVar22,(UnityEngine_Object_o *)0x0,
                                              (MethodInfo *)0x0);
                          if (((char)bVar11 != '\0') &&
                             (__this_08->m_Items[0xf] != (UnityEngine_Collider_o *)0x0)) {
                            pUVar7 = __this_08->m_Items[0xf]->klass;
                            bVar2 = (TypeInfo_Human->_2).naturalAligment;
                            if ((bVar2 <= (pUVar7->_2).naturalAligment) &&
                               ((pUVar7->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Human)) {
                              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              pUVar9 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                              if (pUVar9 == (UI_InGameMenu_o *)0x0) goto label_0420713d;
                              bVar2 = (TypeInfo_InGameMenu->_2).naturalAligment;
                              if (((pUVar9->klass->_2).naturalAligment < bVar2) ||
                                 ((pUVar9->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameMenu))
                              goto label_0420714c;
                              UI_InGameMenu__ShowKillScore(pUVar9,uVar12,0,(MethodInfo *)0x0);
                              plVar22 = (long *)__this_08->m_Items[0xf];
                              pSVar20 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                              (*(pCVar17->klass->vtable)._84_GetHit.methodPtr)
                                        (pCVar17,plVar22,(ulong)uVar12,"BladeThrow",pSVar20);
                              lVar5 = *(long *)&(pCVar17->fields).Dead;
                              if (lVar5 == 0) goto label_04207156;
                              pUVar16 = *(UnityEngine_Transform_o **)(lVar5 + 0x10);
                              if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_0420716a;
                              plVar22 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                              UVar26 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                              if ((UnityEngine_Collider_array *)plVar22 == (UnityEngine_Collider_array *)0x0)
                              goto label_04207174;
                              pIVar4 = (((UnityEngine_Collider_array *)plVar22)->obj).klass;
                              bVar2 = (TypeInfo_InGameCamera->_2).naturalAligment;
                              if (((pIVar4->_2).naturalAligment < bVar2) ||
                                 ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameCamera))
                              goto label_04207112;
                              Cameras_InGameCamera__TakeSnapshot
                                        ((Cameras_InGameCamera_o *)plVar22,UVar26,uVar12,(MethodInfo *)0x0);
                              goto label_04206810;
                            }
                          }
                          pSVar20 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                          (*(pCVar17->klass->vtable)._85_GetHit.methodPtr)
                                    (pCVar17,"Blade",100,"BladeThrow",pSVar20);
                        }
                      }
                    }
                  }
                  goto label_04206810;
                }
                pCVar17 = (Characters_BaseCharacter_o *)__this_08->m_Items[0xf];
                if (pCVar17 == (Characters_BaseCharacter_o *)0x0) goto label_042070ef;
                pSVar20 = *(System_String_o **)&(pCVar17->fields)._disableKinematicTimeLeft;
                pUVar16 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_08,(MethodInfo *)0x0);
                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_042070f4;
                UVar26 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                if ((UnityEngine_Collider_array *)plVar22 == (UnityEngine_Collider_array *)0x0)
                goto label_042070f9;
                CustomLogic_CustomLogicCollisionHandler__GetHit
                          ((CustomLogic_CustomLogicCollisionHandler_o *)plVar22,pCVar17,pSVar20,uVar12,
                           "BladeThrow",UVar26,(MethodInfo *)0x0);
              } while( true );
            }
            piVar1 = &(__this_06->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar6 = (__this_06->fields)._items;
            if (pSVar6 != (System_Object_array *)0x0) {
              uVar12 = (__this_06->fields)._size;
              if (uVar12 < (uint)pSVar6->max_length) {
                (__this_06->fields)._size = uVar12 + 1;
                pSVar6->m_Items[(int)uVar12] = (Il2CppObject *)item;
                il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar12,item);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_06,(Il2CppObject *)item,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              goto label_042067d7;
            }
          }
        }
      }
    }
  }
label_042070fe:
  il2cpp_runtime_helper_022b2c90();
label_04207103:
  il2cpp_runtime_helper_022b2ca0();
label_04207108:
  il2cpp_runtime_helper_022b2c90();
label_0420710d:
  il2cpp_runtime_helper_022b2c90();
label_04207112:
  il2cpp_runtime_helper_022b2fd0(plVar22);
label_0420711a:
  il2cpp_runtime_helper_022b2c90();
label_0420711f:
  il2cpp_runtime_helper_022b2fd0();
label_04207124:
  il2cpp_runtime_helper_022b2c90();
label_04207129:
  il2cpp_runtime_helper_022b2c90();
label_0420712e:
  il2cpp_runtime_helper_022b2c90();
label_04207133:
  il2cpp_runtime_helper_022b2c90();
label_04207138:
  il2cpp_runtime_helper_022b2c90();
label_0420713d:
  il2cpp_runtime_helper_022b2c90();
label_04207142:
  il2cpp_runtime_helper_022b2c90();
label_04207147:
  il2cpp_runtime_helper_022b2c90();
label_0420714c:
  il2cpp_runtime_helper_022b2fd0();
label_04207151:
  il2cpp_runtime_helper_022b2c90();
label_04207156:
  il2cpp_runtime_helper_022b2c90();
label_0420715b:
  il2cpp_runtime_helper_022b2c90();
label_04207160:
  il2cpp_runtime_helper_022b2c90();
label_04207165:
  il2cpp_runtime_helper_022b2c90();
label_0420716a:
  il2cpp_runtime_helper_022b2c90();
label_0420716f:
  il2cpp_runtime_helper_022b2c90();
label_04207174:
  il2cpp_runtime_helper_022b2c90();
label_04207179:
  il2cpp_runtime_helper_022b2c90();
label_0420717e:
  auVar27 = il2cpp_runtime_helper_022b2fd0(plVar22);
  if (auVar27._8_4_ == 1) {
    plVar22 = (long *)__cxa_begin_catch(auVar27._0_8_);
    lVar5 = *plVar22;
    __cxa_end_catch();
    __this_03.fields._version = (int32_t)in_stack_fffffffffffffef4;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8._0_8_;
    __this_03.fields._index = in_stack_fffffffffffffee8._8_4_;
    __this_03.fields._current._0_4_ = in_stack_fffffffffffffef8;
    __this_03.fields._current._4_4_ = in_stack_fffffffffffffefc;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_03,(MethodInfo_321A1C0 *)&_Stack_e8);
    if (lVar5 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar5);
  }
  __this_04.fields._version = (int32_t)in_stack_fffffffffffffef4;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffee8._0_8_;
  __this_04.fields._index = in_stack_fffffffffffffee8._8_4_;
  __this_04.fields._current._0_4_ = in_stack_fffffffffffffef8;
  __this_04.fields._current._4_4_ = in_stack_fffffffffffffefc;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)&_Stack_e8);
  _Unwind_Resume(auVar27._0_8_);
}


// Projectiles.BladeThrowProjectile$$OnCollisionEnter
// il2cpp: void Projectiles_BladeThrowProjectile__OnCollisionEnter (Projectiles_BladeThrowProjectile_o* __this, UnityEngine_Collision_o* collision, const MethodInfo* method);
// 0x4206150

void Projectiles_BladeThrowProjectile__OnCollisionEnter
               (Projectiles_BladeThrowProjectile_o *__this,UnityEngine_Collision_o *collision,
               MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  System_Object_array *pSVar7;
  Characters_BaseCharacter_o *pCVar8;
  Characters_BaseCharacter_c *pCVar9;
  System_Action_Hashtable__o *pSVar10;
  System_Delegate_array *__this_00;
  UI_InGameMenu_o *pUVar11;
  Il2CppClass *pIVar12;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  UnityEngine_Object_o *x;
  char cVar13;
  bool_conflict bVar14;
  UnityEngine_LayerMask_o mask;
  int32_t layerMask;
  uint uVar15;
  Photon_Pun_PhotonView_o *pPVar16;
  Projectiles_BladeThrowProjectile_o *pPVar17;
  Projectiles_BladeThrowProjectile_o *pPVar18;
  UnityEngine_Transform_o *pUVar19;
  Characters_BaseCharacter_o *pCVar20;
  UnityEngine_AudioSource_o *pUVar21;
  UnityEngine_Collider_o *firstCollider;
  UnityEngine_SphereCollider_o *__this_05;
  System_Int32_array *layers;
  System_Collections_Generic_List_object__o *__this_06;
  UnityEngine_GameObject_o *pUVar22;
  System_String_o *pSVar23;
  long *plVar24;
  MethodInfo *method_00;
  MethodInfo_24E7B40 *item;
  MethodInfo *method_01;
  Projectiles_BladeThrowProjectile_o *__this_07;
  System_String_o *unaff_R12;
  float fVar25;
  float fVar26;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined8 uVar27;
  UnityEngine_Vector3_o UVar28;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  undefined1 auVar29 [12];
  UnityEngine_Quaternion_o UVar30;
  undefined1 in_stack_ffffffffffffff00 [12];
  float in_stack_ffffffffffffff0c;
  float in_stack_ffffffffffffff10;
  float in_stack_ffffffffffffff14;
  _union_249395 _Stack_d0;
  undefined8 uStack_c8;
  UnityEngine_Object_o *pUStack_c0;
  undefined1 auStack_b0 [16];
  float fStack_a0;
  _union_249395 _Stack_90;
  undefined8 uStack_88;
  UnityEngine_Object_o *pUStack_80;
  Projectiles_BladeThrowProjectile_o *pPStack_78;
  System_String_o *pSStack_70;
  float fStack_3c;
  undefined8 uStack_38;
  
  if (g_data_057ad8e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_GetComponent_AudioSource);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&"BladeHit");
    g_data_057ad8e4 = '\x01';
  }
  item = (MethodInfo_24E7B40 *)0x0;
  __this_07 = __this;
  pPVar16 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar16 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((char)(pPVar16->fields)._IsMine_k__BackingField == '\0') || ((char)(__this->fields).Disabled != '\0')
       ) {
      return;
    }
    if (collision != (UnityEngine_Collision_o *)0x0) {
      item = (MethodInfo_24E7B40 *)0x0;
      __this_07 = (Projectiles_BladeThrowProjectile_o *)collision;
      pPVar17 = (Projectiles_BladeThrowProjectile_o *)
                UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
      if (pPVar17 != (Projectiles_BladeThrowProjectile_o *)0x0) {
        item = (MethodInfo_24E7B40 *)0x0;
        pPVar18 = (Projectiles_BladeThrowProjectile_o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)pPVar17,(MethodInfo *)0x0);
        __this_07 = pPVar17;
        if (pPVar18 != (Projectiles_BladeThrowProjectile_o *)0x0) {
          item = (MethodInfo_24E7B40 *)0x0;
          pUVar19 = UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pPVar18,(MethodInfo *)0x0);
          __this_07 = pPVar18;
          if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
            pCVar20 = (Characters_BaseCharacter_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar19,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar14 = UnityEngine_Object__op_Equality
                               ((UnityEngine_Object_o *)pCVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            if ((char)bVar14 == '\0') {
              unaff_R12 = (__this->fields)._team;
              if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar14 = GameManagers_TeamInfo__SameTeam_446ffa0(pCVar20,unaff_R12,(MethodInfo *)0x0);
              if (((char)bVar14 == '\0') && (pCVar20 != (Characters_BaseCharacter_o *)0x0)) {
                bVar4 = (TypeInfo_BaseTitan->_2).naturalAligment;
                if ((bVar4 <= (pCVar20->klass->_2).naturalAligment) &&
                   ((pCVar20->klass->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_BaseTitan)) {
                  if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar23 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
                  item = (MethodInfo_24E7B40 *)0x0;
                  __this_07 = __this;
                  pUVar19 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
                    UVar28 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
                    fStack_3c = UVar28.fields.z;
                    uStack_38 = UVar28.fields._0_8_;
                    UVar30 = UnityEngine_Quaternion__Internal_FromEulerRad
                                       ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0);
                    uVar27 = UVar30.fields._8_8_;
                    fVar25 = UVar30.fields.x;
                    fVar26 = UVar30.fields.y;
                    goto label_042062db;
                  }
                  goto label_04206456;
                }
              }
            }
            else {
              if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar23 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb0);
              item = (MethodInfo_24E7B40 *)0x0;
              __this_07 = __this;
              pUVar19 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_04206456;
              UVar28 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
              fStack_3c = UVar28.fields.z;
              uStack_38 = UVar28.fields._0_8_;
              UVar30 = UnityEngine_Quaternion__LookRotation_4debb20
                                 ((UnityEngine_Vector3_o)(__this->fields)._velocity.fields,(MethodInfo *)0x0);
              uVar27 = UVar30.fields._8_8_;
              fVar25 = UVar30.fields.x;
              fVar26 = UVar30.fields.y;
label_042062db:
              UVar30.fields.y = fVar26;
              UVar30.fields.x = fVar25;
              UVar28.fields.z = fStack_3c;
              UVar28.fields.x = (float)(undefined4)uStack_38;
              UVar28.fields.y = (float)uStack_38._4_4_;
              UVar30.fields.z = (float)(int)uVar27;
              UVar30.fields.w = (float)(int)((ulong)uVar27 >> 0x20);
              Effects_EffectSpawner__Spawn
                        (pSVar23,UVar28,UVar30,1.0,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
            }
            item = (MethodInfo_24E7B40 *)0x0;
            __this_07 = __this;
            pPVar17 = (Projectiles_BladeThrowProjectile_o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (((pPVar17 != (Projectiles_BladeThrowProjectile_o *)0x0) &&
                (item = "BladeHit",
                pPVar18 = (Projectiles_BladeThrowProjectile_o *)
                          UnityEngine_Transform__Find
                                    ((UnityEngine_Transform_o *)pPVar17,(System_String_o *)"BladeHit",
                                     (MethodInfo *)0x0), __this_07 = pPVar17,
                pPVar18 != (Projectiles_BladeThrowProjectile_o *)0x0)) &&
               (item = MethodInfo_AudioSource_GetComponent_AudioSource,
               pUVar21 = (UnityEngine_AudioSource_o *)
                         UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pPVar18,MethodInfo_AudioSource_GetComponent_AudioSource), __this_07 = pPVar18,
               pUVar21 != (UnityEngine_AudioSource_o *)0x0)) {
              UnityEngine_AudioSource__Play_4daa2c0(pUVar21,(MethodInfo *)0x0);
              firstCollider = UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
              Projectiles_BladeThrowProjectile__CheckHurtboxes(__this,firstCollider,method_00);
              (*(__this->klass->vtable)._17_DestroySelf.methodPtr)
                        (__this,(__this->klass->vtable)._17_DestroySelf.method);
              return;
            }
          }
        }
      }
    }
  }
label_04206456:
  il2cpp_runtime_helper_022b2c90();
  pPStack_78 = __this;
  pSStack_70 = unaff_R12;
  if (g_data_057ad8e5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_GetComponent_AudioSource);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SphereCollider_GetComponent_SphereCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"BladeThrow");
    il2cpp_runtime_helper_023445d0(&"Blade");
    il2cpp_runtime_helper_023445d0(&"RestrictAngle");
    il2cpp_runtime_helper_023445d0(&"BladeHitNape");
    g_data_057ad8e5 = '\x01';
  }
  _Stack_d0.genericMethod = (void *)0x0;
  uStack_c8 = 0;
  pUStack_c0 = (UnityEngine_Object_o *)0x0;
  __this_05 = (UnityEngine_SphereCollider_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_07,MethodInfo_SphereCollider_GetComponent_SphereCollider);
  if (__this_05 != (UnityEngine_SphereCollider_o *)0x0) {
    in_stack_ffffffffffffff10 = UnityEngine_SphereCollider__get_radius(__this_05,(MethodInfo *)0x0);
    pUVar19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_07,(MethodInfo *)0x0);
    if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
      UVar28 = UnityEngine_Transform__get_lossyScale(pUVar19,(MethodInfo *)0x0);
      auStack_b0._8_4_ = extraout_XMM0_Dc;
      auStack_b0._0_8_ = UVar28.fields._0_8_;
      auStack_b0._12_4_ = extraout_XMM0_Dd;
      pUVar19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_07,(MethodInfo *)0x0);
      if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
        UVar28 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
        in_stack_ffffffffffffff0c = UVar28.fields.z;
        layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
        if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this = (Projectiles_BladeThrowProjectile_o *)&TypeInfo_PhysicsLayer;
        if (layers != (System_Int32_array *)0x0) {
          iVar5 = (int)layers->max_length;
          if (iVar5 == 0) goto label_04207103;
          lVar6 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
          layers->m_Items[0] = *(int32_t *)(lVar6 + 0x18);
          if (iVar5 == 1) goto label_04207103;
          in_stack_ffffffffffffff10 = in_stack_ffffffffffffff10 * (float)auStack_b0._0_4_ * 1.3;
          layers->m_Items[1] = *(int32_t *)(lVar6 + 0xc);
          mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
          layerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          position.fields.z = in_stack_ffffffffffffff0c;
          position.fields.x = (float)(int)UVar28.fields._0_8_;
          position.fields.y = (float)(int)((ulong)UVar28.fields._0_8_ >> 0x20);
          __this = (Projectiles_BladeThrowProjectile_o *)
                   UnityEngine_Physics__OverlapSphere_4e7aff0
                             (position,in_stack_ffffffffffffff10,layerMask,(MethodInfo *)0x0);
          __this_06 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
          System_Collections_Generic_List_object____ctor_362ba10
                    (__this_06,(System_Collections_Generic_IEnumerable_T__o *)__this,MethodInfo_List_1_UnityEngine_Collider);
          if (__this_06 != (System_Collections_Generic_List_object__o *)0x0) {
            bVar14 = System_Collections_Generic_List_object___Contains
                               (__this_06,(Il2CppObject *)item,MethodInfo_Boolean_Contains);
            lVar6 = MethodInfo_Void_Add;
            if ((char)bVar14 != '\0') {
label_042067d7:
              System_Collections_Generic_List_object___GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_90,__this_06,MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator)
              ;
              pUStack_c0 = pUStack_80;
              _Stack_d0 = _Stack_90;
              uStack_c8 = uStack_88;
label_04206810:
              do {
                __this_01.fields._version = (int32_t)in_stack_ffffffffffffff0c;
                __this_01.fields._list =
                     (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff00._0_8_;
                __this_01.fields._index = in_stack_ffffffffffffff00._8_4_;
                __this_01.fields._current._0_4_ = in_stack_ffffffffffffff10;
                __this_01.fields._current._4_4_ = in_stack_ffffffffffffff14;
                bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   (__this_01,(MethodInfo_321A1D0 *)&_Stack_d0);
                x = pUStack_c0;
                if ((char)bVar14 == '\0') {
                  __this_02.fields._version = (int32_t)in_stack_ffffffffffffff0c;
                  __this_02.fields._list =
                       (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff00._0_8_;
                  __this_02.fields._index = in_stack_ffffffffffffff00._8_4_;
                  __this_02.fields._current._0_4_ = in_stack_ffffffffffffff10;
                  __this_02.fields._current._4_4_ = in_stack_ffffffffffffff14;
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            (__this_02,(MethodInfo_321A1C0 *)&_Stack_d0);
                  return;
                }
                if (pUStack_c0 == (UnityEngine_Object_o *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
label_042070db:
                  il2cpp_runtime_helper_022b2c90();
label_042070e0:
                  il2cpp_runtime_helper_022b2c90();
label_042070e5:
                  il2cpp_runtime_helper_022b2c90();
label_042070ea:
                  il2cpp_runtime_helper_022b2c90();
label_042070ef:
                  il2cpp_runtime_helper_022b2c90();
label_042070f4:
                  il2cpp_runtime_helper_022b2c90();
label_042070f9:
                  il2cpp_runtime_helper_022b2c90();
                  goto label_042070fe;
                }
                pUVar19 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pUStack_c0,(MethodInfo *)0x0);
                if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_042070db;
                pUVar19 = UnityEngine_Transform__get_root(pUVar19,(MethodInfo *)0x0);
                if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_042070e0;
                pUVar22 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0);
                if (pUVar22 == (UnityEngine_GameObject_o *)0x0) goto label_042070e5;
                pCVar20 = (Characters_BaseCharacter_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar22,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
                pUVar22 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
                if (pUVar22 == (UnityEngine_GameObject_o *)0x0) goto label_042070ea;
                method_01 = MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl;
                __this = (Projectiles_BladeThrowProjectile_o *)
                         UnityEngine_GameObject__GetComponent_object_
                                   (pUVar22,(MethodInfo_255A0F0 *)MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
                uVar15 = Projectiles_BladeThrowProjectile__CalculateDamage(__this_07,method_01);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar14 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar14 == '\0') {
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar14 = UnityEngine_Object__op_Equality
                                     ((UnityEngine_Object_o *)pCVar20,(UnityEngine_Object_o *)0x0,
                                      (MethodInfo *)0x0);
                  if ((char)bVar14 == '\0') {
                    __this = (Projectiles_BladeThrowProjectile_o *)(__this_07->fields)._owner;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    bVar14 = UnityEngine_Object__op_Equality
                                       ((UnityEngine_Object_o *)pCVar20,(UnityEngine_Object_o *)__this,
                                        (MethodInfo *)0x0);
                    if ((char)bVar14 == '\0') {
                      __this = (Projectiles_BladeThrowProjectile_o *)(__this_07->fields)._team;
                      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      bVar14 = GameManagers_TeamInfo__SameTeam_446ffa0
                                         (pCVar20,(System_String_o *)__this,(MethodInfo *)0x0);
                      if ((char)bVar14 == '\0') {
                        if (pCVar20 == (Characters_BaseCharacter_o *)0x0) goto label_04207108;
                        if (*(char *)&(pCVar20->fields).FeedVictimName == '\0') {
                          bVar4 = (TypeInfo_BaseTitan->_2).naturalAligment;
                          if ((bVar4 <= (pCVar20->klass->_2).naturalAligment) &&
                             ((pCVar20->klass->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_BaseTitan)) {
                            if ((char)(pCVar20->fields).CustomDamage != '\0') {
                              pUVar19 = UnityEngine_Component__get_transform
                                                  ((UnityEngine_Component_o *)__this_07,(MethodInfo *)0x0);
                              if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_04207129;
                              UVar28 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
                              in_stack_ffffffffffffff10 = UVar28.fields.x;
                              in_stack_ffffffffffffff14 = UVar28.fields.y;
                              uVar2 = (__this_07->fields)._velocity.fields.x;
                              uVar3 = (__this_07->fields)._velocity.fields.y;
                              auStack_b0._4_4_ = uVar3;
                              auStack_b0._0_4_ = uVar2;
                              auStack_b0._8_8_ = 0;
                              in_stack_ffffffffffffff0c = (__this_07->fields)._velocity.fields.z;
                              fStack_a0 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
                              pSVar10 = (pCVar20->fields).OnPlayerPropertiesChanged;
                              if (pSVar10 == (System_Action_Hashtable__o *)0x0) goto label_04207138;
                              __this = (Projectiles_BladeThrowProjectile_o *)(pSVar10->fields).data;
                              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              bVar14 = UnityEngine_Object__op_Equality
                                                 (x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
                              if ((char)bVar14 != '\0') {
                                if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                plVar24 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
                                if (plVar24 == (long *)0x0) goto label_04207151;
                                plVar24 = (long *)(**(code **)(*plVar24 + 0x1a8))
                                                            (plVar24,"Blade",
                                                             *(undefined8 *)(*plVar24 + 0x1b0));
                                if (plVar24 == (long *)0x0) goto label_04207165;
                                plVar24 = (long *)(**(code **)(*plVar24 + 0x1a8))
                                                            (plVar24,"RestrictAngle",
                                                             *(undefined8 *)(*plVar24 + 0x1b0));
                                if (plVar24 == (long *)0x0) goto label_04207179;
                                uVar27 = (**(code **)(*plVar24 + 0x388))
                                                   (plVar24,*(undefined8 *)(*plVar24 + 0x390));
                                cVar13 = (*(code *)pCVar20->klass[1].vtable._44_OnJoinRandomFailed.method)
                                                   (in_stack_ffffffffffffff10 -
                                                    ((float)auStack_b0._0_4_ * fStack_a0 +
                                                    (float)auStack_b0._0_4_ * fStack_a0),
                                                    UVar28.fields.z -
                                                    (in_stack_ffffffffffffff0c * fStack_a0 +
                                                    in_stack_ffffffffffffff0c * fStack_a0),uVar27,pCVar20);
                                if (cVar13 == '\0') goto label_04206810;
                                __this = (Projectiles_BladeThrowProjectile_o *)(__this_07->fields)._owner;
                                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                bVar14 = UnityEngine_Object__op_Inequality
                                                   ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0
                                                    ,(MethodInfo *)0x0);
                                if (((char)bVar14 != '\0') &&
                                   (pCVar8 = (__this_07->fields)._owner,
                                   pCVar8 != (Characters_BaseCharacter_o *)0x0)) {
                                  pCVar9 = pCVar8->klass;
                                  bVar4 = (TypeInfo_Human->_2).naturalAligment;
                                  if ((bVar4 <= (pCVar9->_2).naturalAligment) &&
                                     ((pCVar9->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_Human)) {
                                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                      il2cpp_runtime_helper_02337ed0();
                                    }
                                    pUVar11 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                                    if (pUVar11 == (UI_InGameMenu_o *)0x0) goto label_0420710d;
                                    bVar4 = (TypeInfo_InGameMenu->_2).naturalAligment;
                                    if (((pUVar11->klass->_2).naturalAligment < bVar4) ||
                                       ((pUVar11->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_InGameMenu))
                                    goto label_0420711f;
                                    UI_InGameMenu__ShowKillScore(pUVar11,uVar15,0,(MethodInfo *)0x0);
                                    pSVar10 = (pCVar20->fields).OnPlayerPropertiesChanged;
                                    if (pSVar10 == (System_Action_Hashtable__o *)0x0) goto label_0420712e;
                                    pUVar19 = (UnityEngine_Transform_o *)(pSVar10->fields).method_code;
                                    if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_04207142;
                                    __this = *(Projectiles_BladeThrowProjectile_o **)
                                              (*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                                    UVar28 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
                                    if ((UnityEngine_Collider_array *)__this ==
                                        (UnityEngine_Collider_array *)0x0) goto label_04207160;
                                    pIVar12 = (((UnityEngine_Collider_array *)__this)->obj).klass;
                                    bVar4 = (TypeInfo_InGameCamera->_2).naturalAligment;
                                    if (((pIVar12->_2).naturalAligment < bVar4) ||
                                       ((pIVar12->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_InGameCamera))
                                    goto label_0420717e;
                                    Cameras_InGameCamera__TakeSnapshot
                                              ((Cameras_InGameCamera_o *)__this,UVar28,uVar15,
                                               (MethodInfo *)0x0);
                                  }
                                }
                                pUVar19 = UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)__this_07,(MethodInfo *)0x0);
                                if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_0420711a;
                                pUVar19 = UnityEngine_Transform__Find(pUVar19,"BladeHitNape",(MethodInfo *)0x0);
                                if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_04207124;
                                pUVar21 = (UnityEngine_AudioSource_o *)
                                          UnityEngine_Component__GetComponent_object_
                                                    ((UnityEngine_Component_o *)pUVar19,MethodInfo_AudioSource_GetComponent_AudioSource);
                                if (pUVar21 == (UnityEngine_AudioSource_o *)0x0) goto label_04207133;
                                UnityEngine_AudioSource__Play_4daa2c0(pUVar21,(MethodInfo *)0x0);
                              }
                              pSVar10 = (pCVar20->fields).OnPlayerPropertiesChanged;
                              if (pSVar10 == (System_Action_Hashtable__o *)0x0) goto label_04207147;
                              __this_00 = pSVar10[1].fields.delegates;
                              if (__this_00 == (System_Delegate_array *)0x0) goto label_0420715b;
                              bVar14 = System_Collections_Generic_List_object___Contains
                                                 ((System_Collections_Generic_List_object__o *)__this_00,
                                                  (Il2CppObject *)x,MethodInfo_Boolean_Contains);
                              if ((char)bVar14 != '\0') {
                                if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                __this = *(Projectiles_BladeThrowProjectile_o **)
                                          (*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x38);
                                pUVar19 = UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)__this_07,(MethodInfo *)0x0);
                                if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_0420716f;
                                UVar28 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
                                position_00.fields.z = UVar28.fields.z;
                                in_stack_ffffffffffffff10 = UVar28.fields.x;
                                in_stack_ffffffffffffff14 = UVar28.fields.y;
                                UVar30 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                   ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),
                                                    (MethodInfo *)0x0);
                                position_00.fields.y = in_stack_ffffffffffffff14;
                                position_00.fields.x = in_stack_ffffffffffffff10;
                                Effects_EffectSpawner__Spawn
                                          ((System_String_o *)__this,position_00,UVar30,1.0,1,
                                           (System_Object_array *)0x0,(MethodInfo *)0x0);
                                __this = (Projectiles_BladeThrowProjectile_o *)(__this_07->fields)._owner;
                                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                bVar14 = UnityEngine_Object__op_Equality
                                                   ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0
                                                    ,(MethodInfo *)0x0);
                                if (((char)bVar14 == '\0') &&
                                   (__this = (Projectiles_BladeThrowProjectile_o *)(__this_07->fields)._owner,
                                   (UnityEngine_Collider_array *)__this != (UnityEngine_Collider_array *)0x0))
                                {
                                  pIVar12 = (((UnityEngine_Collider_array *)__this)->obj).klass;
                                  bVar4 = (TypeInfo_Human->_2).naturalAligment;
                                  if ((bVar4 <= (pIVar12->_2).naturalAligment) &&
                                     ((pIVar12->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_Human)) {
                                    pSVar23 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                                    (*(pCVar20->klass->vtable)._84_GetHit.methodPtr)
                                              (pCVar20,__this,(ulong)uVar15,"BladeThrow",pSVar23);
                                    goto label_04206810;
                                  }
                                }
                                pSVar23 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                                (*(pCVar20->klass->vtable)._85_GetHit.methodPtr)
                                          (pCVar20,"Blade",100,"BladeThrow",pSVar23);
                              }
                            }
                            goto label_04206810;
                          }
                          __this = (Projectiles_BladeThrowProjectile_o *)(__this_07->fields)._owner;
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          bVar14 = UnityEngine_Object__op_Inequality
                                             ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,
                                              (MethodInfo *)0x0);
                          if (((char)bVar14 != '\0') &&
                             (pCVar8 = (__this_07->fields)._owner, pCVar8 != (Characters_BaseCharacter_o *)0x0
                             )) {
                            pCVar9 = pCVar8->klass;
                            bVar4 = (TypeInfo_Human->_2).naturalAligment;
                            if ((bVar4 <= (pCVar9->_2).naturalAligment) &&
                               ((pCVar9->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_Human)) {
                              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              pUVar11 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                              if (pUVar11 == (UI_InGameMenu_o *)0x0) goto label_0420713d;
                              bVar4 = (TypeInfo_InGameMenu->_2).naturalAligment;
                              if (((pUVar11->klass->_2).naturalAligment < bVar4) ||
                                 ((pUVar11->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_InGameMenu))
                              goto label_0420714c;
                              UI_InGameMenu__ShowKillScore(pUVar11,uVar15,0,(MethodInfo *)0x0);
                              __this = (Projectiles_BladeThrowProjectile_o *)(__this_07->fields)._owner;
                              pSVar23 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                              (*(pCVar20->klass->vtable)._84_GetHit.methodPtr)
                                        (pCVar20,__this,(ulong)uVar15,"BladeThrow",pSVar23);
                              lVar6 = *(long *)&(pCVar20->fields).Dead;
                              if (lVar6 == 0) goto label_04207156;
                              pUVar19 = *(UnityEngine_Transform_o **)(lVar6 + 0x10);
                              if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_0420716a;
                              __this = *(Projectiles_BladeThrowProjectile_o **)
                                        (*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                              UVar28 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
                              if ((UnityEngine_Collider_array *)__this == (UnityEngine_Collider_array *)0x0)
                              goto label_04207174;
                              pIVar12 = (((UnityEngine_Collider_array *)__this)->obj).klass;
                              bVar4 = (TypeInfo_InGameCamera->_2).naturalAligment;
                              if (((pIVar12->_2).naturalAligment < bVar4) ||
                                 ((pIVar12->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_InGameCamera))
                              goto label_04207112;
                              Cameras_InGameCamera__TakeSnapshot
                                        ((Cameras_InGameCamera_o *)__this,UVar28,uVar15,(MethodInfo *)0x0);
                              goto label_04206810;
                            }
                          }
                          pSVar23 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                          (*(pCVar20->klass->vtable)._85_GetHit.methodPtr)
                                    (pCVar20,"Blade",100,"BladeThrow",pSVar23);
                        }
                      }
                    }
                  }
                  goto label_04206810;
                }
                pCVar20 = (__this_07->fields)._owner;
                if (pCVar20 == (Characters_BaseCharacter_o *)0x0) goto label_042070ef;
                pSVar23 = *(System_String_o **)&(pCVar20->fields)._disableKinematicTimeLeft;
                pUVar19 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_07,(MethodInfo *)0x0);
                if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_042070f4;
                UVar28 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
                if ((UnityEngine_Collider_array *)__this == (UnityEngine_Collider_array *)0x0)
                goto label_042070f9;
                CustomLogic_CustomLogicCollisionHandler__GetHit
                          ((CustomLogic_CustomLogicCollisionHandler_o *)__this,pCVar20,pSVar23,uVar15,
                           "BladeThrow",UVar28,(MethodInfo *)0x0);
              } while( true );
            }
            piVar1 = &(__this_06->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar7 = (__this_06->fields)._items;
            if (pSVar7 != (System_Object_array *)0x0) {
              uVar15 = (__this_06->fields)._size;
              if (uVar15 < (uint)pSVar7->max_length) {
                (__this_06->fields)._size = uVar15 + 1;
                pSVar7->m_Items[(int)uVar15] = (Il2CppObject *)item;
                il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar15,item);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_06,(Il2CppObject *)item,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
              goto label_042067d7;
            }
          }
        }
      }
    }
  }
label_042070fe:
  il2cpp_runtime_helper_022b2c90();
label_04207103:
  il2cpp_runtime_helper_022b2ca0();
label_04207108:
  il2cpp_runtime_helper_022b2c90();
label_0420710d:
  il2cpp_runtime_helper_022b2c90();
label_04207112:
  il2cpp_runtime_helper_022b2fd0(__this);
label_0420711a:
  il2cpp_runtime_helper_022b2c90();
label_0420711f:
  il2cpp_runtime_helper_022b2fd0();
label_04207124:
  il2cpp_runtime_helper_022b2c90();
label_04207129:
  il2cpp_runtime_helper_022b2c90();
label_0420712e:
  il2cpp_runtime_helper_022b2c90();
label_04207133:
  il2cpp_runtime_helper_022b2c90();
label_04207138:
  il2cpp_runtime_helper_022b2c90();
label_0420713d:
  il2cpp_runtime_helper_022b2c90();
label_04207142:
  il2cpp_runtime_helper_022b2c90();
label_04207147:
  il2cpp_runtime_helper_022b2c90();
label_0420714c:
  il2cpp_runtime_helper_022b2fd0();
label_04207151:
  il2cpp_runtime_helper_022b2c90();
label_04207156:
  il2cpp_runtime_helper_022b2c90();
label_0420715b:
  il2cpp_runtime_helper_022b2c90();
label_04207160:
  il2cpp_runtime_helper_022b2c90();
label_04207165:
  il2cpp_runtime_helper_022b2c90();
label_0420716a:
  il2cpp_runtime_helper_022b2c90();
label_0420716f:
  il2cpp_runtime_helper_022b2c90();
label_04207174:
  il2cpp_runtime_helper_022b2c90();
label_04207179:
  il2cpp_runtime_helper_022b2c90();
label_0420717e:
  auVar29 = il2cpp_runtime_helper_022b2fd0(__this);
  if (auVar29._8_4_ == 1) {
    plVar24 = (long *)__cxa_begin_catch(auVar29._0_8_);
    lVar6 = *plVar24;
    __cxa_end_catch();
    __this_03.fields._version = (int32_t)in_stack_ffffffffffffff0c;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff00._0_8_;
    __this_03.fields._index = in_stack_ffffffffffffff00._8_4_;
    __this_03.fields._current._0_4_ = in_stack_ffffffffffffff10;
    __this_03.fields._current._4_4_ = in_stack_ffffffffffffff14;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_03,(MethodInfo_321A1C0 *)&_Stack_d0);
    if (lVar6 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar6);
  }
  __this_04.fields._version = (int32_t)in_stack_ffffffffffffff0c;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff00._0_8_;
  __this_04.fields._index = in_stack_ffffffffffffff00._8_4_;
  __this_04.fields._current._0_4_ = in_stack_ffffffffffffff10;
  __this_04.fields._current._4_4_ = in_stack_ffffffffffffff14;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)&_Stack_d0);
  _Unwind_Resume(auVar29._0_8_);
}


// Projectiles.BladeThrowProjectile$$CheckHurtboxes
// il2cpp: void Projectiles_BladeThrowProjectile__CheckHurtboxes (Projectiles_BladeThrowProjectile_o* __this, UnityEngine_Collider_o* firstCollider, const MethodInfo* method);
// 0x4206460

void Projectiles_BladeThrowProjectile__CheckHurtboxes
               (Projectiles_BladeThrowProjectile_o *__this,UnityEngine_Collider_o *firstCollider,
               MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  System_Object_array *pSVar7;
  Characters_BaseCharacter_o *pCVar8;
  Characters_BaseCharacter_c *pCVar9;
  System_Action_Hashtable__o *pSVar10;
  System_Delegate_array *__this_00;
  UI_InGameMenu_o *pUVar11;
  Il2CppClass *pIVar12;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  UnityEngine_Object_o *x;
  char cVar13;
  UnityEngine_LayerMask_o mask;
  int32_t layerMask;
  bool_conflict bVar14;
  uint uVar15;
  UnityEngine_SphereCollider_o *__this_05;
  UnityEngine_Transform_o *pUVar16;
  System_Int32_array *layers;
  System_Collections_Generic_List_object__o *__this_06;
  UnityEngine_GameObject_o *pUVar17;
  Characters_BaseCharacter_o *pCVar18;
  System_String_o *pSVar19;
  UnityEngine_AudioSource_o *__this_07;
  long *plVar20;
  long *unaff_RBX;
  MethodInfo *method_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined8 uVar21;
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Vector3_o position;
  undefined1 auVar23 [12];
  UnityEngine_Quaternion_o rotation;
  undefined1 in_stack_ffffffffffffff48 [12];
  float in_stack_ffffffffffffff54;
  float in_stack_ffffffffffffff58;
  float in_stack_ffffffffffffff5c;
  _union_249395 local_88;
  undefined8 uStack_80;
  UnityEngine_Object_o *local_78;
  undefined1 local_68 [16];
  float local_58;
  _union_249395 local_48;
  undefined8 uStack_40;
  UnityEngine_Object_o *local_38;
  
  if (g_data_057ad8e5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_GetComponent_AudioSource);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SphereCollider_GetComponent_SphereCollider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"BladeThrow");
    il2cpp_runtime_helper_023445d0(&"Blade");
    il2cpp_runtime_helper_023445d0(&"RestrictAngle");
    il2cpp_runtime_helper_023445d0(&"BladeHitNape");
    g_data_057ad8e5 = '\x01';
  }
  local_88.genericMethod = (void *)0x0;
  uStack_80 = 0;
  local_78 = (UnityEngine_Object_o *)0x0;
  __this_05 = (UnityEngine_SphereCollider_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_SphereCollider_GetComponent_SphereCollider);
  if (__this_05 != (UnityEngine_SphereCollider_o *)0x0) {
    in_stack_ffffffffffffff58 = UnityEngine_SphereCollider__get_radius(__this_05,(MethodInfo *)0x0);
    pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
      UVar22 = UnityEngine_Transform__get_lossyScale(pUVar16,(MethodInfo *)0x0);
      local_68._8_4_ = extraout_XMM0_Dc;
      local_68._0_8_ = UVar22.fields._0_8_;
      local_68._12_4_ = extraout_XMM0_Dd;
      pUVar16 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
        UVar22 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
        in_stack_ffffffffffffff54 = UVar22.fields.z;
        layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
        unaff_RBX = &TypeInfo_PhysicsLayer;
        if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (layers != (System_Int32_array *)0x0) {
          iVar5 = (int)layers->max_length;
          if (iVar5 == 0) goto label_04207103;
          lVar6 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
          layers->m_Items[0] = *(int32_t *)(lVar6 + 0x18);
          if (iVar5 == 1) goto label_04207103;
          in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 * (float)local_68._0_4_ * 1.3;
          layers->m_Items[1] = *(int32_t *)(lVar6 + 0xc);
          mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
          layerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          position.fields.z = in_stack_ffffffffffffff54;
          position.fields.x = (float)(int)UVar22.fields._0_8_;
          position.fields.y = (float)(int)((ulong)UVar22.fields._0_8_ >> 0x20);
          unaff_RBX = (long *)UnityEngine_Physics__OverlapSphere_4e7aff0
                                        (position,in_stack_ffffffffffffff58,layerMask,(MethodInfo *)0x0);
          __this_06 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
          System_Collections_Generic_List_object____ctor_362ba10
                    (__this_06,(System_Collections_Generic_IEnumerable_T__o *)unaff_RBX,MethodInfo_List_1_UnityEngine_Collider);
          if (__this_06 != (System_Collections_Generic_List_object__o *)0x0) {
            bVar14 = System_Collections_Generic_List_object___Contains
                               (__this_06,(Il2CppObject *)firstCollider,MethodInfo_Boolean_Contains);
            lVar6 = MethodInfo_Void_Add;
            if ((char)bVar14 != '\0') {
label_042067d7:
              System_Collections_Generic_List_object___GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)&local_48,__this_06,MethodInfo_List_1_T_Enumerator_UnityEngine_Collider_GetEnumerator);
              local_78 = local_38;
              local_88 = local_48;
              uStack_80 = uStack_40;
label_04206810:
              do {
                __this_01.fields._version = (int32_t)in_stack_ffffffffffffff54;
                __this_01.fields._list =
                     (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48._0_8_;
                __this_01.fields._index = in_stack_ffffffffffffff48._8_4_;
                __this_01.fields._current._0_4_ = in_stack_ffffffffffffff58;
                __this_01.fields._current._4_4_ = in_stack_ffffffffffffff5c;
                bVar14 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   (__this_01,(MethodInfo_321A1D0 *)&local_88);
                x = local_78;
                if ((char)bVar14 == '\0') {
                  __this_02.fields._version = (int32_t)in_stack_ffffffffffffff54;
                  __this_02.fields._list =
                       (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48._0_8_;
                  __this_02.fields._index = in_stack_ffffffffffffff48._8_4_;
                  __this_02.fields._current._0_4_ = in_stack_ffffffffffffff58;
                  __this_02.fields._current._4_4_ = in_stack_ffffffffffffff5c;
                  System_Collections_Generic_List_Enumerator_object___Dispose
                            (__this_02,(MethodInfo_321A1C0 *)&local_88);
                  return;
                }
                if (local_78 == (UnityEngine_Object_o *)0x0) {
                  il2cpp_runtime_helper_022b2c90();
label_042070db:
                  il2cpp_runtime_helper_022b2c90();
label_042070e0:
                  il2cpp_runtime_helper_022b2c90();
label_042070e5:
                  il2cpp_runtime_helper_022b2c90();
label_042070ea:
                  il2cpp_runtime_helper_022b2c90();
label_042070ef:
                  il2cpp_runtime_helper_022b2c90();
label_042070f4:
                  il2cpp_runtime_helper_022b2c90();
label_042070f9:
                  il2cpp_runtime_helper_022b2c90();
                  goto label_042070fe;
                }
                pUVar16 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)local_78,(MethodInfo *)0x0);
                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_042070db;
                pUVar16 = UnityEngine_Transform__get_root(pUVar16,(MethodInfo *)0x0);
                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_042070e0;
                pUVar17 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
                if (pUVar17 == (UnityEngine_GameObject_o *)0x0) goto label_042070e5;
                pCVar18 = (Characters_BaseCharacter_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar17,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
                pUVar17 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
                if (pUVar17 == (UnityEngine_GameObject_o *)0x0) goto label_042070ea;
                method_00 = MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl;
                unaff_RBX = (long *)UnityEngine_GameObject__GetComponent_object_
                                              (pUVar17,(MethodInfo_255A0F0 *)MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
                uVar15 = Projectiles_BladeThrowProjectile__CalculateDamage(__this,method_00);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar14 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar14 == '\0') {
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar14 = UnityEngine_Object__op_Equality
                                     ((UnityEngine_Object_o *)pCVar18,(UnityEngine_Object_o *)0x0,
                                      (MethodInfo *)0x0);
                  if ((char)bVar14 == '\0') {
                    unaff_RBX = (long *)(__this->fields)._owner;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    bVar14 = UnityEngine_Object__op_Equality
                                       ((UnityEngine_Object_o *)pCVar18,(UnityEngine_Object_o *)unaff_RBX,
                                        (MethodInfo *)0x0);
                    if ((char)bVar14 == '\0') {
                      unaff_RBX = (long *)(__this->fields)._team;
                      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      bVar14 = GameManagers_TeamInfo__SameTeam_446ffa0
                                         (pCVar18,(System_String_o *)unaff_RBX,(MethodInfo *)0x0);
                      if ((char)bVar14 == '\0') {
                        if (pCVar18 == (Characters_BaseCharacter_o *)0x0) goto label_04207108;
                        if (*(char *)&(pCVar18->fields).FeedVictimName == '\0') {
                          bVar4 = (TypeInfo_BaseTitan->_2).naturalAligment;
                          if ((bVar4 <= (pCVar18->klass->_2).naturalAligment) &&
                             ((pCVar18->klass->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_BaseTitan)) {
                            if ((char)(pCVar18->fields).CustomDamage != '\0') {
                              pUVar16 = UnityEngine_Component__get_transform
                                                  ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                              if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_04207129;
                              UVar22 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                              in_stack_ffffffffffffff58 = UVar22.fields.x;
                              in_stack_ffffffffffffff5c = UVar22.fields.y;
                              uVar2 = (__this->fields)._velocity.fields.x;
                              uVar3 = (__this->fields)._velocity.fields.y;
                              local_68._4_4_ = uVar3;
                              local_68._0_4_ = uVar2;
                              local_68._8_8_ = 0;
                              in_stack_ffffffffffffff54 = (__this->fields)._velocity.fields.z;
                              local_58 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
                              pSVar10 = (pCVar18->fields).OnPlayerPropertiesChanged;
                              if (pSVar10 == (System_Action_Hashtable__o *)0x0) goto label_04207138;
                              unaff_RBX = (long *)(pSVar10->fields).data;
                              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              bVar14 = UnityEngine_Object__op_Equality
                                                 (x,(UnityEngine_Object_o *)unaff_RBX,(MethodInfo *)0x0);
                              if ((char)bVar14 != '\0') {
                                if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                plVar20 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
                                if (plVar20 == (long *)0x0) goto label_04207151;
                                plVar20 = (long *)(**(code **)(*plVar20 + 0x1a8))
                                                            (plVar20,"Blade",
                                                             *(undefined8 *)(*plVar20 + 0x1b0));
                                if (plVar20 == (long *)0x0) goto label_04207165;
                                plVar20 = (long *)(**(code **)(*plVar20 + 0x1a8))
                                                            (plVar20,"RestrictAngle",
                                                             *(undefined8 *)(*plVar20 + 0x1b0));
                                if (plVar20 == (long *)0x0) goto label_04207179;
                                uVar21 = (**(code **)(*plVar20 + 0x388))
                                                   (plVar20,*(undefined8 *)(*plVar20 + 0x390));
                                cVar13 = (*(code *)pCVar18->klass[1].vtable._44_OnJoinRandomFailed.method)
                                                   (in_stack_ffffffffffffff58 -
                                                    ((float)local_68._0_4_ * local_58 +
                                                    (float)local_68._0_4_ * local_58),
                                                    UVar22.fields.z -
                                                    (in_stack_ffffffffffffff54 * local_58 +
                                                    in_stack_ffffffffffffff54 * local_58),uVar21,pCVar18);
                                if (cVar13 == '\0') goto label_04206810;
                                unaff_RBX = (long *)(__this->fields)._owner;
                                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                bVar14 = UnityEngine_Object__op_Inequality
                                                   ((UnityEngine_Object_o *)unaff_RBX,
                                                    (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                if (((char)bVar14 != '\0') &&
                                   (pCVar8 = (__this->fields)._owner,
                                   pCVar8 != (Characters_BaseCharacter_o *)0x0)) {
                                  pCVar9 = pCVar8->klass;
                                  bVar4 = (TypeInfo_Human->_2).naturalAligment;
                                  if ((bVar4 <= (pCVar9->_2).naturalAligment) &&
                                     ((pCVar9->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_Human)) {
                                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                      il2cpp_runtime_helper_02337ed0();
                                    }
                                    pUVar11 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                                    if (pUVar11 == (UI_InGameMenu_o *)0x0) goto label_0420710d;
                                    bVar4 = (TypeInfo_InGameMenu->_2).naturalAligment;
                                    if (((pUVar11->klass->_2).naturalAligment < bVar4) ||
                                       ((pUVar11->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_InGameMenu))
                                    goto label_0420711f;
                                    UI_InGameMenu__ShowKillScore(pUVar11,uVar15,0,(MethodInfo *)0x0);
                                    pSVar10 = (pCVar18->fields).OnPlayerPropertiesChanged;
                                    if (pSVar10 == (System_Action_Hashtable__o *)0x0) goto label_0420712e;
                                    pUVar16 = (UnityEngine_Transform_o *)(pSVar10->fields).method_code;
                                    if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_04207142;
                                    unaff_RBX = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                                    UVar22 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                                    if ((UnityEngine_Collider_array *)unaff_RBX ==
                                        (UnityEngine_Collider_array *)0x0) goto label_04207160;
                                    pIVar12 = (((UnityEngine_Collider_array *)unaff_RBX)->obj).klass;
                                    bVar4 = (TypeInfo_InGameCamera->_2).naturalAligment;
                                    if (((pIVar12->_2).naturalAligment < bVar4) ||
                                       ((pIVar12->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_InGameCamera))
                                    goto label_0420717e;
                                    Cameras_InGameCamera__TakeSnapshot
                                              ((Cameras_InGameCamera_o *)unaff_RBX,UVar22,uVar15,
                                               (MethodInfo *)0x0);
                                  }
                                }
                                pUVar16 = UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_0420711a;
                                pUVar16 = UnityEngine_Transform__Find(pUVar16,"BladeHitNape",(MethodInfo *)0x0);
                                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_04207124;
                                __this_07 = (UnityEngine_AudioSource_o *)
                                            UnityEngine_Component__GetComponent_object_
                                                      ((UnityEngine_Component_o *)pUVar16,MethodInfo_AudioSource_GetComponent_AudioSource);
                                if (__this_07 == (UnityEngine_AudioSource_o *)0x0) goto label_04207133;
                                UnityEngine_AudioSource__Play_4daa2c0(__this_07,(MethodInfo *)0x0);
                              }
                              pSVar10 = (pCVar18->fields).OnPlayerPropertiesChanged;
                              if (pSVar10 == (System_Action_Hashtable__o *)0x0) goto label_04207147;
                              __this_00 = pSVar10[1].fields.delegates;
                              if (__this_00 == (System_Delegate_array *)0x0) goto label_0420715b;
                              bVar14 = System_Collections_Generic_List_object___Contains
                                                 ((System_Collections_Generic_List_object__o *)__this_00,
                                                  (Il2CppObject *)x,MethodInfo_Boolean_Contains);
                              if ((char)bVar14 != '\0') {
                                if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                unaff_RBX = *(long **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x38);
                                pUVar16 = UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_0420716f;
                                UVar22 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                                in_stack_ffffffffffffff58 = UVar22.fields.x;
                                in_stack_ffffffffffffff5c = UVar22.fields.y;
                                rotation = UnityEngine_Quaternion__Internal_FromEulerRad
                                                     ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),
                                                      (MethodInfo *)0x0);
                                UVar22.fields.y = in_stack_ffffffffffffff5c;
                                UVar22.fields.x = in_stack_ffffffffffffff58;
                                Effects_EffectSpawner__Spawn
                                          ((System_String_o *)unaff_RBX,UVar22,rotation,1.0,1,
                                           (System_Object_array *)0x0,(MethodInfo *)0x0);
                                unaff_RBX = (long *)(__this->fields)._owner;
                                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                bVar14 = UnityEngine_Object__op_Equality
                                                   ((UnityEngine_Object_o *)unaff_RBX,
                                                    (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                if (((char)bVar14 == '\0') &&
                                   (unaff_RBX = (long *)(__this->fields)._owner,
                                   (UnityEngine_Collider_array *)unaff_RBX !=
                                   (UnityEngine_Collider_array *)0x0)) {
                                  pIVar12 = (((UnityEngine_Collider_array *)unaff_RBX)->obj).klass;
                                  bVar4 = (TypeInfo_Human->_2).naturalAligment;
                                  if ((bVar4 <= (pIVar12->_2).naturalAligment) &&
                                     ((pIVar12->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_Human)) {
                                    pSVar19 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                                    (*(pCVar18->klass->vtable)._84_GetHit.methodPtr)
                                              (pCVar18,unaff_RBX,(ulong)uVar15,"BladeThrow",pSVar19);
                                    goto label_04206810;
                                  }
                                }
                                pSVar19 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                                (*(pCVar18->klass->vtable)._85_GetHit.methodPtr)
                                          (pCVar18,"Blade",100,"BladeThrow",pSVar19);
                              }
                            }
                            goto label_04206810;
                          }
                          unaff_RBX = (long *)(__this->fields)._owner;
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          bVar14 = UnityEngine_Object__op_Inequality
                                             ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,
                                              (MethodInfo *)0x0);
                          if (((char)bVar14 != '\0') &&
                             (pCVar8 = (__this->fields)._owner, pCVar8 != (Characters_BaseCharacter_o *)0x0))
                          {
                            pCVar9 = pCVar8->klass;
                            bVar4 = (TypeInfo_Human->_2).naturalAligment;
                            if ((bVar4 <= (pCVar9->_2).naturalAligment) &&
                               ((pCVar9->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_Human)) {
                              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              pUVar11 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                              if (pUVar11 == (UI_InGameMenu_o *)0x0) goto label_0420713d;
                              bVar4 = (TypeInfo_InGameMenu->_2).naturalAligment;
                              if (((pUVar11->klass->_2).naturalAligment < bVar4) ||
                                 ((pUVar11->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_InGameMenu))
                              goto label_0420714c;
                              UI_InGameMenu__ShowKillScore(pUVar11,uVar15,0,(MethodInfo *)0x0);
                              unaff_RBX = (long *)(__this->fields)._owner;
                              pSVar19 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                              (*(pCVar18->klass->vtable)._84_GetHit.methodPtr)
                                        (pCVar18,unaff_RBX,(ulong)uVar15,"BladeThrow",pSVar19);
                              lVar6 = *(long *)&(pCVar18->fields).Dead;
                              if (lVar6 == 0) goto label_04207156;
                              pUVar16 = *(UnityEngine_Transform_o **)(lVar6 + 0x10);
                              if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_0420716a;
                              unaff_RBX = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                              UVar22 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                              if ((UnityEngine_Collider_array *)unaff_RBX == (UnityEngine_Collider_array *)0x0
                                 ) goto label_04207174;
                              pIVar12 = (((UnityEngine_Collider_array *)unaff_RBX)->obj).klass;
                              bVar4 = (TypeInfo_InGameCamera->_2).naturalAligment;
                              if (((pIVar12->_2).naturalAligment < bVar4) ||
                                 ((pIVar12->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_InGameCamera))
                              goto label_04207112;
                              Cameras_InGameCamera__TakeSnapshot
                                        ((Cameras_InGameCamera_o *)unaff_RBX,UVar22,uVar15,(MethodInfo *)0x0);
                              goto label_04206810;
                            }
                          }
                          pSVar19 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                          (*(pCVar18->klass->vtable)._85_GetHit.methodPtr)
                                    (pCVar18,"Blade",100,"BladeThrow",pSVar19);
                        }
                      }
                    }
                  }
                  goto label_04206810;
                }
                pCVar18 = (__this->fields)._owner;
                if (pCVar18 == (Characters_BaseCharacter_o *)0x0) goto label_042070ef;
                pSVar19 = *(System_String_o **)&(pCVar18->fields)._disableKinematicTimeLeft;
                pUVar16 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_042070f4;
                UVar22 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                if ((UnityEngine_Collider_array *)unaff_RBX == (UnityEngine_Collider_array *)0x0)
                goto label_042070f9;
                CustomLogic_CustomLogicCollisionHandler__GetHit
                          ((CustomLogic_CustomLogicCollisionHandler_o *)unaff_RBX,pCVar18,pSVar19,uVar15,
                           "BladeThrow",UVar22,(MethodInfo *)0x0);
              } while( true );
            }
            piVar1 = &(__this_06->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar7 = (__this_06->fields)._items;
            if (pSVar7 != (System_Object_array *)0x0) {
              uVar15 = (__this_06->fields)._size;
              if (uVar15 < (uint)pSVar7->max_length) {
                (__this_06->fields)._size = uVar15 + 1;
                pSVar7->m_Items[(int)uVar15] = (Il2CppObject *)firstCollider;
                il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar15,firstCollider);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_06,(Il2CppObject *)firstCollider,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
              goto label_042067d7;
            }
          }
        }
      }
    }
  }
label_042070fe:
  il2cpp_runtime_helper_022b2c90();
label_04207103:
  il2cpp_runtime_helper_022b2ca0();
label_04207108:
  il2cpp_runtime_helper_022b2c90();
label_0420710d:
  il2cpp_runtime_helper_022b2c90();
label_04207112:
  il2cpp_runtime_helper_022b2fd0(unaff_RBX);
label_0420711a:
  il2cpp_runtime_helper_022b2c90();
label_0420711f:
  il2cpp_runtime_helper_022b2fd0();
label_04207124:
  il2cpp_runtime_helper_022b2c90();
label_04207129:
  il2cpp_runtime_helper_022b2c90();
label_0420712e:
  il2cpp_runtime_helper_022b2c90();
label_04207133:
  il2cpp_runtime_helper_022b2c90();
label_04207138:
  il2cpp_runtime_helper_022b2c90();
label_0420713d:
  il2cpp_runtime_helper_022b2c90();
label_04207142:
  il2cpp_runtime_helper_022b2c90();
label_04207147:
  il2cpp_runtime_helper_022b2c90();
label_0420714c:
  il2cpp_runtime_helper_022b2fd0();
label_04207151:
  il2cpp_runtime_helper_022b2c90();
label_04207156:
  il2cpp_runtime_helper_022b2c90();
label_0420715b:
  il2cpp_runtime_helper_022b2c90();
label_04207160:
  il2cpp_runtime_helper_022b2c90();
label_04207165:
  il2cpp_runtime_helper_022b2c90();
label_0420716a:
  il2cpp_runtime_helper_022b2c90();
label_0420716f:
  il2cpp_runtime_helper_022b2c90();
label_04207174:
  il2cpp_runtime_helper_022b2c90();
label_04207179:
  il2cpp_runtime_helper_022b2c90();
label_0420717e:
  auVar23 = il2cpp_runtime_helper_022b2fd0(unaff_RBX);
  if (auVar23._8_4_ == 1) {
    plVar20 = (long *)__cxa_begin_catch(auVar23._0_8_);
    lVar6 = *plVar20;
    __cxa_end_catch();
    __this_03.fields._version = (int32_t)in_stack_ffffffffffffff54;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48._0_8_;
    __this_03.fields._index = in_stack_ffffffffffffff48._8_4_;
    __this_03.fields._current._0_4_ = in_stack_ffffffffffffff58;
    __this_03.fields._current._4_4_ = in_stack_ffffffffffffff5c;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_03,(MethodInfo_321A1C0 *)&local_88);
    if (lVar6 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar6);
  }
  __this_04.fields._version = (int32_t)in_stack_ffffffffffffff54;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48._0_8_;
  __this_04.fields._index = in_stack_ffffffffffffff48._8_4_;
  __this_04.fields._current._0_4_ = in_stack_ffffffffffffff58;
  __this_04.fields._current._4_4_ = in_stack_ffffffffffffff5c;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)&local_88);
  _Unwind_Resume(auVar23._0_8_);
}


// Projectiles.BladeThrowProjectile$$CalculateDamage
// il2cpp: int32_t Projectiles_BladeThrowProjectile__CalculateDamage (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x4207720

int32_t Projectiles_BladeThrowProjectile__CalculateDamage
                  (Projectiles_BladeThrowProjectile_o *__this,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  Characters_BaseCharacter_o *pCVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  int32_t extraout_EAX;
  int iVar4;
  bool_conflict bVar5;
  int32_t extraout_EAX_00;
  System_Collections_Generic_List_object__o *pSVar6;
  Characters_BaseMovementSync_o *pCVar7;
  long *plVar8;
  Photon_Pun_PhotonView_o *extraout_RAX;
  Photon_Pun_PhotonView_o *pPVar9;
  UnityEngine_Rigidbody_o *__this_02;
  int iVar10;
  Characters_BaseMovementSync_o *__this_03;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o axis;
  
  if (g_data_057ad8e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Blade");
    il2cpp_runtime_helper_023445d0(&"DamageMultiplier");
    g_data_057ad8e6 = '\x01';
  }
  if (g_data_057a6841 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a6841 = '\x01';
  }
  fVar11 = (__this->fields).InitialPlayerVelocity.fields.x;
  fVar12 = (__this->fields).InitialPlayerVelocity.fields.y;
  fVar1 = (__this->fields).InitialPlayerVelocity.fields.z;
  if (TypeInfo_Math[1].fields._correctVelocity.fields.y == 0.0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar11 = fVar1 * fVar1 + fVar12 * fVar12 + fVar11 * fVar11;
  if (fVar11 < 0.0) {
    fVar11 = sqrtf(fVar11);
  }
  else {
    fVar11 = SQRT(fVar11);
  }
  if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_03 = (Characters_BaseMovementSync_o *)**(long **)(TypeInfo_CharacterData + 0xb8);
  if (((__this_03 != (Characters_BaseMovementSync_o *)0x0) &&
      (pCVar7 = (Characters_BaseMovementSync_o *)
                (*(__this_03->klass->vtable)._7_ReceiveCustomStream.methodPtr)
                          (__this_03,"Blade",(__this_03->klass->vtable)._7_ReceiveCustomStream.method),
      pCVar7 != (Characters_BaseMovementSync_o *)0x0)) &&
     (plVar8 = (long *)(*(pCVar7->klass->vtable)._7_ReceiveCustomStream.methodPtr)
                                 (pCVar7,"DamageMultiplier",(pCVar7->klass->vtable)._7_ReceiveCustomStream.method),
     __this_03 = pCVar7, plVar8 != (long *)0x0)) {
    fVar12 = (float)(**(code **)(*plVar8 + 0x388))(plVar8);
    iVar4 = (int)(fVar11 * 10.0 * fVar12);
    iVar10 = 10;
    if (9 < iVar4) {
      iVar10 = iVar4;
    }
    pCVar3 = (__this->fields)._owner;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (((char)bVar5 != '\0') &&
       (pCVar3 = (__this->fields)._owner, pCVar3 != (Characters_BaseCharacter_o *)0x0)) {
      bVar2 = (TypeInfo_Human->_2).naturalAligment;
      if ((bVar2 <= (pCVar3->klass->_2).naturalAligment) &&
         (((pCVar3->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Human &&
          (*(char *)((long)&(pCVar3->fields).FeedVictimName + 1) != '\0')))) {
        iVar10 = *(int *)((long)&(pCVar3->fields).FeedVictimName + 4);
      }
    }
    return iVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    g_data_057ad8e7 = '\x01';
  }
  pCVar7 = __this_03;
  Characters_BaseMovementSync__Update(__this_03,(MethodInfo *)0x0);
  pPVar9 = (__this_03->fields)._photonView;
  if (pPVar9 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((char)(pPVar9->fields)._IsMine_k__BackingField != '\0') {
      fVar11 = *(float *)&__this_03[1].monitor;
      fVar12 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar11 = fVar11 - fVar12;
      *(float *)&__this_03[1].monitor = fVar11;
      pPVar9 = extraout_RAX;
      if (fVar11 <= 0.0) {
        pPVar9 = (Photon_Pun_PhotonView_o *)
                 (*__this_03->klass[1]._1.generic_class)(__this_03,__this_03->klass[1]._1.typeMetadataHandle);
      }
    }
    if ((char)(__this_03->fields).Disabled != '\0') {
      return (int32_t)pPVar9;
    }
    pCVar7 = __this_03;
    __this_02 = (UnityEngine_Rigidbody_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_03,MethodInfo_Rigidbody_GetComponent_Rigidbody)
    ;
    if (__this_02 != (UnityEngine_Rigidbody_o *)0x0) {
      UVar13 = UnityEngine_Rigidbody__get_velocity(__this_02,(MethodInfo *)0x0);
      if (g_data_057a6841 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
        fVar11 = TypeInfo_Math[1].fields._correctVelocity.fields.y;
        pCVar7 = TypeInfo_Math;
      }
      else {
        fVar11 = TypeInfo_Math[1].fields._correctVelocity.fields.y;
        pCVar7 = TypeInfo_Math;
      }
      TypeInfo_Math = pCVar7;
      if (fVar11 == 0.0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar11 = UVar13.fields.z * UVar13.fields.z +
               UVar13.fields.y * UVar13.fields.y + UVar13.fields.x * UVar13.fields.x;
      if (fVar11 < 0.0) {
        fVar11 = sqrtf(fVar11);
        __this_00 = *(UnityEngine_Transform_o **)&__this_03[1].fields._correctVelocity.fields;
      }
      else {
        fVar11 = SQRT(fVar11);
        __this_00 = *(UnityEngine_Transform_o **)&__this_03[1].fields._correctVelocity.fields;
      }
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UVar13 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
        __this_01 = *(UnityEngine_Transform_o **)&__this_03[1].fields._correctVelocity.fields;
        pCVar7 = (Characters_BaseMovementSync_o *)0x0;
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          if (fVar11 <= 80.0) {
            fVar11 = 80.0;
          }
          axis = UnityEngine_Transform__get_right(__this_01,(MethodInfo *)0x0);
          fVar12 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          UnityEngine_Transform__RotateAround
                    (__this_00,UVar13,axis,fVar11 * 1600.0 * fVar12,(MethodInfo *)0x0);
          return extraout_EAX_00;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8df == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ad8df = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor(pSVar6,MethodInfo_List_1_UnityEngine_GameObject);
  *(System_Collections_Generic_List_object__o **)&pCVar7[1].fields.Disabled = pSVar6;
  il2cpp_runtime_helper_022b4080(&pCVar7[1].fields.Disabled,pSVar6);
  pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
  System_Collections_Generic_List_object____ctor(pSVar6,MethodInfo_List_1_UnityEngine_Collider);
  *(System_Collections_Generic_List_object__o **)&pCVar7[1].fields._correctPosition.fields.y = pSVar6;
  il2cpp_runtime_helper_022b4080(&pCVar7[1].fields._correctPosition.fields.y,pSVar6);
  pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_ParticleSystem);
  System_Collections_Generic_List_object____ctor(pSVar6,MethodInfo_List_1_UnityEngine_ParticleSystem);
  *(System_Collections_Generic_List_object__o **)&pCVar7[1].fields._correctRotation.fields = pSVar6;
  il2cpp_runtime_helper_022b4080(&pCVar7[1].fields._correctRotation);
  Characters_BaseMovementSync___ctor(pCVar7,(MethodInfo *)0x0);
  return extraout_EAX;
}


// Projectiles.BladeThrowProjectile$$Update
// il2cpp: void Projectiles_BladeThrowProjectile__Update (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x4207950

void Projectiles_BladeThrowProjectile__Update(Projectiles_BladeThrowProjectile_o *__this,MethodInfo *method)

{
  int iVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  System_Collections_Generic_List_GameObject__o *__this_02;
  System_Collections_Generic_List_Collider__o *__this_03;
  System_Collections_Generic_List_ParticleSystem__o *__this_04;
  UnityEngine_Rigidbody_o *__this_05;
  Projectiles_BladeThrowProjectile_o *__this_06;
  float fVar3;
  float fVar4;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o axis;
  
  if (g_data_057ad8e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    g_data_057ad8e7 = '\x01';
  }
  __this_06 = __this;
  Characters_BaseMovementSync__Update((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  pPVar2 = (__this->fields)._photonView;
  if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((char)(pPVar2->fields)._IsMine_k__BackingField != '\0') {
      fVar4 = (__this->fields)._timeLeft;
      fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar4 = fVar4 - fVar3;
      (__this->fields)._timeLeft = fVar4;
      if (fVar4 <= 0.0) {
        (*(__this->klass->vtable)._16_OnExceedLiveTime.methodPtr)
                  (__this,(__this->klass->vtable)._16_OnExceedLiveTime.method);
      }
    }
    if ((char)(__this->fields).Disabled != '\0') {
      return;
    }
    __this_06 = __this;
    __this_05 = (UnityEngine_Rigidbody_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Rigidbody_GetComponent_Rigidbody);
    if (__this_05 != (UnityEngine_Rigidbody_o *)0x0) {
      UVar5 = UnityEngine_Rigidbody__get_velocity(__this_05,(MethodInfo *)0x0);
      if (g_data_057a6841 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
        iVar1 = *(int *)((long)&(TypeInfo_Math->fields)._blade + 4);
        __this_06 = TypeInfo_Math;
      }
      else {
        iVar1 = *(int *)((long)&(TypeInfo_Math->fields)._blade + 4);
        __this_06 = TypeInfo_Math;
      }
      TypeInfo_Math = __this_06;
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar4 = UVar5.fields.z * UVar5.fields.z +
              UVar5.fields.y * UVar5.fields.y + UVar5.fields.x * UVar5.fields.x;
      if (fVar4 < 0.0) {
        fVar4 = sqrtf(fVar4);
        __this_00 = (__this->fields)._blade;
      }
      else {
        fVar4 = SQRT(fVar4);
        __this_00 = (__this->fields)._blade;
      }
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UVar5 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._blade;
        __this_06 = (Projectiles_BladeThrowProjectile_o *)0x0;
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8df == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ad8df = '\x01';
  }
  __this_02 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_UnityEngine_GameObject);
  (__this_06->fields)._hideObjects = __this_02;
  il2cpp_runtime_helper_022b4080(&(__this_06->fields)._hideObjects,__this_02);
  __this_03 = (System_Collections_Generic_List_Collider__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_UnityEngine_Collider);
  (__this_06->fields)._colliders = __this_03;
  il2cpp_runtime_helper_022b4080(&(__this_06->fields)._colliders,__this_03);
  __this_04 = (System_Collections_Generic_List_ParticleSystem__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_ParticleSystem);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_04,MethodInfo_List_1_UnityEngine_ParticleSystem);
  (__this_06->fields)._fadeTrails = __this_04;
  il2cpp_runtime_helper_022b4080(&(__this_06->fields)._fadeTrails);
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this_06,(MethodInfo *)0x0);
  return;
}


// Projectiles.BladeThrowProjectile$$.ctor
// il2cpp: void Projectiles_BladeThrowProjectile___ctor (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x4207b80

void Projectiles_BladeThrowProjectile___ctor(Projectiles_SmokeBombProjectile_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_Collider__o *__this_01;
  System_Collections_Generic_List_ParticleSystem__o *__this_02;
  
  if (g_data_057ad8df == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ad8df = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._hideObjects = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._hideObjects,__this_00);
  __this_01 = (System_Collections_Generic_List_Collider__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_UnityEngine_Collider);
  (__this->fields)._colliders = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._colliders,__this_01);
  __this_02 = (System_Collections_Generic_List_ParticleSystem__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_ParticleSystem);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_UnityEngine_ParticleSystem);
  (__this->fields)._fadeTrails = __this_02;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._fadeTrails);
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  return;
}


