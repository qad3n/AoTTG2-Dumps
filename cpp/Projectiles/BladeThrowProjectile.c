// Type: Projectiles.BladeThrowProjectile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Projectiles/BladeThrowProjectile.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Projectiles/BladeThrowProjectile.cs  [CHANGED since prior version]
// --------------------------------

// Projectiles.BladeThrowProjectile$$get_DestroyDelay
// il2cpp: float Projectiles_BladeThrowProjectile__get_DestroyDelay (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x3f16d00

float Projectiles_BladeThrowProjectile__get_DestroyDelay
                (Projectiles_BladeThrowProjectile_o *__this,MethodInfo *method)

{
  return 1.5;
}


// Projectiles.BladeThrowProjectile$$Awake
// il2cpp: void Projectiles_BladeThrowProjectile__Awake (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x3f16d10

void Projectiles_BladeThrowProjectile__Awake
               (Projectiles_BladeThrowProjectile_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  MeleeWeaponTrail_o *pMVar4;
  MeleeWeaponTrail_o **ppMVar5;
  
  if (DAT_05703cc0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWea);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"Blade");
    il2cpp_init_method_metadata(&"Model");
    DAT_05703cc0 = '\x01';
  }
  Characters_BaseMovementSync__Awake((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"Blade",(MethodInfo *)0x0);
    (__this->fields)._blade = pUVar2;
    il2cpp_runtime_glue(&(__this->fields)._blade,pUVar2);
    pUVar2 = (__this->fields)._blade;
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__Find(pUVar2,"Model",(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
        (__this->fields)._model = pUVar3;
        il2cpp_runtime_glue(&(__this->fields)._model,pUVar3);
        pMVar4 = (MeleeWeaponTrail_o *)
                 UnityEngine_Component__GetComponentInChildren<object>
                           ((UnityEngine_Component_o *)__this,MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWea);
        (__this->fields).WeaponTrail = pMVar4;
        ppMVar5 = &(__this->fields).WeaponTrail;
        il2cpp_runtime_glue(ppMVar5,pMVar4);
        lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
        if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0xa0), lVar1 != 0)) &&
           (pMVar4 = *ppMVar5, pMVar4 != (MeleeWeaponTrail_o *)0x0)) {
          *(bool *)&(pMVar4->fields)._emit = *(int *)(lVar1 + 0x14) != 0;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.BladeThrowProjectile$$Start
// il2cpp: void Projectiles_BladeThrowProjectile__Start (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x3f16e60

void Projectiles_BladeThrowProjectile__Start
               (Projectiles_BladeThrowProjectile_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  long lVar3;
  MeleeWeaponTrail_o *__this_00;
  bool_conflict bVar4;
  
  if (DAT_05703cc1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703cc1 = '\x01';
  }
  pCVar2 = (__this->fields)._owner;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar4 != '\0') &&
     (pCVar2 = (__this->fields)._owner, pCVar2 != (Characters_BaseCharacter_o *)0x0)) {
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if ((bVar1 <= (pCVar2->klass->_2).naturalAligment) &&
       ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
      bVar4 = Characters_BaseCharacter__IsMine(pCVar2,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pCVar2 = (__this->fields)._owner;
        if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
          bVar1 = (TypeInfo_Human->_2).naturalAligment;
          if (((pCVar2->klass->_2).naturalAligment < bVar1) ||
             ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Human)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume();
          }
          lVar3 = *(long *)&pCVar2[1].fields.FootstepsEnabled;
          if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x178), lVar3 != 0)) &&
             (__this_00 = (__this->fields).WeaponTrail, __this_00 != (MeleeWeaponTrail_o *)0x0)) {
            MeleeWeaponTrail__SetMaterial
                      (__this_00,*(UnityEngine_Material_o **)(lVar3 + 0x28),(MethodInfo *)0x0);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  return;
}


// Projectiles.BladeThrowProjectile$$RegisterObjects
// il2cpp: void Projectiles_BladeThrowProjectile__RegisterObjects (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x3f16f80

void Projectiles_BladeThrowProjectile__RegisterObjects
               (Projectiles_BladeThrowProjectile_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_o *item;
  UnityEngine_GameObject_array *pUVar3;
  long lVar4;
  
  if (DAT_05703cc2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_05703cc2 = '\x01';
  }
  lVar4 = MethodInfo_Void_Add;
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
        il2cpp_runtime_glue(pUVar3->m_Items + (int)uVar2);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.BladeThrowProjectile$$DisableRPC
// il2cpp: void Projectiles_BladeThrowProjectile__DisableRPC (Projectiles_BladeThrowProjectile_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f17010

void Projectiles_BladeThrowProjectile__DisableRPC
               (Projectiles_BladeThrowProjectile_o *__this,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  MethodInfo *method_00;
  
  if ((char)(__this->fields).Disabled == '\0') {
    method_00 = (MethodInfo *)0x0;
    pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
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
// 0x3f17060

void Projectiles_BladeThrowProjectile__OnCollisionEnter
               (Projectiles_BladeThrowProjectile_o *__this,UnityEngine_Collision_o *collision,
               MethodInfo *method)

{
  byte bVar1;
  bool_conflict bVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  UnityEngine_Collider_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  Characters_BaseCharacter_o *a;
  UnityEngine_AudioSource_o *__this_00;
  MethodInfo *method_00;
  System_String_o *pSVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Quaternion_o UVar11;
  float local_3c;
  undefined8 local_38;
  
  if (DAT_05703cc3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseTitan);
    il2cpp_init_method_metadata(&MethodInfo_AudioSource_GetComponent_AudioSource);
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    il2cpp_init_method_metadata(&"BladeHit");
    DAT_05703cc3 = '\x01';
  }
  pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar3 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03f17366;
  if (((char)(pPVar3->fields)._IsMine_k__BackingField == '\0') ||
     ((char)(__this->fields).Disabled != '\0')) {
    return;
  }
  if (collision == (UnityEngine_Collision_o *)0x0) goto LAB_03f17366;
  pUVar4 = UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_Collider_o *)0x0) goto LAB_03f17366;
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0)
  ;
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_03f17366;
  pUVar5 = UnityEngine_Transform__get_root(pUVar5,(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_03f17366;
  a = (Characters_BaseCharacter_o *)
      UnityEngine_Component__GetComponent<object>((UnityEngine_Component_o *)pUVar5,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pSVar6 = (__this->fields)._team;
    if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = GameManagers_TeamInfo__SameTeam(a,pSVar6,(MethodInfo *)0x0);
    if (((char)bVar2 == '\0') && (a != (Characters_BaseCharacter_o *)0x0)) {
      bVar1 = (TypeInfo_BaseTitan->_2).naturalAligment;
      if ((bVar1 <= (a->klass->_2).naturalAligment) &&
         ((a->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseTitan)) {
        if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x18);
        pUVar5 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_03f17366;
        UVar10 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
        local_3c = UVar10.fields.z;
        local_38 = UVar10.fields._0_8_;
        UVar11 = UnityEngine_Quaternion__Internal_FromEulerRad
                           ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0);
        uVar9 = UVar11.fields._8_8_;
        fVar7 = UVar11.fields.x;
        fVar8 = UVar11.fields.y;
        goto LAB_03f171eb;
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb0);
    pUVar5 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_03f17366;
    UVar10 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
    local_3c = UVar10.fields.z;
    local_38 = UVar10.fields._0_8_;
    UVar11 = UnityEngine_Quaternion__LookRotation
                       ((UnityEngine_Vector3_o)(__this->fields)._velocity.fields,(MethodInfo *)0x0);
    uVar9 = UVar11.fields._8_8_;
    fVar7 = UVar11.fields.x;
    fVar8 = UVar11.fields.y;
LAB_03f171eb:
    UVar11.fields.y = fVar8;
    UVar11.fields.x = fVar7;
    UVar10.fields.z = local_3c;
    UVar10.fields.x = (float)(undefined4)local_38;
    UVar10.fields.y = (float)local_38._4_4_;
    UVar11.fields.z = (float)(int)uVar9;
    UVar11.fields.w = (float)(int)((ulong)uVar9 >> 0x20);
    Effects_EffectSpawner__Spawn
              (pSVar6,UVar10,UVar11,1.0,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
  }
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
    pUVar5 = UnityEngine_Transform__Find(pUVar5,"BladeHit",(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      __this_00 = (UnityEngine_AudioSource_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)pUVar5,MethodInfo_AudioSource_GetComponent_AudioSource);
      if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
        UnityEngine_AudioSource__Play(__this_00,(MethodInfo *)0x0);
        pUVar4 = UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
        Projectiles_BladeThrowProjectile__CheckHurtboxes(__this,pUVar4,method_00);
        (*(__this->klass->vtable)._17_DestroySelf.methodPtr)
                  (__this,(__this->klass->vtable)._17_DestroySelf.method);
        return;
      }
    }
  }
LAB_03f17366:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.BladeThrowProjectile$$CheckHurtboxes
// il2cpp: void Projectiles_BladeThrowProjectile__CheckHurtboxes (Projectiles_BladeThrowProjectile_o* __this, UnityEngine_Collider_o* firstCollider, const MethodInfo* method);
// 0x3f17370

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
  System_DelegateData_o *y;
  System_Delegate_array *__this_00;
  UI_InGameMenu_o *pUVar11;
  Cameras_InGameCamera_o *pCVar12;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  UnityEngine_Object_o *x;
  char cVar13;
  UnityEngine_LayerMask_o mask;
  int32_t layerMask;
  bool_conflict bVar14;
  uint uVar15;
  UnityEngine_SphereCollider_o *__this_03;
  UnityEngine_Transform_o *pUVar16;
  System_Int32_array *layers;
  UnityEngine_Collider_array *collection;
  System_Collections_Generic_List_object__o *__this_04;
  UnityEngine_GameObject_o *pUVar17;
  Characters_BaseCharacter_o *pCVar18;
  CustomLogic_CustomLogicCollisionHandler_o *__this_05;
  System_String_o *pSVar19;
  long *plVar20;
  UnityEngine_AudioSource_o *__this_06;
  MethodInfo *method_00;
  float fVar21;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar22;
  undefined8 uVar23;
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_o position;
  UnityEngine_Quaternion_o rotation;
  undefined1 in_stack_ffffffffffffff48 [12];
  float in_stack_ffffffffffffff5c;
  _union_247328 local_88;
  undefined8 uStack_80;
  UnityEngine_Object_o *local_78;
  undefined1 local_68 [16];
  float local_58;
  _union_247328 local_48;
  undefined8 uStack_40;
  UnityEngine_Object_o *local_38;
  
  if (DAT_05703cc4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseTitan);
    il2cpp_init_method_metadata(&TypeInfo_CharacterData);
    il2cpp_init_method_metadata(&MethodInfo_AudioSource_GetComponent_AudioSource);
    il2cpp_init_method_metadata(&MethodInfo_SphereCollider_GetComponent_SphereCollider);
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Collider_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomL);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_Collider__GetEn);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Collider);
    il2cpp_init_method_metadata(&TypeInfo_List_Collider);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"BladeThrow");
    il2cpp_init_method_metadata(&"Blade");
    il2cpp_init_method_metadata(&"RestrictAngle");
    il2cpp_init_method_metadata(&"BladeHitNape");
    DAT_05703cc4 = '\x01';
  }
  local_88.genericMethod = (void *)0x0;
  uStack_80 = 0;
  local_78 = (UnityEngine_Object_o *)0x0;
  __this_03 = (UnityEngine_SphereCollider_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)__this,MethodInfo_SphereCollider_GetComponent_SphereCollider);
  if (__this_03 != (UnityEngine_SphereCollider_o *)0x0) {
    fVar21 = UnityEngine_SphereCollider__get_radius(__this_03,(MethodInfo *)0x0);
    pUVar16 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
      UVar24 = UnityEngine_Transform__get_lossyScale(pUVar16,(MethodInfo *)0x0);
      local_68._8_4_ = extraout_XMM0_Dc;
      local_68._0_8_ = UVar24.fields._0_8_;
      local_68._12_4_ = extraout_XMM0_Dd;
      pUVar16 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar16 != (UnityEngine_Transform_o *)0x0) {
        UVar24 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
        fVar22 = UVar24.fields.z;
        layers = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
        if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (layers != (System_Int32_array *)0x0) {
          iVar5 = (int)layers->max_length;
          if (iVar5 != 0) {
            lVar6 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
            layers->m_Items[0] = *(int32_t *)(lVar6 + 0x18);
            if (iVar5 != 1) {
              fVar21 = fVar21 * (float)local_68._0_4_ * 1.3;
              layers->m_Items[1] = *(int32_t *)(lVar6 + 0xc);
              mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
              layerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
                il2cpp_init_class();
              }
              position.fields.z = fVar22;
              position.fields.x = (float)(int)UVar24.fields._0_8_;
              position.fields.y = (float)(int)((ulong)UVar24.fields._0_8_ >> 0x20);
              collection = UnityEngine_Physics__OverlapSphere
                                     (position,fVar21,layerMask,(MethodInfo *)0x0);
              __this_04 = (System_Collections_Generic_List_object__o *)
                          il2cpp_runtime_glue(TypeInfo_List_Collider);
              System_Collections_Generic_List<object>___ctor
                        (__this_04,(System_Collections_Generic_IEnumerable_T__o *)collection,
                         MethodInfo_List_1_UnityEngine_Collider);
              if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
                bVar14 = System_Collections_Generic_List<object>__Contains
                                   (__this_04,(Il2CppObject *)firstCollider,MethodInfo_Boolean_Contains);
                lVar6 = MethodInfo_Void_Add;
                if ((char)bVar14 == '\0') {
                  piVar1 = &(__this_04->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar7 = (__this_04->fields)._items;
                  if (pSVar7 == (System_Object_array *)0x0) goto LAB_03f1800e;
                  uVar15 = (__this_04->fields)._size;
                  if (uVar15 < (uint)pSVar7->max_length) {
                    (__this_04->fields)._size = uVar15 + 1;
                    pSVar7->m_Items[(int)uVar15] = (Il2CppObject *)firstCollider;
                    il2cpp_runtime_glue(pSVar7->m_Items + (int)uVar15,firstCollider);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              (__this_04,(Il2CppObject *)firstCollider,
                               *(MethodInfo_35A7350 **)
                                (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                  }
                }
                System_Collections_Generic_List<object>__GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)&local_48,__this_04,
                           MethodInfo_List_1_T__Enumerator_UnityEngine_Collider__GetEn);
                local_78 = local_38;
                local_88 = local_48;
                uStack_80 = uStack_40;
LAB_03f17720:
                do {
                  do {
                    do {
                      do {
                        do {
                          while( true ) {
                            __this_01.fields._version = (int32_t)fVar22;
                            __this_01.fields._list =
                                 (System_Collections_Generic_List_T__o *)
                                 in_stack_ffffffffffffff48._0_8_;
                            __this_01.fields._index = in_stack_ffffffffffffff48._8_4_;
                            __this_01.fields._current._0_4_ = fVar21;
                            __this_01.fields._current._4_4_ = in_stack_ffffffffffffff5c;
                            bVar14 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                               (__this_01,(MethodInfo_3185E20 *)&local_88);
                            x = local_78;
                            if ((char)bVar14 == '\0') {
                              __this_02.fields._version = (int32_t)fVar22;
                              __this_02.fields._list =
                                   (System_Collections_Generic_List_T__o *)
                                   in_stack_ffffffffffffff48._0_8_;
                              __this_02.fields._index = in_stack_ffffffffffffff48._8_4_;
                              __this_02.fields._current._0_4_ = fVar21;
                              __this_02.fields._current._4_4_ = in_stack_ffffffffffffff5c;
                              System_Collections_Generic_List_Enumerator<object>__Dispose
                                        (__this_02,(MethodInfo_3185E10 *)&local_88);
                              return;
                            }
                            if (local_78 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            pUVar16 = UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)local_78,
                                                 (MethodInfo *)0x0);
                            if (pUVar16 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            pUVar16 = UnityEngine_Transform__get_root(pUVar16,(MethodInfo *)0x0);
                            if (pUVar16 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            pUVar17 = UnityEngine_Component__get_gameObject
                                                ((UnityEngine_Component_o *)pUVar16,
                                                 (MethodInfo *)0x0);
                            if (pUVar17 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            pCVar18 = (Characters_BaseCharacter_o *)
                                      UnityEngine_GameObject__GetComponent<object>
                                                (pUVar17,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
                            pUVar17 = UnityEngine_Component__get_gameObject
                                                ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
                            if (pUVar17 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            method_00 = MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomL;
                            __this_05 = (CustomLogic_CustomLogicCollisionHandler_o *)
                                        UnityEngine_GameObject__GetComponent<object>
                                                  (pUVar17,(MethodInfo_24F0F80 *)MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomL);
                            uVar15 = Projectiles_BladeThrowProjectile__CalculateDamage
                                               (__this,method_00);
                            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                              il2cpp_init_class();
                            }
                            bVar14 = UnityEngine_Object__op_Inequality
                                               ((UnityEngine_Object_o *)__this_05,
                                                (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                            if ((char)bVar14 == '\0') break;
                            pCVar18 = (__this->fields)._owner;
                            if (pCVar18 == (Characters_BaseCharacter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            pSVar19 = *(System_String_o **)
                                       &(pCVar18->fields)._disableKinematicTimeLeft;
                            pUVar16 = UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0
                                                );
                            if (pUVar16 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            UVar24 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                            if (__this_05 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            CustomLogic_CustomLogicCollisionHandler__GetHit
                                      (__this_05,pCVar18,pSVar19,uVar15,"BladeThrow",UVar24,
                                       (MethodInfo *)0x0);
                          }
                          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          bVar14 = UnityEngine_Object__op_Equality
                                             ((UnityEngine_Object_o *)pCVar18,
                                              (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                        } while ((char)bVar14 != '\0');
                        pCVar8 = (__this->fields)._owner;
                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                          il2cpp_init_class();
                        }
                        bVar14 = UnityEngine_Object__op_Equality
                                           ((UnityEngine_Object_o *)pCVar18,
                                            (UnityEngine_Object_o *)pCVar8,(MethodInfo *)0x0);
                      } while ((char)bVar14 != '\0');
                      pSVar19 = (__this->fields)._team;
                      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      bVar14 = GameManagers_TeamInfo__SameTeam(pCVar18,pSVar19,(MethodInfo *)0x0);
                    } while ((char)bVar14 != '\0');
                    if (pCVar18 == (Characters_BaseCharacter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                  } while (*(char *)&(pCVar18->fields).FeedVictimName != '\0');
                  bVar4 = (TypeInfo_BaseTitan->_2).naturalAligment;
                  if (((pCVar18->klass->_2).naturalAligment < bVar4) ||
                     ((pCVar18->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BaseTitan)) {
                    pCVar8 = (__this->fields)._owner;
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    bVar14 = UnityEngine_Object__op_Inequality
                                       ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,
                                        (MethodInfo *)0x0);
                    if (((char)bVar14 != '\0') &&
                       (pCVar8 = (__this->fields)._owner,
                       pCVar8 != (Characters_BaseCharacter_o *)0x0)) {
                      pCVar9 = pCVar8->klass;
                      bVar4 = (TypeInfo_Human->_2).naturalAligment;
                      if ((bVar4 <= (pCVar9->_2).naturalAligment) &&
                         ((pCVar9->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_Human)) {
                        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                          il2cpp_init_class();
                        }
                        pUVar11 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                        if (pUVar11 == (UI_InGameMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                          il2cpp_raise_exception();
                        }
                        bVar4 = (TypeInfo_InGameMenu->_2).naturalAligment;
                        if (((pUVar11->klass->_2).naturalAligment < bVar4) ||
                           ((pUVar11->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_InGameMenu)) {
                    /* WARNING: Subroutine does not return */
                          il2cpp_unwind_resume();
                        }
                        UI_InGameMenu__ShowKillScore(pUVar11,uVar15,0,(MethodInfo *)0x0);
                        pCVar8 = (__this->fields)._owner;
                        pSVar19 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                        (*(pCVar18->klass->vtable)._84_GetHit.methodPtr)
                                  (pCVar18,pCVar8,(ulong)uVar15,"BladeThrow",pSVar19);
                        lVar6 = *(long *)&(pCVar18->fields).Dead;
                        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                          il2cpp_raise_exception();
                        }
                        pUVar16 = *(UnityEngine_Transform_o **)(lVar6 + 0x10);
                        if (pUVar16 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                          il2cpp_raise_exception();
                        }
                        pCVar12 = *(Cameras_InGameCamera_o **)
                                   (*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                        UVar24 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                        if (pCVar12 == (Cameras_InGameCamera_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                          il2cpp_raise_exception();
                        }
                        bVar4 = (TypeInfo_InGameCamera->_2).naturalAligment;
                        if (((pCVar12->klass->_2).naturalAligment < bVar4) ||
                           ((pCVar12->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_InGameCamera)) {
                    /* WARNING: Subroutine does not return */
                          il2cpp_unwind_resume(pCVar12);
                        }
                        Cameras_InGameCamera__TakeSnapshot(pCVar12,UVar24,uVar15,(MethodInfo *)0x0);
                        goto LAB_03f17720;
                      }
                    }
                    pSVar19 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                    (*(pCVar18->klass->vtable)._85_GetHit.methodPtr)
                              (pCVar18,"Blade",100,"BladeThrow",pSVar19);
                    goto LAB_03f17720;
                  }
                } while ((char)(pCVar18->fields).CustomDamage == '\0');
                pUVar16 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                if (pUVar16 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                UVar24 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                fVar21 = UVar24.fields.x;
                in_stack_ffffffffffffff5c = UVar24.fields.y;
                uVar2 = (__this->fields)._velocity.fields.x;
                uVar3 = (__this->fields)._velocity.fields.y;
                local_68._4_4_ = uVar3;
                local_68._0_4_ = uVar2;
                local_68._8_8_ = 0;
                fVar22 = (__this->fields)._velocity.fields.z;
                local_58 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
                pSVar10 = (pCVar18->fields).OnPlayerPropertiesChanged;
                if (pSVar10 == (System_Action_Hashtable__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                y = (pSVar10->fields).data;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar14 = UnityEngine_Object__op_Equality
                                   (x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
                if ((char)bVar14 != '\0') {
                  if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  plVar20 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
                  if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  plVar20 = (long *)(**(code **)(*plVar20 + 0x1a8))
                                              (plVar20,"Blade",
                                               *(undefined8 *)(*plVar20 + 0x1b0));
                  if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  plVar20 = (long *)(**(code **)(*plVar20 + 0x1a8))
                                              (plVar20,"RestrictAngle",
                                               *(undefined8 *)(*plVar20 + 0x1b0));
                  if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  uVar23 = (**(code **)(*plVar20 + 0x388))
                                     (plVar20,*(undefined8 *)(*plVar20 + 0x390));
                  cVar13 = (*(code *)pCVar18->klass[1].vtable._44_OnJoinRandomFailed.method)
                                     (fVar21 - ((float)local_68._0_4_ * local_58 +
                                               (float)local_68._0_4_ * local_58),
                                      UVar24.fields.z - (fVar22 * local_58 + fVar22 * local_58),
                                      uVar23,pCVar18);
                  if (cVar13 == '\0') goto LAB_03f17720;
                  pCVar8 = (__this->fields)._owner;
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  bVar14 = UnityEngine_Object__op_Inequality
                                     ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,
                                      (MethodInfo *)0x0);
                  if (((char)bVar14 != '\0') &&
                     (pCVar8 = (__this->fields)._owner, pCVar8 != (Characters_BaseCharacter_o *)0x0)
                     ) {
                    pCVar9 = pCVar8->klass;
                    bVar4 = (TypeInfo_Human->_2).naturalAligment;
                    if ((bVar4 <= (pCVar9->_2).naturalAligment) &&
                       ((pCVar9->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_Human)) {
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      pUVar11 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                      if (pUVar11 == (UI_InGameMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      bVar4 = (TypeInfo_InGameMenu->_2).naturalAligment;
                      if (((pUVar11->klass->_2).naturalAligment < bVar4) ||
                         ((pUVar11->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_InGameMenu)) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_unwind_resume();
                      }
                      UI_InGameMenu__ShowKillScore(pUVar11,uVar15,0,(MethodInfo *)0x0);
                      pSVar10 = (pCVar18->fields).OnPlayerPropertiesChanged;
                      if (pSVar10 == (System_Action_Hashtable__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      pUVar16 = (UnityEngine_Transform_o *)(pSVar10->fields).method_code;
                      if (pUVar16 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      pCVar12 = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
                      UVar24 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                      if (pCVar12 == (Cameras_InGameCamera_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      bVar4 = (TypeInfo_InGameCamera->_2).naturalAligment;
                      if (((pCVar12->klass->_2).naturalAligment < bVar4) ||
                         ((pCVar12->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_InGameCamera)) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_unwind_resume(pCVar12);
                      }
                      Cameras_InGameCamera__TakeSnapshot(pCVar12,UVar24,uVar15,(MethodInfo *)0x0);
                    }
                  }
                  pUVar16 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  if (pUVar16 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pUVar16 = UnityEngine_Transform__Find(pUVar16,"BladeHitNape",(MethodInfo *)0x0);
                  if (pUVar16 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  __this_06 = (UnityEngine_AudioSource_o *)
                              UnityEngine_Component__GetComponent<object>
                                        ((UnityEngine_Component_o *)pUVar16,MethodInfo_AudioSource_GetComponent_AudioSource);
                  if (__this_06 == (UnityEngine_AudioSource_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  UnityEngine_AudioSource__Play(__this_06,(MethodInfo *)0x0);
                }
                pSVar10 = (pCVar18->fields).OnPlayerPropertiesChanged;
                if (pSVar10 == (System_Action_Hashtable__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                __this_00 = pSVar10[1].fields.delegates;
                if (__this_00 == (System_Delegate_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                bVar14 = System_Collections_Generic_List<object>__Contains
                                   ((System_Collections_Generic_List_object__o *)__this_00,
                                    (Il2CppObject *)x,MethodInfo_Boolean_Contains);
                if ((char)bVar14 != '\0') {
                  if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pSVar19 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x38);
                  pUVar16 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  if (pUVar16 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  UVar24 = UnityEngine_Transform__get_position(pUVar16,(MethodInfo *)0x0);
                  fVar21 = UVar24.fields.x;
                  in_stack_ffffffffffffff5c = UVar24.fields.y;
                  rotation = UnityEngine_Quaternion__Internal_FromEulerRad
                                       ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0
                                       );
                  UVar24.fields.y = in_stack_ffffffffffffff5c;
                  UVar24.fields.x = fVar21;
                  Effects_EffectSpawner__Spawn
                            (pSVar19,UVar24,rotation,1.0,1,(System_Object_array *)0x0,
                             (MethodInfo *)0x0);
                  pCVar8 = (__this->fields)._owner;
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  bVar14 = UnityEngine_Object__op_Equality
                                     ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,
                                      (MethodInfo *)0x0);
                  if (((char)bVar14 == '\0') &&
                     (pCVar8 = (__this->fields)._owner, pCVar8 != (Characters_BaseCharacter_o *)0x0)
                     ) {
                    bVar4 = (TypeInfo_Human->_2).naturalAligment;
                    if ((bVar4 <= (pCVar8->klass->_2).naturalAligment) &&
                       ((pCVar8->klass->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_Human)) {
                      pSVar19 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                      (*(pCVar18->klass->vtable)._84_GetHit.methodPtr)
                                (pCVar18,pCVar8,(ulong)uVar15,"BladeThrow",pSVar19);
                      goto LAB_03f17720;
                    }
                  }
                  pSVar19 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                  (*(pCVar18->klass->vtable)._85_GetHit.methodPtr)
                            (pCVar18,"Blade",100,"BladeThrow",pSVar19);
                }
                goto LAB_03f17720;
              }
              goto LAB_03f1800e;
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
  }
LAB_03f1800e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.BladeThrowProjectile$$CalculateDamage
// il2cpp: int32_t Projectiles_BladeThrowProjectile__CalculateDamage (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x3f18630

int32_t Projectiles_BladeThrowProjectile__CalculateDamage
                  (Projectiles_BladeThrowProjectile_o *__this,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  Characters_BaseCharacter_o *pCVar3;
  int iVar4;
  bool_conflict bVar5;
  long *plVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  if (DAT_05703cc5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterData);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Blade");
    il2cpp_init_method_metadata(&"DamageMultiplier");
    DAT_05703cc5 = '\x01';
  }
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
  }
  fVar8 = (__this->fields).InitialPlayerVelocity.fields.x;
  fVar9 = (__this->fields).InitialPlayerVelocity.fields.y;
  fVar1 = (__this->fields).InitialPlayerVelocity.fields.z;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar8 = fVar1 * fVar1 + fVar9 * fVar9 + fVar8 * fVar8;
  if (fVar8 < 0.0) {
    fVar8 = sqrtf(fVar8);
  }
  else {
    fVar8 = SQRT(fVar8);
  }
  if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
    il2cpp_init_class();
  }
  plVar6 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
  if (plVar6 != (long *)0x0) {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))
                               (plVar6,"Blade",*(undefined8 *)(*plVar6 + 0x1b0));
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))
                                 (plVar6,"DamageMultiplier",*(undefined8 *)(*plVar6 + 0x1b0));
      if (plVar6 != (long *)0x0) {
        fVar9 = (float)(**(code **)(*plVar6 + 0x388))(plVar6);
        iVar4 = (int)(fVar8 * 10.0 * fVar9);
        iVar7 = 10;
        if (9 < iVar4) {
          iVar7 = iVar4;
        }
        pCVar3 = (__this->fields)._owner;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (((char)bVar5 != '\0') &&
           (pCVar3 = (__this->fields)._owner, pCVar3 != (Characters_BaseCharacter_o *)0x0)) {
          bVar2 = (TypeInfo_Human->_2).naturalAligment;
          if ((bVar2 <= (pCVar3->klass->_2).naturalAligment) &&
             (((pCVar3->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_Human &&
              (*(char *)((long)&(pCVar3->fields).FeedVictimName + 1) != '\0')))) {
            iVar7 = *(int *)((long)&(pCVar3->fields).FeedVictimName + 4);
          }
        }
        return iVar7;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.BladeThrowProjectile$$Update
// il2cpp: void Projectiles_BladeThrowProjectile__Update (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x3f18860

void Projectiles_BladeThrowProjectile__Update
               (Projectiles_BladeThrowProjectile_o *__this,MethodInfo *method)

{
  int iVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Rigidbody_o *__this_02;
  float fVar3;
  float fVar4;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o axis;
  
  if (DAT_05703cc6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    DAT_05703cc6 = '\x01';
  }
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
    __this_02 = (UnityEngine_Rigidbody_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)__this,MethodInfo_Rigidbody_GetComponent_Rigidbody);
    if (__this_02 != (UnityEngine_Rigidbody_o *)0x0) {
      UVar5 = UnityEngine_Rigidbody__get_velocity(__this_02,(MethodInfo *)0x0);
      if (DAT_056fde1c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fde1c = '\x01';
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
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
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          if (fVar4 <= 80.0) {
            fVar4 = 80.0;
          }
          axis = UnityEngine_Transform__get_right(__this_01,(MethodInfo *)0x0);
          fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          UnityEngine_Transform__RotateAround
                    (__this_00,UVar5,axis,fVar4 * 1600.0 * fVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.BladeThrowProjectile$$.ctor
// il2cpp: void Projectiles_BladeThrowProjectile___ctor (Projectiles_BladeThrowProjectile_o* __this, const MethodInfo* method);
// 0x3f18a90

void Projectiles_BladeThrowProjectile___ctor
               (Projectiles_SmokeBombProjectile_o *__this,MethodInfo *method)

{
  Projectiles_BaseProjectile___ctor(__this,method);
  return;
}


