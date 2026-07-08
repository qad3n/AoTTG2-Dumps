// Type: Projectiles.Rock1Projectile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Projectiles/Rock1Projectile.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Projectiles/Rock1Projectile.cs  [CHANGED since prior version]
// --------------------------------

// Projectiles.Rock1Projectile$$get_DestroyOnImpact
// il2cpp: bool Projectiles_Rock1Projectile__get_DestroyOnImpact (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x3f19570

bool_conflict
Projectiles_Rock1Projectile__get_DestroyOnImpact
          (Projectiles_Rock1Projectile_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// Projectiles.Rock1Projectile$$get_MinImpactVelocity
// il2cpp: float Projectiles_Rock1Projectile__get_MinImpactVelocity (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x3f19580

float Projectiles_Rock1Projectile__get_MinImpactVelocity
                (Projectiles_Rock1Projectile_o *__this,MethodInfo *method)

{
  return 0.0;
}


// Projectiles.Rock1Projectile$$get_ImpactCooldown
// il2cpp: float Projectiles_Rock1Projectile__get_ImpactCooldown (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x3f19590

float Projectiles_Rock1Projectile__get_ImpactCooldown
                (Projectiles_Rock1Projectile_o *__this,MethodInfo *method)

{
  return 1.0;
}


// Projectiles.Rock1Projectile$$RegisterObjects
// il2cpp: void Projectiles_Rock1Projectile__RegisterObjects (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x3f195a0

void Projectiles_Rock1Projectile__RegisterObjects
               (Projectiles_Rock1Projectile_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  long lVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *item;
  
  if (DAT_05703ccd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&"Rubble3Model");
    DAT_05703ccd = '\x01';
  }
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
    pUVar5 = UnityEngine_Transform__Find(pUVar5,"Rubble3Model",(MethodInfo *)0x0);
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


// Projectiles.Rock1Projectile$$Update
// il2cpp: void Projectiles_Rock1Projectile__Update (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x3f19670

void Projectiles_Rock1Projectile__Update(Projectiles_Rock1Projectile_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  float fVar2;
  float fVar3;
  
  Characters_BaseMovementSync__Update((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  pPVar1 = (__this->fields)._photonView;
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((char)(pPVar1->fields)._IsMine_k__BackingField != '\0') {
      fVar3 = (__this->fields)._timeLeft;
      fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar3 = fVar3 - fVar2;
      (__this->fields)._timeLeft = fVar3;
      if (fVar3 <= 0.0) {
        (*(__this->klass->vtable)._16_OnExceedLiveTime.methodPtr)
                  (__this,(__this->klass->vtable)._16_OnExceedLiveTime.method);
      }
    }
    fVar3 = (__this->fields)._impactCooldownLeft;
    fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._impactCooldownLeft = fVar3 - fVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.Rock1Projectile$$SetupSettings
// il2cpp: void Projectiles_Rock1Projectile__SetupSettings (Projectiles_Rock1Projectile_o* __this, System_Object_array* settings, const MethodInfo* method);
// 0x3f19710

void Projectiles_Rock1Projectile__SetupSettings
               (Projectiles_Rock1Projectile_o *__this,System_Object_array *settings,
               MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  float *pfVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (settings != (System_Object_array *)0x0) {
    if ((int)settings->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (settings->m_Items[0] != (Il2CppObject *)0x0) {
      if ((settings->m_Items[0]->klass->_1).element_class != *(Il2CppClass **)(DAT_05711098 + 0x40))
      {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      pfVar3 = (float *)il2cpp_glue_022c7330();
      (__this->fields)._size = *pfVar3;
      __this_00 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (DAT_056fe077 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fe077 = '\x01';
      }
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        fVar1 = (__this->fields)._size;
        uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
        value.fields.x = fVar1 * (float)uVar2;
        value.fields.y = fVar1 * (float)((ulong)uVar2 >> 0x20);
        value.fields.z = fVar1 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
        UnityEngine_Transform__set_localScale(__this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.Rock1Projectile$$OnCollisionEnter
// il2cpp: void Projectiles_Rock1Projectile__OnCollisionEnter (Projectiles_Rock1Projectile_o* __this, UnityEngine_Collision_o* collision, const MethodInfo* method);
// 0x3f197e0

void Projectiles_Rock1Projectile__OnCollisionEnter
               (Projectiles_Rock1Projectile_o *__this,UnityEngine_Collision_o *collision,
               MethodInfo *method)

{
  int iVar1;
  UnityEngine_Rigidbody_o *__this_00;
  Characters_BaseCharacter_o *pCVar2;
  Il2CppMethodPointer vtable_dispatch;
  char cVar3;
  bool_conflict bVar4;
  Photon_Pun_PhotonView_o *pPVar5;
  UnityEngine_Collider_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  Characters_BaseCharacter_o *a;
  CustomLogic_CustomLogicCollisionHandler_o *__this_01;
  System_String_o *pSVar9;
  UnityEngine_Object_o *__this_02;
  System_String_o *pSVar10;
  MethodInfo_24F0F80 **method_00;
  undefined8 extraout_RDX;
  MethodInfo *method_01;
  uint damage;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Quaternion_o rotation;
  
  if (DAT_05703cce == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomL);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    il2cpp_init_method_metadata(&"Rock");
    DAT_05703cce = '\x01';
  }
  pPVar5 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar5 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((char)(pPVar5->fields)._IsMine_k__BackingField == '\0') ||
       ((char)(__this->fields).Disabled != '\0')) {
      return;
    }
    __this_00 = (__this->fields)._rigidbody;
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      UVar13 = UnityEngine_Rigidbody__get_velocity(__this_00,(MethodInfo *)0x0);
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
      fVar12 = UVar13.fields.z * UVar13.fields.z +
               UVar13.fields.y * UVar13.fields.y + UVar13.fields.x * UVar13.fields.x;
      if (fVar12 < 0.0) {
        fVar12 = sqrtf(fVar12);
      }
      else {
        fVar12 = SQRT(fVar12);
      }
      fVar11 = (float)(*(__this->klass->vtable)._21_get_MinImpactVelocity.methodPtr)
                                (__this,(__this->klass->vtable)._21_get_MinImpactVelocity.method);
      if (fVar12 < fVar11) {
        return;
      }
      if (0.0 < (__this->fields)._impactCooldownLeft) {
        return;
      }
      fVar12 = (float)(*(__this->klass->vtable)._22_get_ImpactCooldown.methodPtr)(__this);
      (__this->fields)._impactCooldownLeft = fVar12;
      if ((((collision != (UnityEngine_Collision_o *)0x0) &&
           (pUVar6 = UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0),
           pUVar6 != (UnityEngine_Collider_o *)0x0)) &&
          (pUVar7 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
          pUVar7 != (UnityEngine_GameObject_o *)0x0)) &&
         ((pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
          pUVar8 != (UnityEngine_Transform_o *)0x0 &&
          (pUVar8 = UnityEngine_Transform__get_root(pUVar8,(MethodInfo *)0x0),
          pUVar8 != (UnityEngine_Transform_o *)0x0)))) {
        a = (Characters_BaseCharacter_o *)
            UnityEngine_Component__GetComponent<object>
                      ((UnityEngine_Component_o *)pUVar8,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
        pUVar6 = UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
        if ((pUVar6 != (UnityEngine_Collider_o *)0x0) &&
           (pUVar7 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
           pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
          method_00 = &MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomL;
          __this_01 = (CustomLogic_CustomLogicCollisionHandler_o *)
                      UnityEngine_GameObject__GetComponent<object>(pUVar7,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomL);
          if (DAT_05703cd0 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Object);
            DAT_05703cd0 = '\x01';
          }
          pCVar2 = (__this->fields)._owner;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          method_01 = (MethodInfo *)0x0;
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          damage = 100;
          if ((((char)bVar4 != '\0') &&
              (pCVar2 = (__this->fields)._owner, pCVar2 != (Characters_BaseCharacter_o *)0x0)) &&
             (*(char *)((long)&(pCVar2->fields).FeedVictimName + 1) != '\0')) {
            damage = *(uint *)((long)&(pCVar2->fields).FeedVictimName + 4);
          }
          pSVar9 = Projectiles_Rock1Projectile__GetName(__this,method_01);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            pCVar2 = (__this->fields)._owner;
            pUVar8 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if ((pUVar8 == (UnityEngine_Transform_o *)0x0) ||
               (UVar13 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0),
               __this_01 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0)) goto LAB_03f19cc0;
            method_00 = (MethodInfo_24F0F80 **)(ulong)damage;
            CustomLogic_CustomLogicCollisionHandler__GetHit
                      (__this_01,pCVar2,pSVar9,damage,(System_String_o *)"Rock",UVar13,
                       (MethodInfo *)0x0);
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                            );
          if ((char)bVar4 != '\0') {
            pSVar10 = (__this->fields)._team;
            if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar4 = GameManagers_TeamInfo__SameTeam(a,pSVar10,(MethodInfo *)0x0);
            if ((char)bVar4 == '\0') {
              __this_02 = (UnityEngine_Object_o *)
                          UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
              if ((__this_02 == (UnityEngine_Object_o *)0x0) ||
                 (pSVar10 = UnityEngine_Object__get_name(__this_02,(MethodInfo *)0x0),
                 a == (Characters_BaseCharacter_o *)0x0)) goto LAB_03f19cc0;
              method_00 = (MethodInfo_24F0F80 **)"Rock";
              (*(a->klass->vtable)._85_GetHit.methodPtr)
                        (a,pSVar9,(ulong)damage,"Rock",pSVar10,
                         (a->klass->vtable)._85_GetHit.method);
            }
          }
          fVar12 = (__this->fields)._size;
          Projectiles_Rock1Projectile__KillPlayersInRadius
                    (__this,fVar12 + fVar12,damage,a,(MethodInfo *)method_00);
          if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x88);
          pUVar8 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            UVar13 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
            pUVar8 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
              rotation = UnityEngine_Transform__get_rotation(pUVar8,(MethodInfo *)0x0);
              Effects_EffectSpawner__Spawn
                        (pSVar9,UVar13,rotation,(__this->fields)._size,1,(System_Object_array *)0x0,
                         (MethodInfo *)0x0);
              cVar3 = (*(__this->klass->vtable)._20_get_DestroyOnImpact.methodPtr)
                                (__this,(__this->klass->vtable)._20_get_DestroyOnImpact.method);
              if (cVar3 == '\0') {
                return;
              }
              vtable_dispatch = (__this->klass->vtable)._17_DestroySelf.methodPtr;
              (*vtable_dispatch)
                        (__this,(__this->klass->vtable)._17_DestroySelf.method,extraout_RDX,
                         vtable_dispatch);
              return;
            }
          }
        }
      }
    }
  }
LAB_03f19cc0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.Rock1Projectile$$KillPlayersInRadius
// il2cpp: void Projectiles_Rock1Projectile__KillPlayersInRadius (Projectiles_Rock1Projectile_o* __this, float radius, int32_t damage, Characters_BaseCharacter_o* damagedHuman, const MethodInfo* method);
// 0x3f19e00

void Projectiles_Rock1Projectile__KillPlayersInRadius
               (Projectiles_Rock1Projectile_o *__this,float radius,int32_t damage,
               Characters_BaseCharacter_o *damagedHuman,MethodInfo *method)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  System_String_o *b;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  bool_conflict bVar4;
  UnityEngine_Transform_o *pUVar5;
  System_String_o *pSVar6;
  MethodInfo *method_00;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  undefined8 in_stack_ffffffffffffff38;
  System_Collections_Generic_HashSet_T__o *pSVar10;
  float local_88;
  float fStack_84;
  float local_68;
  float fStack_64;
  System_Collections_Generic_HashSet_Enumerator_T__o local_48;
  
  if (DAT_05703ccf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Human_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    il2cpp_init_method_metadata(&"Rock");
    il2cpp_init_method_metadata(&"");
    DAT_05703ccf = '\x01';
  }
  plVar2 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    UVar8 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
    pSVar6 = Projectiles_Rock1Projectile__GetName(__this,method_00);
    if (plVar2 != (long *)0x0) {
      if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
         (*(long *)(*(long *)(*plVar2 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
          TypeInfo_InGameManager)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(plVar2);
      }
      if ((System_Collections_Generic_HashSet_object__o *)plVar2[8] !=
          (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__GetEnumerator
                  (&local_48,(System_Collections_Generic_HashSet_object__o *)plVar2[8],MethodInfo_HashSet_1_T__Enumerator_Characters_Human__GetEnu)
        ;
        local_88 = UVar8.fields.x;
        fStack_84 = UVar8.fields.y;
        pSVar10 = local_48.fields._set;
LAB_03f19fb0:
        do {
          do {
            do {
              do {
                __this_00.fields._index = damage;
                __this_00.fields._set =
                     (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff38;
                __this_00.fields._version = (int32_t)radius;
                __this_00.fields._current = (Il2CppObject *)pSVar10;
                bVar4 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                                  (__this_00,(MethodInfo_3185890 *)&stack0xffffffffffffff48);
                if ((char)bVar4 == '\0') {
                  __this_01.fields._index = damage;
                  __this_01.fields._set =
                       (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff38;
                  __this_01.fields._version = (int32_t)radius;
                  __this_01.fields._current = (Il2CppObject *)pSVar10;
                  System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                            (__this_01,(MethodInfo_3185880 *)&stack0xffffffffffffff48);
                  return;
                }
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar4 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)local_48.fields._current,
                                   (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              } while ((char)bVar4 != '\0');
              if ((Characters_BaseCharacter_o *)local_48.fields._current ==
                  (Characters_BaseCharacter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
            } while (*(char *)&((Characters_BaseCharacter_Fields *)
                               ((long)local_48.fields._current + 0x10))->FeedVictimName != '\0');
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar4 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)local_48.fields._current,
                               (UnityEngine_Object_o *)damagedHuman,(MethodInfo *)0x0);
          } while ((char)bVar4 != '\0');
          lVar3 = *(long *)&((Characters_BaseCharacter_Fields *)
                            ((long)local_48.fields._current + 0x10))->Dead;
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pUVar5 = *(UnityEngine_Transform_o **)(lVar3 + 0x10);
          if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          UVar9 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
          if (DAT_056fdea6 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Math);
            DAT_056fdea6 = '\x01';
            iVar1 = *(int *)(TypeInfo_Math + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_Math + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
          }
          local_68 = UVar9.fields.x;
          fStack_64 = UVar9.fields.y;
          fVar7 = UVar9.fields.z - UVar8.fields.z;
          fVar7 = (local_68 - local_88) * (local_68 - local_88) +
                  (fStack_64 - fStack_84) * (fStack_64 - fStack_84) + fVar7 * fVar7;
          if (fVar7 < 0.0) goto LAB_03f1a0e4;
        } while (radius <= SQRT(fVar7));
        goto LAB_03f1a0f8;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
LAB_03f1a0e4:
  fVar7 = sqrtf(fVar7);
  if (fVar7 < radius) {
LAB_03f1a0f8:
    b = (__this->fields)._team;
    if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = GameManagers_TeamInfo__SameTeam
                      ((Characters_BaseCharacter_o *)local_48.fields._current,b,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      (*(((Characters_BaseCharacter_c *)(local_48.fields._current)->klass)->vtable)._85_GetHit.
        methodPtr)(local_48.fields._current,pSVar6,(ulong)(uint)damage,"Rock","",
                   (((Characters_BaseCharacter_c *)(local_48.fields._current)->klass)->vtable).
                   _85_GetHit.method);
    }
  }
  goto LAB_03f19fb0;
}


// Projectiles.Rock1Projectile$$CalculateDamage
// il2cpp: int32_t Projectiles_Rock1Projectile__CalculateDamage (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x3f19cd0

int32_t Projectiles_Rock1Projectile__CalculateDamage
                  (Projectiles_Rock1Projectile_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  
  if (DAT_05703cd0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703cd0 = '\x01';
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


// Projectiles.Rock1Projectile$$GetName
// il2cpp: System_String_o* Projectiles_Rock1Projectile__GetName (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x3f19d50

System_String_o *
Projectiles_Rock1Projectile__GetName(Projectiles_Rock1Projectile_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  
  if (DAT_05703cd1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Rock");
    il2cpp_init_method_metadata(&"'s Rock");
    DAT_05703cd1 = '\x01';
  }
  pCVar1 = (__this->fields)._owner;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return "Rock";
  }
  pCVar1 = (__this->fields)._owner;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    pSVar3 = System_String__Concat
                       (*(System_String_o **)&(pCVar1->fields)._disableKinematicTimeLeft,
                        "'s Rock",(MethodInfo *)0x0);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.Rock1Projectile$$.ctor
// il2cpp: void Projectiles_Rock1Projectile___ctor (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x3f1a2b0

void Projectiles_Rock1Projectile___ctor
               (Projectiles_SmokeBombProjectile_o *__this,MethodInfo *method)

{
  Projectiles_BaseProjectile___ctor(__this,method);
  return;
}


