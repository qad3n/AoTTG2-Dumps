// Type: Projectiles.CannonBallProjectile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Projectiles/CannonBallProjectile.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Projectiles/CannonBallProjectile.cs  [CHANGED since prior version]
// --------------------------------

// Projectiles.CannonBallProjectile$$RegisterObjects
// il2cpp: void Projectiles_CannonBallProjectile__RegisterObjects (Projectiles_CannonBallProjectile_o* __this, const MethodInfo* method);
// 0x3f18aa0

void Projectiles_CannonBallProjectile__RegisterObjects
               (Projectiles_CannonBallProjectile_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  long lVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *item;
  
  if (DAT_05703cc7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&"CannonBallModel");
    DAT_05703cc7 = '\x01';
  }
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
    pUVar5 = UnityEngine_Transform__Find(pUVar5,"CannonBallModel",(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      item = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
      lVar4 = MethodInfo_Void_Add;
      __this_00 = (__this->fields)._hideObjects;
      if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar3 = (__this_00->fields)._items;
        if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pUVar3->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pUVar3->m_Items[(int)uVar2] = item;
            il2cpp_runtime_glue(pUVar3->m_Items + (int)uVar2,item);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.CannonBallProjectile$$OnCollisionEnter
// il2cpp: void Projectiles_CannonBallProjectile__OnCollisionEnter (Projectiles_CannonBallProjectile_o* __this, UnityEngine_Collision_o* collision, const MethodInfo* method);
// 0x3f18b70

void Projectiles_CannonBallProjectile__OnCollisionEnter
               (Projectiles_CannonBallProjectile_o *__this,UnityEngine_Collision_o *collision,
               MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_InGameMenu_o *__this_00;
  bool_conflict bVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  UnityEngine_Collider_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  Characters_BaseCharacter_o *a;
  CustomLogic_CustomLogicCollisionHandler_o *__this_01;
  UnityEngine_Object_o *pUVar8;
  System_String_o *pSVar9;
  Characters_BaseCharacter_o *pCVar10;
  int32_t damage;
  uint score;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Quaternion_o rotation;
  
  if (DAT_05703cc8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomL);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"CannonBall");
    DAT_05703cc8 = '\x01';
  }
  pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar4 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03f190c2;
  if (((char)(pPVar4->fields)._IsMine_k__BackingField == '\0') ||
     ((char)(__this->fields).Disabled != '\0')) {
    return;
  }
  if ((((collision == (UnityEngine_Collision_o *)0x0) ||
       (pUVar5 = UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_Collider_o *)0x0)) ||
      (pUVar6 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
      pUVar6 == (UnityEngine_GameObject_o *)0x0)) ||
     ((pUVar7 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0),
      pUVar7 == (UnityEngine_Transform_o *)0x0 ||
      (pUVar7 = UnityEngine_Transform__get_root(pUVar7,(MethodInfo *)0x0),
      pUVar7 == (UnityEngine_Transform_o *)0x0)))) goto LAB_03f190c2;
  a = (Characters_BaseCharacter_o *)
      UnityEngine_Component__GetComponent<object>((UnityEngine_Component_o *)pUVar7,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
  pUVar5 = UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
  if ((pUVar5 == (UnityEngine_Collider_o *)0x0) ||
     (pUVar6 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
     pUVar6 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03f190c2;
  __this_01 = (CustomLogic_CustomLogicCollisionHandler_o *)
              UnityEngine_GameObject__GetComponent<object>(pUVar6,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomL);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar3 != '\0') {
    if (DAT_05703cc9 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_05703cc9 = '\x01';
    }
    pCVar10 = (__this->fields)._owner;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    pCVar10 = (__this->fields)._owner;
    if ((char)bVar3 == '\0') {
      damage = 100;
      if (pCVar10 == (Characters_BaseCharacter_o *)0x0) goto LAB_03f190c2;
    }
    else {
      if (pCVar10 == (Characters_BaseCharacter_o *)0x0) goto LAB_03f190c2;
      if (*(char *)((long)&(pCVar10->fields).FeedVictimName + 1) == '\0') {
        damage = 100;
      }
      else {
        damage = *(int32_t *)((long)&(pCVar10->fields).FeedVictimName + 4);
      }
    }
    pSVar9 = *(System_String_o **)&(pCVar10->fields)._disableKinematicTimeLeft;
    pUVar7 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar7 == (UnityEngine_Transform_o *)0x0) ||
       (UVar11 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0),
       __this_01 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0)) goto LAB_03f190c2;
    CustomLogic_CustomLogicCollisionHandler__GetHit
              (__this_01,pCVar10,pSVar9,damage,"CannonBall",UVar11,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
LAB_03f18ed9:
    iVar2 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  else {
    pSVar9 = (__this->fields)._team;
    if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = GameManagers_TeamInfo__SameTeam(a,pSVar9,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') goto LAB_03f18ed9;
    pCVar10 = (__this->fields)._owner;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    if (((char)bVar3 != '\0') ||
       (pCVar10 = (__this->fields)._owner, pCVar10 == (Characters_BaseCharacter_o *)0x0)) {
LAB_03f18e8a:
      pUVar8 = (UnityEngine_Object_o *)
               UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
      if ((pUVar8 == (UnityEngine_Object_o *)0x0) ||
         (pSVar9 = UnityEngine_Object__get_name(pUVar8,(MethodInfo *)0x0),
         a == (Characters_BaseCharacter_o *)0x0)) goto LAB_03f190c2;
      (*(a->klass->vtable)._85_GetHit.methodPtr)
                (a,"CannonBall",100,"CannonBall",pSVar9,(a->klass->vtable)._85_GetHit.method);
      goto LAB_03f18ed9;
    }
    bVar1 = (TypeInfo_Human->_2).naturalAligment;
    if (((pCVar10->klass->_2).naturalAligment < bVar1) ||
       ((pCVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Human)) goto LAB_03f18e8a;
    if (DAT_05703cc9 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_05703cc9 = '\x01';
      pCVar10 = (__this->fields)._owner;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    score = 100;
    if ((((char)bVar3 != '\0') &&
        (pCVar10 = (__this->fields)._owner, pCVar10 != (Characters_BaseCharacter_o *)0x0)) &&
       (*(char *)((long)&(pCVar10->fields).FeedVictimName + 1) != '\0')) {
      score = *(uint *)((long)&(pCVar10->fields).FeedVictimName + 4);
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_00 == (UI_InGameMenu_o *)0x0) goto LAB_03f190c2;
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    UI_InGameMenu__ShowKillScore(__this_00,score,0,(MethodInfo *)0x0);
    pCVar10 = (__this->fields)._owner;
    pUVar8 = (UnityEngine_Object_o *)
             UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
    if ((pUVar8 == (UnityEngine_Object_o *)0x0) ||
       (pSVar9 = UnityEngine_Object__get_name(pUVar8,(MethodInfo *)0x0),
       a == (Characters_BaseCharacter_o *)0x0)) goto LAB_03f190c2;
    (*(a->klass->vtable)._84_GetHit.methodPtr)
              (a,pCVar10,(ulong)score,"CannonBall",pSVar9,(a->klass->vtable)._84_GetHit.method);
    iVar2 = *(int *)(TypeInfo_EffectPrefabs + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  pSVar9 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x70);
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
    UVar11 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
    rotation = UnityEngine_Quaternion__LookRotation
                         ((UnityEngine_Vector3_o)(__this->fields)._velocity.fields,(MethodInfo *)0x0
                         );
    Effects_EffectSpawner__Spawn
              (pSVar9,UVar11,rotation,0.5,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._17_DestroySelf.methodPtr)
              (__this,(__this->klass->vtable)._17_DestroySelf.method);
    return;
  }
LAB_03f190c2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.CannonBallProjectile$$CalculateDamage
// il2cpp: int32_t Projectiles_CannonBallProjectile__CalculateDamage (Projectiles_CannonBallProjectile_o* __this, const MethodInfo* method);
// 0x3f190d0

int32_t Projectiles_CannonBallProjectile__CalculateDamage
                  (Projectiles_CannonBallProjectile_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  
  if (DAT_05703cc9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703cc9 = '\x01';
  }
  pCVar1 = (__this->fields)._owner;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
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
// 0x3f19150

void Projectiles_CannonBallProjectile___ctor
               (Projectiles_SmokeBombProjectile_o *__this,MethodInfo *method)

{
  Projectiles_BaseProjectile___ctor(__this,method);
  return;
}


