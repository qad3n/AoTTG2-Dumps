// Type: Projectiles.CannonBallProjectile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Projectiles/CannonBallProjectile.cs
// Prior real C# source (older reference): Assets/Scripts/Projectiles/CannonBallProjectile.cs
// --------------------------------

// Projectiles.CannonBallProjectile$$RegisterObjects
// il2cpp: void Projectiles_CannonBallProjectile__RegisterObjects (Projectiles_CannonBallProjectile_o* __this, const MethodInfo* method);
// 0x4207b90

void Projectiles_CannonBallProjectile__RegisterObjects
               (Projectiles_CannonBallProjectile_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  System_Object_array *pSVar4;
  Characters_BaseCharacter_o *character;
  UI_CharacterInfoHandler_o *b;
  long lVar5;
  bool_conflict bVar6;
  UI_InGameMenu_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_GameObject_o *pUVar9;
  Photon_Pun_PhotonView_o *pPVar10;
  UI_InGameMenu_o *pUVar11;
  UI_InGameMenu_o *__this_00;
  Characters_BaseCharacter_o *a;
  CustomLogic_CustomLogicCollisionHandler_o *__this_01;
  System_String_o *pSVar12;
  UI_EmoteHandler_o *pUVar13;
  UI_InGameMenu_o *__this_02;
  UI_InGameMenu_o *__this_03;
  int32_t damage;
  uint uVar14;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Quaternion_o rotation;
  
  if (g_data_057ad8e8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"CannonBallModel");
    g_data_057ad8e8 = '\x01';
  }
  __this_02 = (UI_InGameMenu_o *)0x0;
  __this_03 = (UI_InGameMenu_o *)__this;
  pUVar7 = (UI_InGameMenu_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar7 != (UI_InGameMenu_o *)0x0) &&
     (__this_02 = "CannonBallModel",
     pUVar8 = UnityEngine_Transform__Find
                        ((UnityEngine_Transform_o *)pUVar7,(System_String_o *)"CannonBallModel",(MethodInfo *)0x0),
     __this_03 = pUVar7, pUVar8 != (UnityEngine_Transform_o *)0x0)) {
    __this_02 = (UI_InGameMenu_o *)0x0;
    pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
    lVar5 = MethodInfo_Void_Add;
    __this_03 = (UI_InGameMenu_o *)(__this->fields)._hideObjects;
    if (__this_03 != (UI_InGameMenu_o *)0x0) {
      piVar1 = (int32_t *)((long)&(__this_03->fields).m_CancellationTokenSource + 4);
      *piVar1 = *piVar1 + 1;
      pSVar4 = (System_Object_array *)(__this_03->fields).m_CachedPtr;
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar14 = *(uint *)&(__this_03->fields).m_CancellationTokenSource;
        if ((uint)pSVar4->max_length <= uVar14) {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)pUVar9,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          return;
        }
        *(uint *)&(__this_03->fields).m_CancellationTokenSource = uVar14 + 1;
        pSVar4->m_Items[(int)uVar14] = (Il2CppObject *)pUVar9;
        il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar14,pUVar9);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"CannonBall");
    g_data_057ad8e9 = '\x01';
  }
  pUVar7 = __this_03;
  pPVar10 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)__this_03,(MethodInfo *)0x0);
  if (pPVar10 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((char)(pPVar10->fields)._IsMine_k__BackingField == '\0') ||
       (*(char *)&(__this_03->fields).TooltipPopup != '\0')) {
      return;
    }
    if ((((__this_02 != (UI_InGameMenu_o *)0x0) &&
         (pUVar7 = __this_02,
         pUVar11 = (UI_InGameMenu_o *)
                   UnityEngine_Collision__get_collider((UnityEngine_Collision_o *)__this_02,(MethodInfo *)0x0)
         , pUVar11 != (UI_InGameMenu_o *)0x0)) &&
        (__this_00 = (UI_InGameMenu_o *)
                     UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0), pUVar7 = pUVar11,
        __this_00 != (UI_InGameMenu_o *)0x0)) &&
       ((pUVar11 = (UI_InGameMenu_o *)
                   UnityEngine_GameObject__get_transform
                             ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0), pUVar7 = __this_00,
        pUVar11 != (UI_InGameMenu_o *)0x0 &&
        (pUVar8 = UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pUVar11,(MethodInfo *)0x0),
        pUVar7 = pUVar11, pUVar8 != (UnityEngine_Transform_o *)0x0)))) {
      a = (Characters_BaseCharacter_o *)
          UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar8,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
      pUVar7 = __this_02;
      pUVar11 = (UI_InGameMenu_o *)
                UnityEngine_Collision__get_collider((UnityEngine_Collision_o *)__this_02,(MethodInfo *)0x0);
      if ((pUVar11 != (UI_InGameMenu_o *)0x0) &&
         (pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0)
         , pUVar7 = pUVar11, pUVar9 != (UnityEngine_GameObject_o *)0x0)) {
        __this_01 = (CustomLogic_CustomLogicCollisionHandler_o *)
                    UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
label_04207ebe:
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
label_04207fc9:
            iVar3 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
          }
          else {
            b = (__this_03->fields).CharacterInfoHandler;
            if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar6 = GameManagers_TeamInfo__SameTeam_446ffa0(a,(System_String_o *)b,(MethodInfo *)0x0);
            if ((char)bVar6 != '\0') goto label_04207fc9;
            pUVar13 = (__this_03->fields).EmoteHandler;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar6 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (((char)bVar6 != '\0') ||
               (pUVar13 = (__this_03->fields).EmoteHandler, pUVar13 == (UI_EmoteHandler_o *)0x0)) {
label_04207f7a:
              pUVar11 = (UI_InGameMenu_o *)
                        UnityEngine_Collision__get_collider
                                  ((UnityEngine_Collision_o *)__this_02,(MethodInfo *)0x0);
              pUVar7 = __this_02;
              if ((pUVar11 == (UI_InGameMenu_o *)0x0) ||
                 (pSVar12 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar11,(MethodInfo *)0x0),
                 pUVar7 = pUVar11, a == (Characters_BaseCharacter_o *)0x0)) goto label_042081b2;
              (*(a->klass->vtable)._85_GetHit.methodPtr)
                        (a,"CannonBall",100,"CannonBall",pSVar12,(a->klass->vtable)._85_GetHit.method);
              goto label_04207fc9;
            }
            bVar2 = (TypeInfo_Human->_2).naturalAligment;
            if (((pUVar13->klass->_2).naturalAligment < bVar2) ||
               ((pUVar13->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Human)) goto label_04207f7a;
            if (g_data_057ad8ea == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
              g_data_057ad8ea = '\x01';
              pUVar13 = (__this_03->fields).EmoteHandler;
            }
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar6 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            uVar14 = 100;
            if ((((char)bVar6 != '\0') &&
                (pUVar13 = (__this_03->fields).EmoteHandler, pUVar13 != (UI_EmoteHandler_o *)0x0)) &&
               (*(char *)((long)&pUVar13[1].fields.m_CachedPtr + 1) != '\0')) {
              uVar14 = *(uint *)((long)&pUVar13[1].fields.m_CachedPtr + 4);
            }
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pUVar7 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if (pUVar7 == (UI_InGameMenu_o *)0x0) goto label_042081b2;
            bVar2 = (TypeInfo_InGameMenu->_2).naturalAligment;
            if (((pUVar7->klass->_2).naturalAligment < bVar2) ||
               ((pUVar7->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_InGameMenu)) goto label_042081b7;
            UI_InGameMenu__ShowKillScore(pUVar7,uVar14,0,(MethodInfo *)0x0);
            pUVar13 = (__this_03->fields).EmoteHandler;
            pUVar11 = (UI_InGameMenu_o *)
                      UnityEngine_Collision__get_collider
                                ((UnityEngine_Collision_o *)__this_02,(MethodInfo *)0x0);
            pUVar7 = __this_02;
            if ((pUVar11 == (UI_InGameMenu_o *)0x0) ||
               (pSVar12 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar11,(MethodInfo *)0x0),
               pUVar7 = pUVar11, a == (Characters_BaseCharacter_o *)0x0)) goto label_042081b2;
            (*(a->klass->vtable)._84_GetHit.methodPtr)
                      (a,pUVar13,(ulong)uVar14,"CannonBall",pSVar12,(a->klass->vtable)._84_GetHit.method);
            iVar3 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
          }
          if (iVar3 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar12 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x70);
          pUVar7 = __this_03;
          pUVar8 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            UVar15 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
            rotation = UnityEngine_Quaternion__LookRotation_4debb20
                                 ((UnityEngine_Vector3_o)
                                  *(UnityEngine_Vector3_Fields *)&(__this_03->fields).HUDBottomHandler,
                                  (MethodInfo *)0x0);
            Effects_EffectSpawner__Spawn
                      (pSVar12,UVar15,rotation,0.5,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
            (*(((System_Collections_Generic_List_object__c *)__this_03->klass)->vtable).
              _17_System_Collections_IEnumerable_GetEnumerator.methodPtr)
                      (__this_03,
                       (((System_Collections_Generic_List_object__c *)__this_03->klass)->vtable).
                       _17_System_Collections_IEnumerable_GetEnumerator.method);
            return;
          }
        }
        else {
          if (g_data_057ad8ea == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ad8ea = '\x01';
          }
          pUVar7 = (UI_InGameMenu_o *)(__this_03->fields).EmoteHandler;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          character = (Characters_BaseCharacter_o *)(__this_03->fields).EmoteHandler;
          if ((char)bVar6 == '\0') {
            damage = 100;
            if (character != (Characters_BaseCharacter_o *)0x0) goto label_04207e6a;
          }
          else if (character != (Characters_BaseCharacter_o *)0x0) {
            if (*(char *)((long)&(character->fields).FeedVictimName + 1) == '\0') {
              damage = 100;
            }
            else {
              damage = *(int32_t *)((long)&(character->fields).FeedVictimName + 4);
            }
label_04207e6a:
            pSVar12 = *(System_String_o **)&(character->fields)._disableKinematicTimeLeft;
            pUVar7 = __this_03;
            pUVar11 = (UI_InGameMenu_o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
            if ((pUVar11 != (UI_InGameMenu_o *)0x0) &&
               (UVar15 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)pUVar11,(MethodInfo *)0x0), pUVar7 = pUVar11,
               __this_01 != (CustomLogic_CustomLogicCollisionHandler_o *)0x0)) {
              CustomLogic_CustomLogicCollisionHandler__GetHit
                        (__this_01,character,pSVar12,damage,"CannonBall",UVar15,(MethodInfo *)0x0);
              goto label_04207ebe;
            }
          }
        }
      }
    }
  }
label_042081b2:
  il2cpp_runtime_helper_022b2c90();
label_042081b7:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad8ea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ad8ea = '\x01';
  }
  pUVar13 = (pUVar7->fields).EmoteHandler;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Object__op_Inequality
            ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Projectiles.CannonBallProjectile$$OnCollisionEnter
// il2cpp: void Projectiles_CannonBallProjectile__OnCollisionEnter (Projectiles_CannonBallProjectile_o* __this, UnityEngine_Collision_o* collision, const MethodInfo* method);
// 0x4207c60

void Projectiles_CannonBallProjectile__OnCollisionEnter
               (Projectiles_CannonBallProjectile_o *__this,UnityEngine_Collision_o *collision,
               MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_EmoteHandler_o *x;
  bool_conflict bVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  UI_InGameMenu_o *pUVar5;
  UI_InGameMenu_o *__this_00;
  UnityEngine_Transform_o *pUVar6;
  Characters_BaseCharacter_o *a;
  UnityEngine_GameObject_o *__this_01;
  CustomLogic_CustomLogicCollisionHandler_o *__this_02;
  System_String_o *pSVar7;
  Characters_BaseCharacter_o *pCVar8;
  UI_InGameMenu_o *__this_03;
  int32_t damage;
  uint score;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Quaternion_o rotation;
  
  if (g_data_057ad8e9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TeamInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"CannonBall");
    g_data_057ad8e9 = '\x01';
  }
  __this_03 = (UI_InGameMenu_o *)__this;
  pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar4 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((char)(pPVar4->fields)._IsMine_k__BackingField == '\0') || ((char)(__this->fields).Disabled != '\0'))
    {
      return;
    }
    if ((((collision != (UnityEngine_Collision_o *)0x0) &&
         (__this_03 = (UI_InGameMenu_o *)collision,
         pUVar5 = (UI_InGameMenu_o *)UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0),
         pUVar5 != (UI_InGameMenu_o *)0x0)) &&
        (__this_00 = (UI_InGameMenu_o *)
                     UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0), __this_03 = pUVar5,
        __this_00 != (UI_InGameMenu_o *)0x0)) &&
       ((pUVar5 = (UI_InGameMenu_o *)
                  UnityEngine_GameObject__get_transform
                            ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0), __this_03 = __this_00,
        pUVar5 != (UI_InGameMenu_o *)0x0 &&
        (pUVar6 = UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pUVar5,(MethodInfo *)0x0),
        __this_03 = pUVar5, pUVar6 != (UnityEngine_Transform_o *)0x0)))) {
      a = (Characters_BaseCharacter_o *)
          UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar6,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
      __this_03 = (UI_InGameMenu_o *)collision;
      pUVar5 = (UI_InGameMenu_o *)UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
      if ((pUVar5 != (UI_InGameMenu_o *)0x0) &&
         (__this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0), __this_03 = pUVar5,
         __this_01 != (UnityEngine_GameObject_o *)0x0)) {
        __this_02 = (CustomLogic_CustomLogicCollisionHandler_o *)
                    UnityEngine_GameObject__GetComponent_object_(__this_01,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
label_04207ebe:
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
label_04207fc9:
            iVar2 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
          }
          else {
            pSVar7 = (__this->fields)._team;
            if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar3 = GameManagers_TeamInfo__SameTeam_446ffa0(a,pSVar7,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') goto label_04207fc9;
            pCVar8 = (__this->fields)._owner;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar3 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (((char)bVar3 != '\0') ||
               (pCVar8 = (__this->fields)._owner, pCVar8 == (Characters_BaseCharacter_o *)0x0)) {
label_04207f7a:
              pUVar5 = (UI_InGameMenu_o *)UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
              __this_03 = (UI_InGameMenu_o *)collision;
              if ((pUVar5 == (UI_InGameMenu_o *)0x0) ||
                 (pSVar7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar5,(MethodInfo *)0x0),
                 __this_03 = pUVar5, a == (Characters_BaseCharacter_o *)0x0)) goto label_042081b2;
              (*(a->klass->vtable)._85_GetHit.methodPtr)
                        (a,"CannonBall",100,"CannonBall",pSVar7,(a->klass->vtable)._85_GetHit.method);
              goto label_04207fc9;
            }
            bVar1 = (TypeInfo_Human->_2).naturalAligment;
            if (((pCVar8->klass->_2).naturalAligment < bVar1) ||
               ((pCVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Human)) goto label_04207f7a;
            if (g_data_057ad8ea == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
              g_data_057ad8ea = '\x01';
              pCVar8 = (__this->fields)._owner;
            }
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar3 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            score = 100;
            if ((((char)bVar3 != '\0') &&
                (pCVar8 = (__this->fields)._owner, pCVar8 != (Characters_BaseCharacter_o *)0x0)) &&
               (*(char *)((long)&(pCVar8->fields).FeedVictimName + 1) != '\0')) {
              score = *(uint *)((long)&(pCVar8->fields).FeedVictimName + 4);
            }
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            __this_03 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if (__this_03 == (UI_InGameMenu_o *)0x0) goto label_042081b2;
            bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
            if (((__this_03->klass->_2).naturalAligment < bVar1) ||
               ((__this_03->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) goto label_042081b7;
            UI_InGameMenu__ShowKillScore(__this_03,score,0,(MethodInfo *)0x0);
            pCVar8 = (__this->fields)._owner;
            pUVar5 = (UI_InGameMenu_o *)UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
            __this_03 = (UI_InGameMenu_o *)collision;
            if ((pUVar5 == (UI_InGameMenu_o *)0x0) ||
               (pSVar7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar5,(MethodInfo *)0x0),
               __this_03 = pUVar5, a == (Characters_BaseCharacter_o *)0x0)) goto label_042081b2;
            (*(a->klass->vtable)._84_GetHit.methodPtr)
                      (a,pCVar8,(ulong)score,"CannonBall",pSVar7,(a->klass->vtable)._84_GetHit.method);
            iVar2 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
          }
          if (iVar2 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x70);
          __this_03 = (UI_InGameMenu_o *)__this;
          pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
            UVar9 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
            rotation = UnityEngine_Quaternion__LookRotation_4debb20
                                 ((UnityEngine_Vector3_o)(__this->fields)._velocity.fields,(MethodInfo *)0x0);
            Effects_EffectSpawner__Spawn
                      (pSVar7,UVar9,rotation,0.5,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
            (*(__this->klass->vtable)._17_DestroySelf.methodPtr)
                      (__this,(__this->klass->vtable)._17_DestroySelf.method);
            return;
          }
        }
        else {
          if (g_data_057ad8ea == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ad8ea = '\x01';
          }
          __this_03 = (UI_InGameMenu_o *)(__this->fields)._owner;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          pCVar8 = (__this->fields)._owner;
          if ((char)bVar3 == '\0') {
            damage = 100;
            if (pCVar8 != (Characters_BaseCharacter_o *)0x0) goto label_04207e6a;
          }
          else if (pCVar8 != (Characters_BaseCharacter_o *)0x0) {
            if (*(char *)((long)&(pCVar8->fields).FeedVictimName + 1) == '\0') {
              damage = 100;
            }
            else {
              damage = *(int32_t *)((long)&(pCVar8->fields).FeedVictimName + 4);
            }
label_04207e6a:
            pSVar7 = *(System_String_o **)&(pCVar8->fields)._disableKinematicTimeLeft;
            __this_03 = (UI_InGameMenu_o *)__this;
            pUVar5 = (UI_InGameMenu_o *)
                     UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            if ((pUVar5 != (UI_InGameMenu_o *)0x0) &&
               (UVar9 = UnityEngine_Transform__get_position
                                  ((UnityEngine_Transform_o *)pUVar5,(MethodInfo *)0x0), __this_03 = pUVar5,
               __this_02 != (CustomLogic_CustomLogicCollisionHandler_o *)0x0)) {
              CustomLogic_CustomLogicCollisionHandler__GetHit
                        (__this_02,pCVar8,pSVar7,damage,"CannonBall",UVar9,(MethodInfo *)0x0);
              goto label_04207ebe;
            }
          }
        }
      }
    }
  }
label_042081b2:
  il2cpp_runtime_helper_022b2c90();
label_042081b7:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ad8ea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ad8ea = '\x01';
  }
  x = (__this_03->fields).EmoteHandler;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Projectiles.CannonBallProjectile$$CalculateDamage
// il2cpp: int32_t Projectiles_CannonBallProjectile__CalculateDamage (Projectiles_CannonBallProjectile_o* __this, const MethodInfo* method);
// 0x42081c0

int32_t Projectiles_CannonBallProjectile__CalculateDamage
                  (Projectiles_CannonBallProjectile_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  
  if (g_data_057ad8ea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ad8ea = '\x01';
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


// Projectiles.CannonBallProjectile$$.ctor
// il2cpp: void Projectiles_CannonBallProjectile___ctor (Projectiles_CannonBallProjectile_o* __this, const MethodInfo* method);
// 0x4208240

void Projectiles_CannonBallProjectile___ctor(Projectiles_SmokeBombProjectile_o *__this,MethodInfo *method)

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


