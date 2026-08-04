// Type: Projectiles.Rock1Projectile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Projectiles/Rock1Projectile.cs
// Prior real C# source (older reference): Assets/Scripts/Projectiles/Rock1Projectile.cs
// --------------------------------

// Projectiles.Rock1Projectile$$get_DestroyOnImpact
// il2cpp: bool Projectiles_Rock1Projectile__get_DestroyOnImpact (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x4208660

bool_conflict
Projectiles_Rock1Projectile__get_DestroyOnImpact(Projectiles_Rock1Projectile_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// Projectiles.Rock1Projectile$$get_MinImpactVelocity
// il2cpp: float Projectiles_Rock1Projectile__get_MinImpactVelocity (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x4208670

float Projectiles_Rock1Projectile__get_MinImpactVelocity
                (Projectiles_Rock1Projectile_o *__this,MethodInfo *method)

{
  return 0.0;
}


// Projectiles.Rock1Projectile$$get_ImpactCooldown
// il2cpp: float Projectiles_Rock1Projectile__get_ImpactCooldown (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x4208680

float Projectiles_Rock1Projectile__get_ImpactCooldown
                (Projectiles_Rock1Projectile_o *__this,MethodInfo *method)

{
  return 1.0;
}


// Projectiles.Rock1Projectile$$RegisterObjects
// il2cpp: void Projectiles_Rock1Projectile__RegisterObjects (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x4208690

void Projectiles_Rock1Projectile__RegisterObjects(Projectiles_Rock1Projectile_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  undefined8 uVar2;
  int iVar3;
  System_Object_array *pSVar4;
  UnityEngine_Rigidbody_o *__this_00;
  Characters_BaseCharacter_o *pCVar5;
  Il2CppMethodPointer vtableDispatch;
  long lVar6;
  char cVar7;
  bool_conflict bVar8;
  Projectiles_Rock1Projectile_o *pPVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_GameObject_o *pUVar11;
  float *pfVar12;
  Photon_Pun_PhotonView_o *pPVar13;
  Projectiles_Rock1Projectile_o *pPVar14;
  Projectiles_Rock1Projectile_o *__this_01;
  Characters_BaseCharacter_o *pCVar15;
  CustomLogic_CustomLogicCollisionHandler_o *__this_02;
  System_String_o *pSVar16;
  System_String_o *pSVar17;
  MethodInfo_255A0F0 **method_00;
  undefined8 extraout_RDX;
  MethodInfo *method_01;
  Projectiles_Rock1Projectile_o *pPVar18;
  long *__this_03;
  uint uVar19;
  float fVar20;
  float fVar21;
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Quaternion_o rotation;
  
  if (g_data_057ad8ee == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"Rubble3Model");
    g_data_057ad8ee = '\x01';
  }
  pPVar18 = __this;
  pPVar9 = (Projectiles_Rock1Projectile_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pPVar9 != (Projectiles_Rock1Projectile_o *)0x0) &&
     (pUVar10 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)pPVar9,"Rubble3Model",(MethodInfo *)0x0),
     pPVar18 = pPVar9, pUVar10 != (UnityEngine_Transform_o *)0x0)) {
    pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
    lVar6 = MethodInfo_Void_Add;
    pPVar18 = (Projectiles_Rock1Projectile_o *)(__this->fields)._hideObjects;
    if (pPVar18 != (Projectiles_Rock1Projectile_o *)0x0) {
      piVar1 = (int32_t *)((long)&(pPVar18->fields).m_CancellationTokenSource + 4);
      *piVar1 = *piVar1 + 1;
      pSVar4 = (System_Object_array *)(pPVar18->fields).m_CachedPtr;
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar19 = *(uint *)&(pPVar18->fields).m_CancellationTokenSource;
        if (uVar19 < (uint)pSVar4->max_length) {
          *(uint *)&(pPVar18->fields).m_CancellationTokenSource = uVar19 + 1;
          pSVar4->m_Items[(int)uVar19] = (Il2CppObject *)pUVar11;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar19,pUVar11);
          return;
        }
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pPVar18,(Il2CppObject *)pUVar11,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pPVar9 = (Projectiles_Rock1Projectile_o *)0x0;
  pPVar14 = pPVar18;
  Characters_BaseMovementSync__Update((Characters_BaseMovementSync_o *)pPVar18,(MethodInfo *)0x0);
  pPVar13 = (pPVar18->fields)._photonView;
  if (pPVar13 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((char)(pPVar13->fields)._IsMine_k__BackingField != '\0') {
      fVar21 = (pPVar18->fields)._timeLeft;
      fVar20 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar21 = fVar21 - fVar20;
      (pPVar18->fields)._timeLeft = fVar21;
      if (fVar21 <= 0.0) {
        (*(pPVar18->klass->vtable)._16_OnExceedLiveTime.methodPtr)
                  (pPVar18,(pPVar18->klass->vtable)._16_OnExceedLiveTime.method);
      }
    }
    fVar21 = (pPVar18->fields)._impactCooldownLeft;
    fVar20 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (pPVar18->fields)._impactCooldownLeft = fVar21 - fVar20;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_03 = (long *)pPVar14;
  if (pPVar9 == (Projectiles_Rock1Projectile_o *)0x0) goto label_042088be;
  if (*(int *)&(pPVar9->fields).m_CancellationTokenSource == 0) {
label_042088c3:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    __this_03 = (long *)(pPVar9->fields).pvCache;
    if ((Projectiles_Rock1Projectile_o *)__this_03 == (Projectiles_Rock1Projectile_o *)0x0) {
label_042088be:
      il2cpp_runtime_helper_022b2c90();
      goto label_042088c3;
    }
    pPVar9 = g_data_057b9be8;
    if ((((Projectiles_Rock1Projectile_o *)__this_03)->klass->_1).element_class ==
        *(Il2CppClass **)&(g_data_057b9be8->fields)._correctRotation.fields.z) {
      pfVar12 = (float *)il2cpp_runtime_helper_02305440();
      (pPVar14->fields)._size = *pfVar12;
      pPVar9 = (Projectiles_Rock1Projectile_o *)0x0;
      __this_03 = (long *)pPVar14;
      pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pPVar14,(MethodInfo *)0x0);
      if (g_data_057a6932 == '\0') {
        __this_03 = &TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6932 = '\x01';
      }
      if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
        fVar21 = (pPVar14->fields)._size;
        uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
        UVar22.fields.x = fVar21 * (float)uVar2;
        UVar22.fields.y = fVar21 * (float)((ulong)uVar2 >> 0x20);
        UVar22.fields.z = fVar21 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
        UnityEngine_Transform__set_localScale(pUVar10,UVar22,(MethodInfo *)0x0);
        return;
      }
      goto label_042088be;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad8ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&"Rock");
    g_data_057ad8ef = '\x01';
  }
  pPVar18 = (Projectiles_Rock1Projectile_o *)__this_03;
  pPVar13 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)__this_03,(MethodInfo *)0x0);
  if (pPVar13 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((char)(pPVar13->fields)._IsMine_k__BackingField == '\0') ||
       ((char)(((Projectiles_Rock1Projectile_o *)__this_03)->fields).Disabled != '\0')) {
      return;
    }
    __this_00 = (((Projectiles_Rock1Projectile_o *)__this_03)->fields)._rigidbody;
    pPVar18 = (Projectiles_Rock1Projectile_o *)0x0;
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      UVar22 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
      if (g_data_057a6841 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
        iVar3 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar3 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar3 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar21 = UVar22.fields.z * UVar22.fields.z +
               UVar22.fields.y * UVar22.fields.y + UVar22.fields.x * UVar22.fields.x;
      if (fVar21 < 0.0) {
        fVar21 = sqrtf(fVar21);
      }
      else {
        fVar21 = SQRT(fVar21);
      }
      fVar20 = (float)(*(((Projectiles_Rock1Projectile_o *)__this_03)->klass->vtable).
                        _21_get_MinImpactVelocity.methodPtr)
                                (__this_03,
                                 (((Projectiles_Rock1Projectile_o *)__this_03)->klass->vtable).
                                 _21_get_MinImpactVelocity.method);
      if (fVar21 < fVar20) {
        return;
      }
      if (0.0 < (((Projectiles_Rock1Projectile_o *)__this_03)->fields)._impactCooldownLeft) {
        return;
      }
      pPVar18 = (Projectiles_Rock1Projectile_o *)__this_03;
      fVar21 = (float)(*(((Projectiles_Rock1Projectile_o *)__this_03)->klass->vtable)._22_get_ImpactCooldown.
                        methodPtr)();
      (((Projectiles_Rock1Projectile_o *)__this_03)->fields)._impactCooldownLeft = fVar21;
      if ((((pPVar9 != (Projectiles_Rock1Projectile_o *)0x0) &&
           (pPVar18 = pPVar9,
           pPVar14 = (Projectiles_Rock1Projectile_o *)
                     UnityEngine_Collision__get_collider((UnityEngine_Collision_o *)pPVar9,(MethodInfo *)0x0),
           pPVar14 != (Projectiles_Rock1Projectile_o *)0x0)) &&
          (__this_01 = (Projectiles_Rock1Projectile_o *)
                       UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pPVar14,(MethodInfo *)0x0), pPVar18 = pPVar14,
          __this_01 != (Projectiles_Rock1Projectile_o *)0x0)) &&
         ((pPVar14 = (Projectiles_Rock1Projectile_o *)
                     UnityEngine_GameObject__get_transform
                               ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0), pPVar18 = __this_01,
          pPVar14 != (Projectiles_Rock1Projectile_o *)0x0 &&
          (pUVar10 = UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pPVar14,(MethodInfo *)0x0),
          pPVar18 = pPVar14, pUVar10 != (UnityEngine_Transform_o *)0x0)))) {
        pCVar15 = (Characters_BaseCharacter_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar10,MethodInfo_BaseCharacter_GetComponent_BaseCharacter)
        ;
        pPVar18 = pPVar9;
        pPVar14 = (Projectiles_Rock1Projectile_o *)
                  UnityEngine_Collision__get_collider((UnityEngine_Collision_o *)pPVar9,(MethodInfo *)0x0);
        if ((pPVar14 != (Projectiles_Rock1Projectile_o *)0x0) &&
           (pUVar11 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pPVar14,(MethodInfo *)0x0), pPVar18 = pPVar14,
           pUVar11 != (UnityEngine_GameObject_o *)0x0)) {
          method_00 = &MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl;
          __this_02 = (CustomLogic_CustomLogicCollisionHandler_o *)
                      UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
          if (g_data_057ad8f1 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ad8f1 = '\x01';
          }
          pCVar5 = (((Projectiles_Rock1Projectile_o *)__this_03)->fields)._owner;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          method_01 = (MethodInfo *)0x0;
          bVar8 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          uVar19 = 100;
          if ((((char)bVar8 != '\0') &&
              (pCVar5 = (((Projectiles_Rock1Projectile_o *)__this_03)->fields)._owner,
              pCVar5 != (Characters_BaseCharacter_o *)0x0)) &&
             (*(char *)((long)&(pCVar5->fields).FeedVictimName + 1) != '\0')) {
            uVar19 = *(uint *)((long)&(pCVar5->fields).FeedVictimName + 4);
          }
          pSVar16 = Projectiles_Rock1Projectile__GetName((Projectiles_Rock1Projectile_o *)__this_03,method_01)
          ;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar8 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            pCVar5 = (((Projectiles_Rock1Projectile_o *)__this_03)->fields)._owner;
            pPVar18 = (Projectiles_Rock1Projectile_o *)__this_03;
            pPVar14 = (Projectiles_Rock1Projectile_o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
            if ((pPVar14 == (Projectiles_Rock1Projectile_o *)0x0) ||
               (UVar22 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)pPVar14,(MethodInfo *)0x0), pPVar18 = pPVar14,
               __this_02 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0)) goto label_04208db0;
            method_00 = (MethodInfo_255A0F0 **)(ulong)uVar19;
            CustomLogic_CustomLogicCollisionHandler__GetHit
                      (__this_02,pCVar5,pSVar16,uVar19,(System_String_o *)"Rock",UVar22,
                       (MethodInfo *)0x0);
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar8 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            pSVar17 = (((Projectiles_Rock1Projectile_o *)__this_03)->fields)._team;
            if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar8 = GameManagers_TeamInfo__SameTeam_446ffa0(pCVar15,pSVar17,(MethodInfo *)0x0);
            if ((char)bVar8 == '\0') {
              pPVar14 = (Projectiles_Rock1Projectile_o *)
                        UnityEngine_Collision__get_collider
                                  ((UnityEngine_Collision_o *)pPVar9,(MethodInfo *)0x0);
              pPVar18 = pPVar9;
              if ((pPVar14 == (Projectiles_Rock1Projectile_o *)0x0) ||
                 (pSVar17 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pPVar14,(MethodInfo *)0x0),
                 pPVar18 = pPVar14, pCVar15 == (Characters_BaseCharacter_o *)0x0)) goto label_04208db0;
              method_00 = (MethodInfo_255A0F0 **)"Rock";
              (*(pCVar15->klass->vtable)._85_GetHit.methodPtr)
                        (pCVar15,pSVar16,(ulong)uVar19,"Rock",pSVar17,
                         (pCVar15->klass->vtable)._85_GetHit.method);
            }
          }
          fVar21 = (((Projectiles_Rock1Projectile_o *)__this_03)->fields)._size;
          Projectiles_Rock1Projectile__KillPlayersInRadius
                    ((Projectiles_Rock1Projectile_o *)__this_03,fVar21 + fVar21,uVar19,pCVar15,
                     (MethodInfo *)method_00);
          if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar16 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x88);
          pPVar18 = (Projectiles_Rock1Projectile_o *)__this_03;
          pUVar10 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
          if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
            UVar22 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
            pPVar18 = (Projectiles_Rock1Projectile_o *)__this_03;
            pUVar10 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
            if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
              rotation = UnityEngine_Transform__get_rotation(pUVar10,(MethodInfo *)0x0);
              Effects_EffectSpawner__Spawn
                        (pSVar16,UVar22,rotation,(((Projectiles_Rock1Projectile_o *)__this_03)->fields)._size,
                         1,(System_Object_array *)0x0,(MethodInfo *)0x0);
              cVar7 = (*(((Projectiles_Rock1Projectile_o *)__this_03)->klass->vtable)._20_get_DestroyOnImpact.
                        methodPtr)(__this_03,
                                   (((Projectiles_Rock1Projectile_o *)__this_03)->klass->vtable).
                                   _20_get_DestroyOnImpact.method);
              if (cVar7 == '\0') {
                return;
              }
              vtableDispatch =
                   (((Projectiles_Rock1Projectile_o *)__this_03)->klass->vtable)._17_DestroySelf.methodPtr;
              (*vtableDispatch)
                        (__this_03,
                         (((Projectiles_Rock1Projectile_o *)__this_03)->klass->vtable)._17_DestroySelf.method,
                         extraout_RDX,vtableDispatch);
              return;
            }
          }
        }
      }
    }
  }
label_04208db0:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ad8f1 = '\x01';
  }
  pCVar15 = (pPVar18->fields)._owner;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Object__op_Inequality
            ((UnityEngine_Object_o *)pCVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Projectiles.Rock1Projectile$$Update
// il2cpp: void Projectiles_Rock1Projectile__Update (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x4208760

void Projectiles_Rock1Projectile__Update(Projectiles_Rock1Projectile_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  int iVar2;
  UnityEngine_Rigidbody_o *__this_00;
  Characters_BaseCharacter_o *pCVar3;
  Il2CppMethodPointer vtableDispatch;
  char cVar4;
  bool_conflict bVar5;
  float *pfVar6;
  UnityEngine_Transform_o *pUVar7;
  Photon_Pun_PhotonView_o *pPVar8;
  Projectiles_Rock1Projectile_o *pPVar9;
  Projectiles_Rock1Projectile_o *__this_01;
  Characters_BaseCharacter_o *pCVar10;
  UnityEngine_GameObject_o *__this_02;
  CustomLogic_CustomLogicCollisionHandler_o *__this_03;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  MethodInfo_255A0F0 **method_00;
  undefined8 extraout_RDX;
  Projectiles_Rock1Projectile_o *__this_04;
  MethodInfo *method_01;
  Projectiles_Rock1Projectile_o *pPVar13;
  long *__this_05;
  uint damage;
  float fVar14;
  float fVar15;
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Quaternion_o rotation;
  
  __this_04 = (Projectiles_Rock1Projectile_o *)0x0;
  pPVar13 = __this;
  Characters_BaseMovementSync__Update((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  pPVar8 = (__this->fields)._photonView;
  if (pPVar8 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((char)(pPVar8->fields)._IsMine_k__BackingField != '\0') {
      fVar15 = (__this->fields)._timeLeft;
      fVar14 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar15 = fVar15 - fVar14;
      (__this->fields)._timeLeft = fVar15;
      if (fVar15 <= 0.0) {
        (*(__this->klass->vtable)._16_OnExceedLiveTime.methodPtr)
                  (__this,(__this->klass->vtable)._16_OnExceedLiveTime.method);
      }
    }
    fVar15 = (__this->fields)._impactCooldownLeft;
    fVar14 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._impactCooldownLeft = fVar15 - fVar14;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_05 = (long *)pPVar13;
  if (__this_04 == (Projectiles_Rock1Projectile_o *)0x0) goto label_042088be;
  if (*(int *)&(__this_04->fields).m_CancellationTokenSource == 0) {
label_042088c3:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    __this_05 = (long *)(__this_04->fields).pvCache;
    if ((Projectiles_Rock1Projectile_o *)__this_05 == (Projectiles_Rock1Projectile_o *)0x0) {
label_042088be:
      il2cpp_runtime_helper_022b2c90();
      goto label_042088c3;
    }
    __this_04 = g_data_057b9be8;
    if ((((Projectiles_Rock1Projectile_o *)__this_05)->klass->_1).element_class ==
        *(Il2CppClass **)&(g_data_057b9be8->fields)._correctRotation.fields.z) {
      pfVar6 = (float *)il2cpp_runtime_helper_02305440();
      (pPVar13->fields)._size = *pfVar6;
      __this_04 = (Projectiles_Rock1Projectile_o *)0x0;
      __this_05 = (long *)pPVar13;
      pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pPVar13,(MethodInfo *)0x0);
      if (g_data_057a6932 == '\0') {
        __this_05 = &TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6932 = '\x01';
      }
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        fVar15 = (pPVar13->fields)._size;
        uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
        UVar16.fields.x = fVar15 * (float)uVar1;
        UVar16.fields.y = fVar15 * (float)((ulong)uVar1 >> 0x20);
        UVar16.fields.z = fVar15 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
        UnityEngine_Transform__set_localScale(pUVar7,UVar16,(MethodInfo *)0x0);
        return;
      }
      goto label_042088be;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad8ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&"Rock");
    g_data_057ad8ef = '\x01';
  }
  pPVar13 = (Projectiles_Rock1Projectile_o *)__this_05;
  pPVar8 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this_05,(MethodInfo *)0x0);
  if (pPVar8 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((char)(pPVar8->fields)._IsMine_k__BackingField == '\0') ||
       ((char)(((Projectiles_Rock1Projectile_o *)__this_05)->fields).Disabled != '\0')) {
      return;
    }
    __this_00 = (((Projectiles_Rock1Projectile_o *)__this_05)->fields)._rigidbody;
    pPVar13 = (Projectiles_Rock1Projectile_o *)0x0;
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      UVar16 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
      if (g_data_057a6841 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
        iVar2 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar2 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar15 = UVar16.fields.z * UVar16.fields.z +
               UVar16.fields.y * UVar16.fields.y + UVar16.fields.x * UVar16.fields.x;
      if (fVar15 < 0.0) {
        fVar15 = sqrtf(fVar15);
      }
      else {
        fVar15 = SQRT(fVar15);
      }
      fVar14 = (float)(*(((Projectiles_Rock1Projectile_o *)__this_05)->klass->vtable).
                        _21_get_MinImpactVelocity.methodPtr)
                                (__this_05,
                                 (((Projectiles_Rock1Projectile_o *)__this_05)->klass->vtable).
                                 _21_get_MinImpactVelocity.method);
      if (fVar15 < fVar14) {
        return;
      }
      if (0.0 < (((Projectiles_Rock1Projectile_o *)__this_05)->fields)._impactCooldownLeft) {
        return;
      }
      pPVar13 = (Projectiles_Rock1Projectile_o *)__this_05;
      fVar15 = (float)(*(((Projectiles_Rock1Projectile_o *)__this_05)->klass->vtable)._22_get_ImpactCooldown.
                        methodPtr)();
      (((Projectiles_Rock1Projectile_o *)__this_05)->fields)._impactCooldownLeft = fVar15;
      if ((((__this_04 != (Projectiles_Rock1Projectile_o *)0x0) &&
           (pPVar13 = __this_04,
           pPVar9 = (Projectiles_Rock1Projectile_o *)
                    UnityEngine_Collision__get_collider
                              ((UnityEngine_Collision_o *)__this_04,(MethodInfo *)0x0),
           pPVar9 != (Projectiles_Rock1Projectile_o *)0x0)) &&
          (__this_01 = (Projectiles_Rock1Projectile_o *)
                       UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pPVar9,(MethodInfo *)0x0), pPVar13 = pPVar9,
          __this_01 != (Projectiles_Rock1Projectile_o *)0x0)) &&
         ((pPVar9 = (Projectiles_Rock1Projectile_o *)
                    UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0), pPVar13 = __this_01,
          pPVar9 != (Projectiles_Rock1Projectile_o *)0x0 &&
          (pUVar7 = UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pPVar9,(MethodInfo *)0x0),
          pPVar13 = pPVar9, pUVar7 != (UnityEngine_Transform_o *)0x0)))) {
        pCVar10 = (Characters_BaseCharacter_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar7,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
        pPVar13 = __this_04;
        pPVar9 = (Projectiles_Rock1Projectile_o *)
                 UnityEngine_Collision__get_collider((UnityEngine_Collision_o *)__this_04,(MethodInfo *)0x0);
        if ((pPVar9 != (Projectiles_Rock1Projectile_o *)0x0) &&
           (__this_02 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pPVar9,(MethodInfo *)0x0), pPVar13 = pPVar9,
           __this_02 != (UnityEngine_GameObject_o *)0x0)) {
          method_00 = &MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl;
          __this_03 = (CustomLogic_CustomLogicCollisionHandler_o *)
                      UnityEngine_GameObject__GetComponent_object_(__this_02,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
          if (g_data_057ad8f1 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ad8f1 = '\x01';
          }
          pCVar3 = (((Projectiles_Rock1Projectile_o *)__this_05)->fields)._owner;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          method_01 = (MethodInfo *)0x0;
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          damage = 100;
          if ((((char)bVar5 != '\0') &&
              (pCVar3 = (((Projectiles_Rock1Projectile_o *)__this_05)->fields)._owner,
              pCVar3 != (Characters_BaseCharacter_o *)0x0)) &&
             (*(char *)((long)&(pCVar3->fields).FeedVictimName + 1) != '\0')) {
            damage = *(uint *)((long)&(pCVar3->fields).FeedVictimName + 4);
          }
          pSVar11 = Projectiles_Rock1Projectile__GetName((Projectiles_Rock1Projectile_o *)__this_05,method_01)
          ;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pCVar3 = (((Projectiles_Rock1Projectile_o *)__this_05)->fields)._owner;
            pPVar13 = (Projectiles_Rock1Projectile_o *)__this_05;
            pPVar9 = (Projectiles_Rock1Projectile_o *)
                     UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
            if ((pPVar9 == (Projectiles_Rock1Projectile_o *)0x0) ||
               (UVar16 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)pPVar9,(MethodInfo *)0x0), pPVar13 = pPVar9,
               __this_03 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0)) goto label_04208db0;
            method_00 = (MethodInfo_255A0F0 **)(ulong)damage;
            CustomLogic_CustomLogicCollisionHandler__GetHit
                      (__this_03,pCVar3,pSVar11,damage,(System_String_o *)"Rock",UVar16,
                       (MethodInfo *)0x0);
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pSVar12 = (((Projectiles_Rock1Projectile_o *)__this_05)->fields)._team;
            if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar5 = GameManagers_TeamInfo__SameTeam_446ffa0(pCVar10,pSVar12,(MethodInfo *)0x0);
            if ((char)bVar5 == '\0') {
              pPVar9 = (Projectiles_Rock1Projectile_o *)
                       UnityEngine_Collision__get_collider
                                 ((UnityEngine_Collision_o *)__this_04,(MethodInfo *)0x0);
              pPVar13 = __this_04;
              if ((pPVar9 == (Projectiles_Rock1Projectile_o *)0x0) ||
                 (pSVar12 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pPVar9,(MethodInfo *)0x0),
                 pPVar13 = pPVar9, pCVar10 == (Characters_BaseCharacter_o *)0x0)) goto label_04208db0;
              method_00 = (MethodInfo_255A0F0 **)"Rock";
              (*(pCVar10->klass->vtable)._85_GetHit.methodPtr)
                        (pCVar10,pSVar11,(ulong)damage,"Rock",pSVar12,
                         (pCVar10->klass->vtable)._85_GetHit.method);
            }
          }
          fVar15 = (((Projectiles_Rock1Projectile_o *)__this_05)->fields)._size;
          Projectiles_Rock1Projectile__KillPlayersInRadius
                    ((Projectiles_Rock1Projectile_o *)__this_05,fVar15 + fVar15,damage,pCVar10,
                     (MethodInfo *)method_00);
          if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x88);
          pPVar13 = (Projectiles_Rock1Projectile_o *)__this_05;
          pUVar7 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            UVar16 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
            pPVar13 = (Projectiles_Rock1Projectile_o *)__this_05;
            pUVar7 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              rotation = UnityEngine_Transform__get_rotation(pUVar7,(MethodInfo *)0x0);
              Effects_EffectSpawner__Spawn
                        (pSVar11,UVar16,rotation,(((Projectiles_Rock1Projectile_o *)__this_05)->fields)._size,
                         1,(System_Object_array *)0x0,(MethodInfo *)0x0);
              cVar4 = (*(((Projectiles_Rock1Projectile_o *)__this_05)->klass->vtable)._20_get_DestroyOnImpact.
                        methodPtr)(__this_05,
                                   (((Projectiles_Rock1Projectile_o *)__this_05)->klass->vtable).
                                   _20_get_DestroyOnImpact.method);
              if (cVar4 == '\0') {
                return;
              }
              vtableDispatch =
                   (((Projectiles_Rock1Projectile_o *)__this_05)->klass->vtable)._17_DestroySelf.methodPtr;
              (*vtableDispatch)
                        (__this_05,
                         (((Projectiles_Rock1Projectile_o *)__this_05)->klass->vtable)._17_DestroySelf.method,
                         extraout_RDX,vtableDispatch);
              return;
            }
          }
        }
      }
    }
  }
label_04208db0:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ad8f1 = '\x01';
  }
  pCVar10 = (pPVar13->fields)._owner;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Object__op_Inequality
            ((UnityEngine_Object_o *)pCVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Projectiles.Rock1Projectile$$SetupSettings
// il2cpp: void Projectiles_Rock1Projectile__SetupSettings (Projectiles_Rock1Projectile_o* __this, System_Object_array* settings, const MethodInfo* method);
// 0x4208800

void Projectiles_Rock1Projectile__SetupSettings
               (Projectiles_Rock1Projectile_o *__this,System_Object_array *settings,MethodInfo *method)

{
  undefined8 uVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  UnityEngine_Object_o *pUVar4;
  Il2CppObject *pIVar5;
  Characters_BaseCharacter_o *character;
  Il2CppMethodPointer vtableDispatch;
  char cVar6;
  bool_conflict bVar7;
  float *pfVar8;
  UnityEngine_Transform_o *pUVar9;
  Photon_Pun_PhotonView_o *pPVar10;
  System_Object_array *pSVar11;
  System_Object_array *__this_00;
  Characters_BaseCharacter_o *a;
  UnityEngine_GameObject_o *__this_01;
  CustomLogic_CustomLogicCollisionHandler_o *__this_02;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  MethodInfo_255A0F0 **method_00;
  undefined8 extraout_RDX;
  MethodInfo *method_01;
  long *__this_03;
  System_Object_array *pSVar14;
  uint damage;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Quaternion_o rotation;
  
  __this_03 = (long *)__this;
  if (settings == (System_Object_array *)0x0) goto label_042088be;
  if ((int)settings->max_length == 0) {
label_042088c3:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    __this_03 = (long *)settings->m_Items[0];
    if ((System_Object_array *)__this_03 == (System_Object_array *)0x0) {
label_042088be:
      il2cpp_runtime_helper_022b2c90();
      goto label_042088c3;
    }
    settings = g_data_057b9be8;
    if ((((((System_Object_array *)__this_03)->obj).klass)->_1).element_class ==
        (Il2CppClass *)g_data_057b9be8->m_Items[4]) {
      pfVar8 = (float *)il2cpp_runtime_helper_02305440();
      (__this->fields)._size = *pfVar8;
      settings = (System_Object_array *)0x0;
      __this_03 = (long *)__this;
      pUVar9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (g_data_057a6932 == '\0') {
        __this_03 = &TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6932 = '\x01';
      }
      if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
        fVar17 = (__this->fields)._size;
        uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
        UVar18.fields.x = fVar17 * (float)uVar1;
        UVar18.fields.y = fVar17 * (float)((ulong)uVar1 >> 0x20);
        UVar18.fields.z = fVar17 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
        UnityEngine_Transform__set_localScale(pUVar9,UVar18,(MethodInfo *)0x0);
        return;
      }
      goto label_042088be;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad8ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&"Rock");
    g_data_057ad8ef = '\x01';
  }
  pSVar14 = (System_Object_array *)__this_03;
  pPVar10 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)__this_03,(MethodInfo *)0x0);
  if (pPVar10 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((char)(pPVar10->fields)._IsMine_k__BackingField == '\0') ||
       (*(char *)(((System_Object_array *)__this_03)->m_Items + 1) != '\0')) {
      return;
    }
    pSVar14 = (System_Object_array *)0x0;
    if ((UnityEngine_Rigidbody_o *)((System_Object_array *)__this_03)->m_Items[0xb] !=
        (UnityEngine_Rigidbody_o *)0x0) {
      UVar18 = UnityEngine_Rigidbody__get_velocity
                         ((UnityEngine_Rigidbody_o *)((System_Object_array *)__this_03)->m_Items[0xb],
                          (MethodInfo *)0x0);
      if (g_data_057a6841 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
        iVar2 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar2 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar17 = UVar18.fields.z * UVar18.fields.z +
               UVar18.fields.y * UVar18.fields.y + UVar18.fields.x * UVar18.fields.x;
      if (fVar17 < 0.0) {
        fVar17 = sqrtf(fVar17);
      }
      else {
        fVar17 = SQRT(fVar17);
      }
      pIVar3 = (((System_Object_array *)__this_03)->obj).klass;
      fVar15 = (float)(*pIVar3->vtable[0x15].methodPtr)(__this_03,pIVar3->vtable[0x15].method);
      if (fVar17 < fVar15) {
        return;
      }
      if (0.0 < *(float *)((long)((System_Object_array *)__this_03)->m_Items + 0xc4)) {
        return;
      }
      pSVar14 = (System_Object_array *)__this_03;
      uVar16 = (*((((System_Object_array *)__this_03)->obj).klass)->vtable[0x16].methodPtr)();
      *(undefined4 *)((long)((System_Object_array *)__this_03)->m_Items + 0xc4) = uVar16;
      if ((((settings != (System_Object_array *)0x0) &&
           (pSVar14 = settings,
           pSVar11 = (System_Object_array *)
                     UnityEngine_Collision__get_collider
                               ((UnityEngine_Collision_o *)settings,(MethodInfo *)0x0),
           pSVar11 != (System_Object_array *)0x0)) &&
          (__this_00 = (System_Object_array *)
                       UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pSVar11,(MethodInfo *)0x0), pSVar14 = pSVar11,
          __this_00 != (System_Object_array *)0x0)) &&
         ((pSVar11 = (System_Object_array *)
                     UnityEngine_GameObject__get_transform
                               ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0), pSVar14 = __this_00,
          pSVar11 != (System_Object_array *)0x0 &&
          (pUVar9 = UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pSVar11,(MethodInfo *)0x0),
          pSVar14 = pSVar11, pUVar9 != (UnityEngine_Transform_o *)0x0)))) {
        a = (Characters_BaseCharacter_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar9,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
        pSVar14 = settings;
        pSVar11 = (System_Object_array *)
                  UnityEngine_Collision__get_collider((UnityEngine_Collision_o *)settings,(MethodInfo *)0x0);
        if ((pSVar11 != (System_Object_array *)0x0) &&
           (__this_01 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pSVar11,(MethodInfo *)0x0), pSVar14 = pSVar11,
           __this_01 != (UnityEngine_GameObject_o *)0x0)) {
          method_00 = &MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl;
          __this_02 = (CustomLogic_CustomLogicCollisionHandler_o *)
                      UnityEngine_GameObject__GetComponent_object_(__this_01,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
          if (g_data_057ad8f1 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ad8f1 = '\x01';
          }
          pUVar4 = (UnityEngine_Object_o *)((System_Object_array *)__this_03)->m_Items[0xf];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          method_01 = (MethodInfo *)0x0;
          bVar7 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          damage = 100;
          if ((((char)bVar7 != '\0') &&
              (pIVar5 = ((System_Object_array *)__this_03)->m_Items[0xf], pIVar5 != (Il2CppObject *)0x0)) &&
             (*(char *)((long)&pIVar5[6].monitor + 1) != '\0')) {
            damage = *(uint *)((long)&pIVar5[6].monitor + 4);
          }
          pSVar12 = Projectiles_Rock1Projectile__GetName((Projectiles_Rock1Projectile_o *)__this_03,method_01)
          ;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            character = (Characters_BaseCharacter_o *)((System_Object_array *)__this_03)->m_Items[0xf];
            pSVar14 = (System_Object_array *)__this_03;
            pSVar11 = (System_Object_array *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
            if ((pSVar11 == (System_Object_array *)0x0) ||
               (UVar18 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)pSVar11,(MethodInfo *)0x0), pSVar14 = pSVar11,
               __this_02 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0)) goto label_04208db0;
            method_00 = (MethodInfo_255A0F0 **)(ulong)damage;
            CustomLogic_CustomLogicCollisionHandler__GetHit
                      (__this_02,character,pSVar12,damage,(System_String_o *)"Rock",UVar18,
                       (MethodInfo *)0x0);
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            pSVar13 = (System_String_o *)((System_Object_array *)__this_03)->m_Items[0x11];
            if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar7 = GameManagers_TeamInfo__SameTeam_446ffa0(a,pSVar13,(MethodInfo *)0x0);
            if ((char)bVar7 == '\0') {
              pSVar11 = (System_Object_array *)
                        UnityEngine_Collision__get_collider
                                  ((UnityEngine_Collision_o *)settings,(MethodInfo *)0x0);
              pSVar14 = settings;
              if ((pSVar11 == (System_Object_array *)0x0) ||
                 (pSVar13 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pSVar11,(MethodInfo *)0x0),
                 pSVar14 = pSVar11, a == (Characters_BaseCharacter_o *)0x0)) goto label_04208db0;
              method_00 = (MethodInfo_255A0F0 **)"Rock";
              (*(a->klass->vtable)._85_GetHit.methodPtr)
                        (a,pSVar12,(ulong)damage,"Rock",pSVar13,(a->klass->vtable)._85_GetHit.method);
            }
          }
          Projectiles_Rock1Projectile__KillPlayersInRadius
                    ((Projectiles_Rock1Projectile_o *)__this_03,
                     *(float *)(((System_Object_array *)__this_03)->m_Items + 0x18) +
                     *(float *)(((System_Object_array *)__this_03)->m_Items + 0x18),damage,a,
                     (MethodInfo *)method_00);
          if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar12 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x88);
          pSVar14 = (System_Object_array *)__this_03;
          pUVar9 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
          if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
            UVar18 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
            pSVar14 = (System_Object_array *)__this_03;
            pUVar9 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
            if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
              rotation = UnityEngine_Transform__get_rotation(pUVar9,(MethodInfo *)0x0);
              Effects_EffectSpawner__Spawn
                        (pSVar12,UVar18,rotation,
                         *(float *)(((System_Object_array *)__this_03)->m_Items + 0x18),1,
                         (System_Object_array *)0x0,(MethodInfo *)0x0);
              pIVar3 = (((System_Object_array *)__this_03)->obj).klass;
              cVar6 = (*pIVar3->vtable[0x14].methodPtr)(__this_03,pIVar3->vtable[0x14].method);
              if (cVar6 == '\0') {
                return;
              }
              pIVar3 = (((System_Object_array *)__this_03)->obj).klass;
              vtableDispatch = pIVar3->vtable[0x11].methodPtr;
              (*vtableDispatch)
                        (__this_03,pIVar3->vtable[0x11].method,extraout_RDX,vtableDispatch);
              return;
            }
          }
        }
      }
    }
  }
label_04208db0:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ad8f1 = '\x01';
  }
  pUVar4 = (UnityEngine_Object_o *)pSVar14->m_Items[0xf];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Projectiles.Rock1Projectile$$OnCollisionEnter
// il2cpp: void Projectiles_Rock1Projectile__OnCollisionEnter (Projectiles_Rock1Projectile_o* __this, UnityEngine_Collision_o* collision, const MethodInfo* method);
// 0x42088d0

void Projectiles_Rock1Projectile__OnCollisionEnter
               (Projectiles_Rock1Projectile_o *__this,UnityEngine_Collision_o *collision,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Rigidbody_o *__this_00;
  Characters_BaseCharacter_o *pCVar2;
  Il2CppMethodPointer vtableDispatch;
  char cVar3;
  bool_conflict bVar4;
  Photon_Pun_PhotonView_o *pPVar5;
  Projectiles_Rock1Projectile_o *pPVar6;
  Projectiles_Rock1Projectile_o *__this_01;
  UnityEngine_Transform_o *pUVar7;
  Characters_BaseCharacter_o *pCVar8;
  UnityEngine_GameObject_o *__this_02;
  CustomLogic_CustomLogicCollisionHandler_o *__this_03;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  MethodInfo_255A0F0 **method_00;
  undefined8 extraout_RDX;
  MethodInfo *method_01;
  Projectiles_Rock1Projectile_o *pPVar11;
  uint damage;
  float fVar12;
  float fVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Quaternion_o rotation;
  
  if (g_data_057ad8ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&"Rock");
    g_data_057ad8ef = '\x01';
  }
  pPVar11 = __this;
  pPVar5 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar5 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((char)(pPVar5->fields)._IsMine_k__BackingField == '\0') || ((char)(__this->fields).Disabled != '\0'))
    {
      return;
    }
    __this_00 = (__this->fields)._rigidbody;
    pPVar11 = (Projectiles_Rock1Projectile_o *)0x0;
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      UVar14 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
      if (g_data_057a6841 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar13 = UVar14.fields.z * UVar14.fields.z +
               UVar14.fields.y * UVar14.fields.y + UVar14.fields.x * UVar14.fields.x;
      if (fVar13 < 0.0) {
        fVar13 = sqrtf(fVar13);
      }
      else {
        fVar13 = SQRT(fVar13);
      }
      fVar12 = (float)(*(__this->klass->vtable)._21_get_MinImpactVelocity.methodPtr)
                                (__this,(__this->klass->vtable)._21_get_MinImpactVelocity.method);
      if (fVar13 < fVar12) {
        return;
      }
      if (0.0 < (__this->fields)._impactCooldownLeft) {
        return;
      }
      pPVar11 = __this;
      fVar13 = (float)(*(__this->klass->vtable)._22_get_ImpactCooldown.methodPtr)();
      (__this->fields)._impactCooldownLeft = fVar13;
      if ((((collision != (UnityEngine_Collision_o *)0x0) &&
           (pPVar11 = (Projectiles_Rock1Projectile_o *)collision,
           pPVar6 = (Projectiles_Rock1Projectile_o *)
                    UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0),
           pPVar6 != (Projectiles_Rock1Projectile_o *)0x0)) &&
          (__this_01 = (Projectiles_Rock1Projectile_o *)
                       UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pPVar6,(MethodInfo *)0x0), pPVar11 = pPVar6,
          __this_01 != (Projectiles_Rock1Projectile_o *)0x0)) &&
         ((pPVar6 = (Projectiles_Rock1Projectile_o *)
                    UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0), pPVar11 = __this_01,
          pPVar6 != (Projectiles_Rock1Projectile_o *)0x0 &&
          (pUVar7 = UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pPVar6,(MethodInfo *)0x0),
          pPVar11 = pPVar6, pUVar7 != (UnityEngine_Transform_o *)0x0)))) {
        pCVar8 = (Characters_BaseCharacter_o *)
                 UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar7,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
        pPVar11 = (Projectiles_Rock1Projectile_o *)collision;
        pPVar6 = (Projectiles_Rock1Projectile_o *)
                 UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
        if ((pPVar6 != (Projectiles_Rock1Projectile_o *)0x0) &&
           (__this_02 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pPVar6,(MethodInfo *)0x0), pPVar11 = pPVar6,
           __this_02 != (UnityEngine_GameObject_o *)0x0)) {
          method_00 = &MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl;
          __this_03 = (CustomLogic_CustomLogicCollisionHandler_o *)
                      UnityEngine_GameObject__GetComponent_object_(__this_02,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
          if (g_data_057ad8f1 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ad8f1 = '\x01';
          }
          pCVar2 = (__this->fields)._owner;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          method_01 = (MethodInfo *)0x0;
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          damage = 100;
          if ((((char)bVar4 != '\0') &&
              (pCVar2 = (__this->fields)._owner, pCVar2 != (Characters_BaseCharacter_o *)0x0)) &&
             (*(char *)((long)&(pCVar2->fields).FeedVictimName + 1) != '\0')) {
            damage = *(uint *)((long)&(pCVar2->fields).FeedVictimName + 4);
          }
          pSVar9 = Projectiles_Rock1Projectile__GetName(__this,method_01);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            pCVar2 = (__this->fields)._owner;
            pPVar11 = __this;
            pPVar6 = (Projectiles_Rock1Projectile_o *)
                     UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            if ((pPVar6 == (Projectiles_Rock1Projectile_o *)0x0) ||
               (UVar14 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)pPVar6,(MethodInfo *)0x0), pPVar11 = pPVar6,
               __this_03 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0)) goto label_04208db0;
            method_00 = (MethodInfo_255A0F0 **)(ulong)damage;
            CustomLogic_CustomLogicCollisionHandler__GetHit
                      (__this_03,pCVar2,pSVar9,damage,(System_String_o *)"Rock",UVar14,(MethodInfo *)0x0
                      );
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            pSVar10 = (__this->fields)._team;
            if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar4 = GameManagers_TeamInfo__SameTeam_446ffa0(pCVar8,pSVar10,(MethodInfo *)0x0);
            if ((char)bVar4 == '\0') {
              pPVar6 = (Projectiles_Rock1Projectile_o *)
                       UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
              pPVar11 = (Projectiles_Rock1Projectile_o *)collision;
              if ((pPVar6 == (Projectiles_Rock1Projectile_o *)0x0) ||
                 (pSVar10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pPVar6,(MethodInfo *)0x0),
                 pPVar11 = pPVar6, pCVar8 == (Characters_BaseCharacter_o *)0x0)) goto label_04208db0;
              method_00 = (MethodInfo_255A0F0 **)"Rock";
              (*(pCVar8->klass->vtable)._85_GetHit.methodPtr)
                        (pCVar8,pSVar9,(ulong)damage,"Rock",pSVar10,
                         (pCVar8->klass->vtable)._85_GetHit.method);
            }
          }
          fVar13 = (__this->fields)._size;
          Projectiles_Rock1Projectile__KillPlayersInRadius
                    (__this,fVar13 + fVar13,damage,pCVar8,(MethodInfo *)method_00);
          if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar9 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x88);
          pPVar11 = __this;
          pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            UVar14 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
            pPVar11 = __this;
            pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              rotation = UnityEngine_Transform__get_rotation(pUVar7,(MethodInfo *)0x0);
              Effects_EffectSpawner__Spawn
                        (pSVar9,UVar14,rotation,(__this->fields)._size,1,(System_Object_array *)0x0,
                         (MethodInfo *)0x0);
              cVar3 = (*(__this->klass->vtable)._20_get_DestroyOnImpact.methodPtr)
                                (__this,(__this->klass->vtable)._20_get_DestroyOnImpact.method);
              if (cVar3 == '\0') {
                return;
              }
              vtableDispatch = (__this->klass->vtable)._17_DestroySelf.methodPtr;
              (*vtableDispatch)
                        (__this,(__this->klass->vtable)._17_DestroySelf.method,extraout_RDX,
                         vtableDispatch);
              return;
            }
          }
        }
      }
    }
  }
label_04208db0:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ad8f1 = '\x01';
  }
  pCVar8 = (pPVar11->fields)._owner;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Object__op_Inequality
            ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Projectiles.Rock1Projectile$$KillPlayersInRadius
// il2cpp: void Projectiles_Rock1Projectile__KillPlayersInRadius (Projectiles_Rock1Projectile_o* __this, float radius, int32_t damage, Characters_BaseCharacter_o* damagedHuman, const MethodInfo* method);
// 0x4208ef0

void Projectiles_Rock1Projectile__KillPlayersInRadius
               (Projectiles_Rock1Projectile_o *__this,float radius,int32_t damage,
               Characters_BaseCharacter_o *damagedHuman,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_String_o *b;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  bool_conflict bVar3;
  UnityEngine_Transform_o *pUVar4;
  System_String_o *pSVar5;
  long *plVar6;
  MethodInfo_3219C40 *method_00;
  MethodInfo *method_01;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  undefined1 auVar10 [12];
  undefined8 in_stack_ffffffffffffff38;
  System_Collections_Generic_HashSet_T__o *pSVar11;
  float local_88;
  float fStack_84;
  float local_68;
  float fStack_64;
  System_Collections_Generic_HashSet_Enumerator_T__o local_48;
  
  if (g_data_057ad8f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_Human_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&"Rock");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ad8f0 = '\x01';
  }
  pSVar11 = (System_Collections_Generic_HashSet_T__o *)0x0;
  method_00 = *(MethodInfo_3219C40 **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
    method_01 = (MethodInfo *)0x0;
    UVar8 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
    pSVar5 = Projectiles_Rock1Projectile__GetName(__this,method_01);
    if (method_00 != (MethodInfo_3219C40 *)0x0) {
      if (((byte)method_00->methodPointer[0x130] < (byte)*(code *)(TypeInfo_InGameManager + 0x130)) ||
         (*(long *)(*(long *)(method_00->methodPointer + 200) + -8 +
                   (ulong)(byte)*(code *)(TypeInfo_InGameManager + 0x130) * 8) != TypeInfo_InGameManager)) goto label_0420928b;
      if ((method_00->field8_0x40).genericMethod != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___GetEnumerator
                  (&local_48,(method_00->field8_0x40).genericMethod,MethodInfo_HashSet_1_T_Enumerator_Characters_Human_GetEnumerator);
        local_88 = UVar8.fields.x;
        fStack_84 = UVar8.fields.y;
        method_00 = (MethodInfo_3219C40 *)&stack0xffffffffffffff48;
        pSVar11 = local_48.fields._set;
label_042090a0:
        do {
          __this_00.fields._index = damage;
          __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff38;
          __this_00.fields._version = (int32_t)radius;
          __this_00.fields._current = (Il2CppObject *)pSVar11;
          bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext(__this_00,method_00);
          if ((char)bVar3 == '\0') {
            __this_01.fields._index = damage;
            __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff38;
            __this_01.fields._version = (int32_t)radius;
            __this_01.fields._current = (Il2CppObject *)pSVar11;
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      (__this_01,(MethodInfo_3219C30 *)&stack0xffffffffffffff48);
            return;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)local_48.fields._current,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
        } while ((char)bVar3 != '\0');
        if ((Characters_BaseCharacter_o *)local_48.fields._current != (Characters_BaseCharacter_o *)0x0)
        goto code_r0x042090e4;
        il2cpp_runtime_helper_022b2c90();
        goto label_0420927c;
      }
    }
  }
label_04209286:
  il2cpp_runtime_helper_022b2c90();
label_0420928b:
  auVar10 = il2cpp_runtime_helper_022b2fd0(method_00);
  if (auVar10._8_4_ == 1) {
    plVar6 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar2 = *plVar6;
    __cxa_end_catch();
    __this_02.fields._index = damage;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff38;
    __this_02.fields._version = (int32_t)radius;
    __this_02.fields._current = (Il2CppObject *)pSVar11;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff48);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_03.fields._index = damage;
  __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff38;
  __this_03.fields._version = (int32_t)radius;
  __this_03.fields._current = (Il2CppObject *)pSVar11;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff48);
  _Unwind_Resume(auVar10._0_8_);
code_r0x042090e4:
  if (*(char *)&((Characters_BaseCharacter_Fields *)((long)local_48.fields._current + 0x10))->FeedVictimName
      == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)local_48.fields._current,(UnityEngine_Object_o *)damagedHuman,
                       (MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      lVar2 = *(long *)&((Characters_BaseCharacter_Fields *)((long)local_48.fields._current + 0x10))->Dead;
      if (lVar2 == 0) {
label_0420927c:
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        pUVar4 = *(UnityEngine_Transform_o **)(lVar2 + 0x10);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          UVar9 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
          if (g_data_057a68cb == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a68cb = '\x01';
            iVar1 = *(int *)(TypeInfo_Math + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_Math + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          local_68 = UVar9.fields.x;
          fStack_64 = UVar9.fields.y;
          fVar7 = UVar9.fields.z - UVar8.fields.z;
          fVar7 = (local_68 - local_88) * (local_68 - local_88) +
                  (fStack_64 - fStack_84) * (fStack_64 - fStack_84) + fVar7 * fVar7;
          if (fVar7 < 0.0) {
            fVar7 = sqrtf(fVar7);
            if (radius <= fVar7) goto label_042090a0;
          }
          else if (radius <= SQRT(fVar7)) goto label_042090a0;
          b = (__this->fields)._team;
          if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = GameManagers_TeamInfo__SameTeam_446ffa0
                            ((Characters_BaseCharacter_o *)local_48.fields._current,b,(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            (*(((Characters_BaseCharacter_c *)(local_48.fields._current)->klass)->vtable)._85_GetHit.methodPtr
            )(local_48.fields._current,pSVar5,(ulong)(uint)damage,"Rock","",
              (((Characters_BaseCharacter_c *)(local_48.fields._current)->klass)->vtable)._85_GetHit.method);
          }
          goto label_042090a0;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      goto label_04209286;
    }
  }
  goto label_042090a0;
}


// Projectiles.Rock1Projectile$$CalculateDamage
// il2cpp: int32_t Projectiles_Rock1Projectile__CalculateDamage (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x4208dc0

int32_t Projectiles_Rock1Projectile__CalculateDamage(Projectiles_Rock1Projectile_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  
  if (g_data_057ad8f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ad8f1 = '\x01';
  }
  pCVar1 = (__this->fields)._owner;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  iVar3 = 100;
  if ((((char)bVar2 != '\0') &&
      (pCVar1 = (__this->fields)._owner, pCVar1 != (Characters_BaseCharacter_o *)0x0)) &&
     (*(char *)((long)&(pCVar1->fields).FeedVictimName + 1) != '\0')) {
    iVar3 = *(int32_t *)((long)&(pCVar1->fields).FeedVictimName + 4);
  }
  return iVar3;
}


// Projectiles.Rock1Projectile$$GetName
// il2cpp: System_String_o* Projectiles_Rock1Projectile__GetName (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x4208e40

System_String_o *
Projectiles_Rock1Projectile__GetName(Projectiles_Rock1Projectile_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_BaseCharacter_o *x;
  Characters_BaseCharacter_o *pCVar2;
  long lVar3;
  GameManagers_InGameManager_o *b;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  UnityEngine_Transform_o *pUVar6;
  System_String_o *extraout_RAX;
  long *plVar7;
  System_String_o *extraout_RAX_00;
  UnityEngine_Object_o *y;
  MethodInfo_3219C40 *method_00;
  uint uVar8;
  MethodInfo *method_01;
  Characters_BaseCharacter_o *__this_04;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o UVar12;
  undefined1 auVar13 [12];
  undefined8 in_stack_ffffffffffffff20;
  System_Collections_Generic_HashSet_T__o *pSVar14;
  float fStack_a0;
  float fStack_9c;
  float fStack_80;
  float fStack_7c;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_60;
  Characters_BaseCharacter_o *pCStack_48;
  
  if (g_data_057ad8f2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Rock");
    il2cpp_runtime_helper_023445d0(&"'s Rock");
    g_data_057ad8f2 = '\x01';
  }
  x = (__this->fields)._owner;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar8 = 0;
  __this_04 = x;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return "Rock";
  }
  pCVar2 = (__this->fields)._owner;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    pSVar5 = System_String__Concat_3ae5ba0
                       (*(System_String_o **)&(pCVar2->fields)._disableKinematicTimeLeft,"'s Rock",
                        (MethodInfo *)0x0);
    return pSVar5;
  }
  fVar9 = (float)il2cpp_runtime_helper_022b2c90();
  pCStack_48 = x;
  if (g_data_057ad8f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_Characters_Human_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&"Rock");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ad8f0 = '\x01';
  }
  pSVar14 = (System_Collections_Generic_HashSet_T__o *)0x0;
  method_00 = *(MethodInfo_3219C40 **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
    method_01 = (MethodInfo *)0x0;
    UVar11 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
    pSVar5 = Projectiles_Rock1Projectile__GetName((Projectiles_Rock1Projectile_o *)__this_04,method_01);
    if (method_00 != (MethodInfo_3219C40 *)0x0) {
      if (((byte)method_00->methodPointer[0x130] < (byte)*(code *)(TypeInfo_InGameManager + 0x130)) ||
         (*(long *)(*(long *)(method_00->methodPointer + 200) + -8 +
                   (ulong)(byte)*(code *)(TypeInfo_InGameManager + 0x130) * 8) != TypeInfo_InGameManager)) goto label_0420928b;
      if ((method_00->field8_0x40).genericMethod != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___GetEnumerator
                  (&SStack_60,(method_00->field8_0x40).genericMethod,MethodInfo_HashSet_1_T_Enumerator_Characters_Human_GetEnumerator);
        fStack_a0 = UVar11.fields.x;
        fStack_9c = UVar11.fields.y;
        method_00 = (MethodInfo_3219C40 *)&stack0xffffffffffffff30;
        pSVar14 = SStack_60.fields._set;
label_042090a0:
        do {
          __this_00.fields._index = uVar8;
          __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff20;
          __this_00.fields._version = (int32_t)fVar9;
          __this_00.fields._current = (Il2CppObject *)pSVar14;
          bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext(__this_00,method_00);
          if ((char)bVar4 == '\0') {
            __this_01.fields._index = uVar8;
            __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff20;
            __this_01.fields._version = (int32_t)fVar9;
            __this_01.fields._current = (Il2CppObject *)pSVar14;
            System_Collections_Generic_HashSet_Enumerator_object___Dispose
                      (__this_01,(MethodInfo_3219C30 *)&stack0xffffffffffffff30);
            return extraout_RAX;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar4 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)SStack_60.fields._current,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
        } while ((char)bVar4 != '\0');
        if ((Characters_BaseCharacter_o *)SStack_60.fields._current != (Characters_BaseCharacter_o *)0x0)
        goto code_r0x042090e4;
        il2cpp_runtime_helper_022b2c90();
        goto label_0420927c;
      }
    }
  }
label_04209286:
  il2cpp_runtime_helper_022b2c90();
label_0420928b:
  auVar13 = il2cpp_runtime_helper_022b2fd0(method_00);
  if (auVar13._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar13._0_8_);
    lVar3 = *plVar7;
    __cxa_end_catch();
    __this_02.fields._index = uVar8;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff20;
    __this_02.fields._version = (int32_t)fVar9;
    __this_02.fields._current = (Il2CppObject *)pSVar14;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff30);
    if (lVar3 == 0) {
      return extraout_RAX_00;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_03.fields._index = uVar8;
  __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff20;
  __this_03.fields._version = (int32_t)fVar9;
  __this_03.fields._current = (Il2CppObject *)pSVar14;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff30);
  _Unwind_Resume(auVar13._0_8_);
code_r0x042090e4:
  if (*(char *)&((Characters_BaseCharacter_Fields *)((long)SStack_60.fields._current + 0x10))->FeedVictimName
      == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)SStack_60.fields._current,y,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      lVar3 = *(long *)&((Characters_BaseCharacter_Fields *)((long)SStack_60.fields._current + 0x10))->Dead;
      if (lVar3 == 0) {
label_0420927c:
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        pUVar6 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          UVar12 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
          if (g_data_057a68cb == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a68cb = '\x01';
            iVar1 = *(int *)(TypeInfo_Math + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_Math + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          fStack_80 = UVar12.fields.x;
          fStack_7c = UVar12.fields.y;
          fVar10 = UVar12.fields.z - UVar11.fields.z;
          fVar10 = (fStack_80 - fStack_a0) * (fStack_80 - fStack_a0) +
                   (fStack_7c - fStack_9c) * (fStack_7c - fStack_9c) + fVar10 * fVar10;
          if (fVar10 < 0.0) {
            fVar10 = sqrtf(fVar10);
            if (fVar9 <= fVar10) goto label_042090a0;
          }
          else if (fVar9 <= SQRT(fVar10)) goto label_042090a0;
          b = (__this_04->fields)._inGameManager;
          if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar4 = GameManagers_TeamInfo__SameTeam_446ffa0
                            ((Characters_BaseCharacter_o *)SStack_60.fields._current,(System_String_o *)b,
                             (MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            (*(((Characters_BaseCharacter_c *)(SStack_60.fields._current)->klass)->vtable)._85_GetHit.
              methodPtr)(SStack_60.fields._current,pSVar5,(ulong)uVar8,"Rock","",
                         (((Characters_BaseCharacter_c *)(SStack_60.fields._current)->klass)->vtable).
                         _85_GetHit.method);
          }
          goto label_042090a0;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      goto label_04209286;
    }
  }
  goto label_042090a0;
}


// Projectiles.Rock1Projectile$$.ctor
// il2cpp: void Projectiles_Rock1Projectile___ctor (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x42093a0

void Projectiles_Rock1Projectile___ctor(Projectiles_SmokeBombProjectile_o *__this,MethodInfo *method)

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


