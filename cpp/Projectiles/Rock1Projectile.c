// Type: Projectiles.Rock1Projectile
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Projectiles/Rock1Projectile.cs
// Prior real C# source (older reference): Assets/Scripts/Projectiles/Rock1Projectile.cs
// --------------------------------

// Projectiles.Rock1Projectile$$get_DestroyOnImpact
// il2cpp: bool Projectiles_Rock1Projectile__get_DestroyOnImpact (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
Projectiles_Rock1Projectile__get_DestroyOnImpact(Projectiles_Rock1Projectile_o* __this, MethodInfo* method)

{
  return true;
}


// Projectiles.Rock1Projectile$$get_MinImpactVelocity
// il2cpp: float Projectiles_Rock1Projectile__get_MinImpactVelocity (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x180560480

float
Projectiles_Rock1Projectile__get_MinImpactVelocity(Projectiles_Rock1Projectile_o* __this, MethodInfo* method)

{
  return 0.0;
}


// Projectiles.Rock1Projectile$$get_ImpactCooldown
// il2cpp: float Projectiles_Rock1Projectile__get_ImpactCooldown (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x1820cf430

float
Projectiles_Rock1Projectile__get_ImpactCooldown(Projectiles_Rock1Projectile_o* __this, MethodInfo* method)

{
  return 1.0;
}


// Projectiles.Rock1Projectile$$RegisterObjects
// il2cpp: void Projectiles_Rock1Projectile__RegisterObjects (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x1820cf220

void Projectiles_Rock1Projectile__RegisterObjects(Projectiles_Rock1Projectile_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  MethodInfo *pMVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *item;
  
  if (Il2CppMethodInitialized_18434691f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"Rubble3Model");
    Il2CppMethodInitialized_18434691f = '\x01';
  }
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
    pUVar5 = UnityEngine_Transform__Find(pUVar5,"Rubble3Model",(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      item = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
      pMVar4 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
      __this_00 = (__this->fields)._hideObjects;
      if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar3 = (__this_00->fields)._items;
        if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
          uVar2 = (__this_00->fields)._size;
          if ((uint)pUVar3->max_length <= uVar2) {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                       (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
            return;
          }
          (__this_00->fields)._size = uVar2 + 1;
          if (uVar2 < (uint)pUVar3->max_length) {
            pUVar3->m_Items[(int)uVar2] = item;
            Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2,item);
            return;
          }
          ThrowIndexOutOfRangeException();
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.Rock1Projectile$$Update
// il2cpp: void Projectiles_Rock1Projectile__Update (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x1820cf3f0

void Projectiles_Rock1Projectile__Update(Projectiles_Rock1Projectile_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  Projectiles_BaseProjectile__Update((Projectiles_BaseProjectile_o *)__this,(MethodInfo *)0x0);
  fVar1 = (__this->fields)._impactCooldownLeft;
  fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._impactCooldownLeft = fVar1 - fVar2;
  return;
}


// Projectiles.Rock1Projectile$$SetupSettings
// il2cpp: void Projectiles_Rock1Projectile__SetupSettings (Projectiles_Rock1Projectile_o* __this, System_Object_array* settings, const MethodInfo* method);
// 0x1820cf300

void Projectiles_Rock1Projectile__SetupSettings
               (Projectiles_Rock1Projectile_o *__this,System_Object_array *settings,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Il2CppObject *obj;
  UnityEngine_Vector3_StaticFields *pUVar3;
  float *pfVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields local_18;
  
  if (settings != (System_Object_array *)0x0) {
    if ((int)settings->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = settings->m_Items[0];
    if (obj != (Il2CppObject *)0x0) {
      if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e38 + 0x40)) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,g_data_184354e38);
      }
      pfVar4 = il2cpp_object_unbox(obj);
      (__this->fields)._size = *pfVar4;
      __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_18433dbeb == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbeb = '\x01';
      }
      local_18.z = (__this->fields)._size;
      pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar1 = (pUVar3->oneVector).fields.x;
      uVar2 = (pUVar3->oneVector).fields.y;
      local_18.x = (float)uVar1 * local_18.z;
      local_18.y = (float)uVar2 * local_18.z;
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        local_18.z = local_18.z * (pUVar3->oneVector).fields.z;
        UnityEngine_Transform__set_localScale(__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.Rock1Projectile$$OnCollisionEnter
// il2cpp: void Projectiles_Rock1Projectile__OnCollisionEnter (Projectiles_Rock1Projectile_o* __this, UnityEngine_Collision_o* collision, const MethodInfo* method);
// 0x1820ced00

void Projectiles_Rock1Projectile__OnCollisionEnter
               (Projectiles_Rock1Projectile_o *__this,UnityEngine_Collision_o *collision,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Rigidbody_o *__this_00;
  Characters_BaseCharacter_o *pCVar2;
  bool bVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  UnityEngine_Vector3_o *pUVar5;
  UnityEngine_Collider_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  Characters_BaseCharacter_o *a;
  CustomLogic_CustomLogicCollisionHandler_o *__this_01;
  System_String_o *pSVar9;
  UnityEngine_Object_o *__this_02;
  System_String_o *pSVar10;
  UnityEngine_Quaternion_o *pUVar11;
  int32_t damage;
  float fVar12;
  float fVar13;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Quaternion_Fields local_68 [4];
  
  if (Il2CppMethodInitialized_184346920 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"Rock");
    Il2CppMethodInitialized_184346920 = '\x01';
  }
  pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar4 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((pPVar4->fields)._IsMine_k__BackingField == false) || ((__this->fields).Disabled != false)) {
      return;
    }
    __this_00 = (__this->fields)._rigidbody;
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      pUVar5 = UnityEngine_Rigidbody__get_linearVelocity
                         ((UnityEngine_Vector3_o *)local_68,__this_00,(MethodInfo *)0x0);
      local_78.x = (pUVar5->fields).x;
      local_78.y = (pUVar5->fields).y;
      local_78.z = (pUVar5->fields).z;
      fVar12 = (float)il2cpp_runtime_helper_180546a40(&local_78,0);
      fVar13 = (*(__this->klass->vtable)._21_get_MinImpactVelocity.methodPtr)
                         (__this,(__this->klass->vtable)._21_get_MinImpactVelocity.method);
      if (fVar12 < fVar13) {
        return;
      }
      if (0.0 < (__this->fields)._impactCooldownLeft) {
        return;
      }
      fVar12 = (*(__this->klass->vtable)._22_get_ImpactCooldown.methodPtr)
                         (__this,(__this->klass->vtable)._22_get_ImpactCooldown.method);
      (__this->fields)._impactCooldownLeft = fVar12;
      if ((((collision != (UnityEngine_Collision_o *)0x0) &&
           (pUVar6 = UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0),
           pUVar6 != (UnityEngine_Collider_o *)0x0)) &&
          (pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0)
          , pUVar7 != (UnityEngine_GameObject_o *)0x0)) &&
         ((pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
          pUVar8 != (UnityEngine_Transform_o *)0x0 &&
          (pUVar8 = UnityEngine_Transform__GetRoot(pUVar8,(MethodInfo *)0x0),
          pUVar8 != (UnityEngine_Transform_o *)0x0)))) {
        a = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)pUVar8,
                       (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
        pUVar6 = UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
        if ((pUVar6 != (UnityEngine_Collider_o *)0x0) &&
           (pUVar7 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
           pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
          __this_01 = UnityEngine_GameObject__GetComponent_object_
                                (pUVar7,(MethodInfo_6F5650 *)
                                        MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler
                                );
          if (Il2CppMethodInitialized_184346922 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
            Il2CppMethodInitialized_184346922 = '\x01';
          }
          damage = 100;
          pCVar2 = (__this->fields)._owner;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (((bVar3) && (pCVar2 = (__this->fields)._owner, pCVar2 != (Characters_BaseCharacter_o *)0x0)) &&
             ((pCVar2->fields).CustomDamageEnabled != false)) {
            damage = (pCVar2->fields).CustomDamage;
          }
          pSVar9 = Projectiles_Rock1Projectile__GetName(__this,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar3) {
            pCVar2 = (__this->fields)._owner;
            pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            if ((pUVar8 == (UnityEngine_Transform_o *)0x0) ||
               (pUVar5 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Vector3_o *)local_68,pUVar8,(MethodInfo *)0x0),
               __this_01 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0)) goto label_1820cf20f;
            local_78.x = (pUVar5->fields).x;
            local_78.y = (pUVar5->fields).y;
            local_78.z = (pUVar5->fields).z;
            CustomLogic_CustomLogicCollisionHandler__GetHit
                      (__this_01,pCVar2,pSVar9,damage,"Rock",(UnityEngine_Vector3_o *)&local_78
                       ,(MethodInfo *)0x0);
          }
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar3) {
            pSVar10 = (__this->fields)._team;
            if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
            }
            bVar3 = GameManagers_TeamInfo__SameTeam_1e76f20(a,pSVar10,(MethodInfo *)0x0);
            if (!bVar3) {
              __this_02 = (UnityEngine_Object_o *)
                          UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
              if ((__this_02 == (UnityEngine_Object_o *)0x0) ||
                 (pSVar10 = UnityEngine_Object__get_name(__this_02,(MethodInfo *)0x0),
                 a == (Characters_BaseCharacter_o *)0x0)) goto label_1820cf20f;
              il2cpp_runtime_helper_18017a990(0x60,a,pSVar9,damage,"Rock",pSVar10);
            }
          }
          fVar12 = (__this->fields)._size;
          Projectiles_Rock1Projectile__KillPlayersInRadius(__this,fVar12 + fVar12,damage,a,(MethodInfo *)0x0);
          if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
          }
          pSVar9 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom7;
          pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            pUVar5 = UnityEngine_Transform__get_position
                               ((UnityEngine_Vector3_o *)local_68,pUVar8,(MethodInfo *)0x0);
            uVar1._0_4_ = (pUVar5->fields).x;
            uVar1._4_4_ = (pUVar5->fields).y;
            fVar12 = (pUVar5->fields).z;
            pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
              pUVar11 = UnityEngine_Transform__get_rotation
                                  ((UnityEngine_Quaternion_o *)local_68,pUVar8,(MethodInfo *)0x0);
              fVar13 = (__this->fields)._size;
              local_68[0].x = (pUVar11->fields).x;
              local_68[0].y = (pUVar11->fields).y;
              local_68[0].z = (pUVar11->fields).z;
              local_68[0].w = (pUVar11->fields).w;
              if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
              }
              local_78._0_8_ = uVar1;
              local_78.z = fVar12;
              Effects_EffectSpawner__Spawn
                        (pSVar9,(UnityEngine_Vector3_o *)&local_78,(UnityEngine_Quaternion_o *)local_68,fVar13
                         ,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
              bVar3 = (*(__this->klass->vtable)._20_get_DestroyOnImpact.methodPtr)
                                (__this,(__this->klass->vtable)._20_get_DestroyOnImpact.method);
              if (!bVar3) {
                return;
              }
              (*(__this->klass->vtable)._17_DestroySelf.methodPtr)
                        (__this,(__this->klass->vtable)._17_DestroySelf.method);
              return;
            }
          }
        }
      }
    }
  }
label_1820cf20f:
  ThrowNullReferenceException();
}


// Projectiles.Rock1Projectile$$KillPlayersInRadius
// il2cpp: void Projectiles_Rock1Projectile__KillPlayersInRadius (Projectiles_Rock1Projectile_o* __this, float radius, int32_t damage, Characters_BaseCharacter_o* damagedHuman, const MethodInfo* method);
// 0x1820ce6d0
// eh: try 0x1820ce901..0x1820ceceb -> pad 0x1833193f0 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 47 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820cea68: mov rdx, qword ptr [rip + 0x1fb34b9]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x1820cea6f: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820cea74: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820cea79: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820cea7e: test rcx, rcx
// asm:   0x1820cea81: jne 0x1820cecd5
// asm:   0x1820cea87: mov r12, qword ptr [rsp + 0x188]
// asm:   0x1820cea8f: mov r13d, dword ptr [rsp + 0x180]
// asm:   0x1820cea97: movss xmm6, dword ptr [rsp + 0x178]
// asm:   0x1820ceaa0: mov r15, qword ptr [rsp + 0x170]
// asm:   0x1820ceaa8: mov rax, qword ptr [rsp + 0xc0]
// asm:   0x1820ceab0: mov qword ptr [rsp + 0x58], rax
// asm:   0x1820ceab5: movss xmm9, dword ptr [rsp + 0x48]
// asm:   0x1820ceabc: movss xmm8, dword ptr [rsp + 0x4c]
// asm:   0x1820ceac3: movss xmm7, dword ptr [rsp + 0x50]
// asm:   0x1820ceac9: mov r14, qword ptr [rsp + 0x60]
// asm:   0x1820ceb1e: nop 
// asm:   0x1820cec7e: mov rdx, qword ptr [rip + 0x1fb3003]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose
// asm:   0x1820cec85: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1820cec8a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820cec8f: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820cec94: test rcx, rcx
// asm:   0x1820cec97: jne 0x1820ceceb
// asm:   0x1820cecd5: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1820ceceb: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833193f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833193f5: push rbp
// asm:   0x1833193f6: sub rsp, 0x30
// asm:   0x1833193fa: mov rbp, rdx
// asm:   0x1833193fd: mov rax, qword ptr [rbp + 0xd8]
// asm:   0x183319404: mov rcx, qword ptr [rax]
// asm:   0x183319407: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18331940b: movabs rax, 0
// asm:   0x183319415: add rsp, 0x30
// asm:   0x183319419: pop rbp
// asm:   0x18331941a: ret 
// asm:   0x18332a0f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18332a0f5: push rbp
// asm:   0x18332a0f6: sub rsp, 0x30
// asm:   0x18332a0fa: mov rbp, rdx
// asm:   0x18332a0fd: mov rax, qword ptr [rbp + 0xe0]
// asm:   0x18332a104: mov rcx, qword ptr [rax]
// asm:   0x18332a107: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18332a10b: movabs rax, 0
// asm:   0x18332a115: add rsp, 0x30
// asm:   0x18332a119: pop rbp
// asm:   0x18332a11a: ret 

void Projectiles_Rock1Projectile__KillPlayersInRadius
               (Projectiles_Rock1Projectile_o *__this,float radius,int32_t damage,
               Characters_BaseCharacter_o *damagedHuman,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  GameManagers_BaseGameManager_o *pGVar5;
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  Utility_BaseComponentCache_o *pUVar6;
  System_String_o *pSVar7;
  Characters_BaseCharacter_o *pCVar8;
  bool bVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Vector3_o *pUVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 local_138 [16];
  Characters_BaseCharacter_o *local_128;
  float local_120;
  float local_11c;
  float local_118;
  System_String_o *local_110;
  GameManagers_BaseGameManager_o *local_108;
  float local_f8;
  float local_f4;
  float local_f0;
  UnityEngine_Vector3_Fields local_e8;
  undefined1 local_d8 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_d0;
  Characters_BaseCharacter_o *local_c8;
  undefined1 local_c0 [8];
  uint64_t uStack_b8;
  Characters_BaseCharacter_o *local_b0;
  System_String_o *local_a8;
  UnityEngine_Vector3_o local_a0 [8];
  
  if (Il2CppMethodInitialized_184346921 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Horse_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"Rock");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346921 = '\x01';
  }
  local_d8 = (undefined1  [8])0x0;
  pUStack_d0 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_c8 = (Characters_BaseCharacter_o *)0x0;
  local_c0 = (undefined1  [8])0x0;
  uStack_b8 = 0;
  local_b0 = (Characters_BaseCharacter_o *)0x0;
  pGVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar5 != (GameManagers_BaseGameManager_o *)0x0) {
    bVar4 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar5->klass->_2).typeHierarchyDepth < bVar4) ||
       ((pGVar5->klass->_2).typeHierarchy[(ulonglong)bVar4 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar5);
    }
  }
  local_108 = pGVar5;
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
    pUVar11 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)&local_e8,pUVar10,(MethodInfo *)0x0);
    fVar1 = (pUVar11->fields).x;
    fVar2 = (pUVar11->fields).y;
    fVar3 = (pUVar11->fields).z;
    local_110 = Projectiles_Rock1Projectile__GetName(__this,(MethodInfo *)0x0);
    if (pGVar5 != (GameManagers_BaseGameManager_o *)0x0) {
      __this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)
                  (*(uint64_t *)((char *)pGVar5 + 0x40));
      local_120 = fVar3;
      local_11c = fVar2;
      local_118 = fVar1;
      if (__this_00 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
        local_a8 = local_110;
        System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_138,__this_00,
                   (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
        local_d8 = (undefined1  [8])local_138._0_8_;
        pUStack_d0 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_138._8_8_;
        local_c8 = local_128;
        local_138._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        local_138._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_d8;
        while( true ) {
          bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_d8,
                             (MethodInfo_15381F0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
          pCVar8 = local_c8;
          if (!bVar9) break;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar9 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar9) {
            if (pCVar8 == (Characters_BaseCharacter_o *)0x0) {
              ThrowNullReferenceException();
            }
            if ((pCVar8->fields).Dead == false) {
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar9 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)damagedHuman,
                                 (MethodInfo *)0x0);
              if (!bVar9) {
                pUVar6 = (pCVar8->fields).Cache;
                if (pUVar6 == (Utility_BaseComponentCache_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pUVar10 = (pUVar6->fields).Transform;
                if (pUVar10 == (UnityEngine_Transform_o *)0x0) {
                  ThrowNullReferenceException();
                }
                pUVar11 = UnityEngine_Transform__get_position(local_a0,pUVar10,(MethodInfo *)0x0);
                local_e8.x = (pUVar11->fields).x;
                local_e8.y = (pUVar11->fields).y;
                local_e8.z = (pUVar11->fields).z;
                local_f8 = fVar1;
                local_f4 = fVar2;
                local_f0 = fVar3;
                fVar12 = (float)il2cpp_runtime_helper_180562c80(&local_e8,&local_f8);
                if (fVar12 < radius) {
                  pSVar7 = (__this->fields)._team;
                  if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
                  }
                  bVar9 = GameManagers_TeamInfo__SameTeam_1e76f20(pCVar8,pSVar7,(MethodInfo *)0x0);
                  if (!bVar9) {
                    il2cpp_runtime_helper_18017a990(0x60,pCVar8,local_110,damage,"Rock","");
                  }
                }
              }
            }
          }
        }
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_d8,
                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
        if ((*(uint64_t *)((char *)pGVar5 + 0x58)) != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
          System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                    ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_138,(*(uint64_t *)((char *)pGVar5 + 0x58)),
                     (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_Horse_GetEnumerator);
          local_c0 = (undefined1  [8])local_138._0_8_;
          uStack_b8 = local_138._8_8_;
          local_b0 = local_128;
          local_138._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
          local_138._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_c0;
          while( true ) {
            do {
              do {
                do {
                  bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                    ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_c0,
                                     (MethodInfo_15381F0 *)
                                     MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_MoveNext);
                  pCVar8 = local_b0;
                  if (!bVar9) {
                    System_Collections_Generic_HashSet_Enumerator_object___Dispose
                              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_c0,
                               MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose);
                    return;
                  }
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar9 = UnityEngine_Object__op_Equality
                                    ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                } while (bVar9);
                if (pCVar8 == (Characters_BaseCharacter_o *)0x0) {
                  ThrowNullReferenceException();
                }
              } while ((pCVar8->fields).Dead != false);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar9 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)damagedHuman,
                                 (MethodInfo *)0x0);
            } while (bVar9);
            pUVar6 = (pCVar8->fields).Cache;
            if (pUVar6 == (Utility_BaseComponentCache_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar10 = (pUVar6->fields).Transform;
            if (pUVar10 == (UnityEngine_Transform_o *)0x0) break;
            pUVar11 = UnityEngine_Transform__get_position(local_a0,pUVar10,(MethodInfo *)0x0);
            fVar14 = (pUVar11->fields).x - fVar1;
            fVar12 = (pUVar11->fields).y - fVar2;
            fVar13 = (pUVar11->fields).z - fVar3;
            if (fVar13 * fVar13 + fVar12 * fVar12 + fVar14 * fVar14 < radius * radius) {
              pSVar7 = (__this->fields)._team;
              if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
              }
              bVar9 = GameManagers_TeamInfo__SameTeam_1e76f20(pCVar8,pSVar7,(MethodInfo *)0x0);
              if (!bVar9) {
                il2cpp_runtime_helper_18017a990(0x60,pCVar8,local_110,damage,"Rock","");
              }
            }
          }
          ThrowNullReferenceException();
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.Rock1Projectile$$CalculateDamage
// il2cpp: int32_t Projectiles_Rock1Projectile__CalculateDamage (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x1820ce590

int32_t Projectiles_Rock1Projectile__CalculateDamage(Projectiles_Rock1Projectile_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346922 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346922 = '\x01';
  }
  pCVar1 = (__this->fields)._owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((bVar2) && (pCVar1 = (__this->fields)._owner, pCVar1 != (Characters_BaseCharacter_o *)0x0)) &&
     ((pCVar1->fields).CustomDamageEnabled != false)) {
    return (pCVar1->fields).CustomDamage;
  }
  return 100;
}


// Projectiles.Rock1Projectile$$GetName
// il2cpp: System_String_o* Projectiles_Rock1Projectile__GetName (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x1820ce620

System_String_o *
Projectiles_Rock1Projectile__GetName(Projectiles_Rock1Projectile_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184346923 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Rock");
    il2cpp_codegen_initialize_runtime_metadata(&"'s Rock");
    Il2CppMethodInitialized_184346923 = '\x01';
  }
  pCVar1 = (__this->fields)._owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pCVar1 = (__this->fields)._owner;
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      pSVar3 = System_String__Concat_1969e50
                         ((pCVar1->fields).RichTextName,"'s Rock",(MethodInfo *)0x0);
      return pSVar3;
    }
    ThrowNullReferenceException();
  }
  return "Rock";
}


// Projectiles.Rock1Projectile$$.ctor
// il2cpp: void Projectiles_Rock1Projectile___ctor (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x1820b6310

void
Projectiles_Rock1Projectile___ctor(Projectiles_Rock1Projectile_o* __this, MethodInfo* method)

{
  Projectiles_BaseProjectile___ctor((Projectiles_BladeThrowProjectile_o *)__this,(MethodInfo *)0x0);
  return;
}


