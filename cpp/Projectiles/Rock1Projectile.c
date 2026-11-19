// Type: Projectiles.Rock1Projectile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Projectiles/Rock1Projectile.cs
// Prior real C# source (older reference): Assets/Scripts/Projectiles/Rock1Projectile.cs
// --------------------------------

// Projectiles.Rock1Projectile$$get_DestroyOnImpact
// il2cpp: bool Projectiles_Rock1Projectile__get_DestroyOnImpact (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x5872840

bool Projectiles_Rock1Projectile__get_DestroyOnImpact
               (Projectiles_Rock1Projectile_o *__this,MethodInfo *method)

{
  return true;
}


// Projectiles.Rock1Projectile$$get_MinImpactVelocity
// il2cpp: float Projectiles_Rock1Projectile__get_MinImpactVelocity (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x5872850

float Projectiles_Rock1Projectile__get_MinImpactVelocity
                (Projectiles_Rock1Projectile_o *__this,MethodInfo *method)

{
  return 0.0;
}


// Projectiles.Rock1Projectile$$get_ImpactCooldown
// il2cpp: float Projectiles_Rock1Projectile__get_ImpactCooldown (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x5872860

float Projectiles_Rock1Projectile__get_ImpactCooldown
                (Projectiles_Rock1Projectile_o *__this,MethodInfo *method)

{
  return 1.0;
}


// Projectiles.Rock1Projectile$$RegisterObjects
// il2cpp: void Projectiles_Rock1Projectile__RegisterObjects (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x5872870

void Projectiles_Rock1Projectile__RegisterObjects(Projectiles_Rock1Projectile_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  MethodInfo *pMVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *item;
  
  if (Il2CppMethodInitialized_0754517a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"Rubble3Model");
    Il2CppMethodInitialized_0754517a = '\x01';
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
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.Rock1Projectile$$Update
// il2cpp: void Projectiles_Rock1Projectile__Update (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x5872940

void Projectiles_Rock1Projectile__Update(Projectiles_Rock1Projectile_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  float fVar2;
  float fVar3;
  
  Characters_BaseMovementSync__Update((Characters_BaseMovementSync_o *)__this,(MethodInfo *)0x0);
  pPVar1 = (__this->fields)._photonView;
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pPVar1->fields)._IsMine_k__BackingField != false) {
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


// Projectiles.Rock1Projectile$$SetupSettings
// il2cpp: void Projectiles_Rock1Projectile__SetupSettings (Projectiles_Rock1Projectile_o* __this, System_Object_array* settings, const MethodInfo* method);
// 0x58729e0

void Projectiles_Rock1Projectile__SetupSettings
               (Projectiles_Rock1Projectile_o *__this,System_Object_array *settings,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Il2CppObject *obj;
  UnityEngine_Vector3_StaticFields *pUVar4;
  float *pfVar5;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (settings != (System_Object_array *)0x0) {
    if ((int)settings->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = settings->m_Items[0];
    if (obj != (Il2CppObject *)0x0) {
      if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_07556740 + 0x40)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      pfVar5 = il2cpp_vm_Object_Unbox(obj);
      (__this->fields)._size = *pfVar5;
      __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753e4b7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b7 = '\x01';
      }
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar1 = (__this->fields)._size;
        value.fields.z = (pUVar4->oneVector).fields.z * fVar1;
        uVar2 = (pUVar4->oneVector).fields.x;
        uVar3 = (pUVar4->oneVector).fields.y;
        value.fields.x = fVar1 * (float)uVar2;
        value.fields.y = fVar1 * (float)uVar3;
        UnityEngine_Transform__set_localScale(__this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.Rock1Projectile$$OnCollisionEnter
// il2cpp: void Projectiles_Rock1Projectile__OnCollisionEnter (Projectiles_Rock1Projectile_o* __this, UnityEngine_Collision_o* collision, const MethodInfo* method);
// 0x5872ac0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5872d30: lea rbp, [rip + 0x1a086b9]  ; TypeInfo_UnityEngine_Object

void Projectiles_Rock1Projectile__OnCollisionEnter
               (Projectiles_Rock1Projectile_o *__this,UnityEngine_Collision_o *collision,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Rigidbody_o *__this_00;
  Characters_BaseCharacter_o *pCVar2;
  bool bVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  UnityEngine_Collider_o *pUVar5;
  Characters_BaseCharacter_o *a;
  UnityEngine_GameObject_o *__this_01;
  CustomLogic_CustomLogicCollisionHandler_o *__this_02;
  System_String_o *pSVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Object_o *__this_03;
  System_String_o *pSVar8;
  MethodInfo **method_00;
  MethodInfo *pMVar9;
  uint damage;
  float fVar10;
  float fVar11;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar12;
  
  if (Il2CppMethodInitialized_0754517b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"Rock");
    Il2CppMethodInitialized_0754517b = '\x01';
  }
  pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar4 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((pPVar4->fields)._IsMine_k__BackingField == false) || ((__this->fields).Disabled != false)) {
      return;
    }
    __this_00 = (__this->fields)._rigidbody;
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      UVar12 = UnityEngine_Rigidbody__get_linearVelocity(__this_00,(MethodInfo *)0x0);
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
      fVar11 = UVar12.fields.z * UVar12.fields.z +
               UVar12.fields.y * UVar12.fields.y + UVar12.fields.x * UVar12.fields.x;
      if (fVar11 < 0.0) {
        fVar11 = sqrtf(fVar11);
      }
      else {
        fVar11 = SQRT(fVar11);
      }
      fVar10 = (*(__this->klass->vtable)._21_get_MinImpactVelocity.methodPtr)
                         (__this,(__this->klass->vtable)._21_get_MinImpactVelocity.method);
      if (fVar11 < fVar10) {
        return;
      }
      if (0.0 < (__this->fields)._impactCooldownLeft) {
        return;
      }
      fVar11 = (*(__this->klass->vtable)._22_get_ImpactCooldown.methodPtr)
                         (__this,(__this->klass->vtable)._22_get_ImpactCooldown.method);
      (__this->fields)._impactCooldownLeft = fVar11;
      if (collision != (UnityEngine_Collision_o *)0x0) {
        pMVar9 = (MethodInfo *)0x0;
        pUVar5 = UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
        a = Projectiles_BaseProjectile__GetHitCharacter(pUVar5,pMVar9);
        pUVar5 = UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
        if ((pUVar5 != (UnityEngine_Collider_o *)0x0) &&
           (__this_01 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
           __this_01 != (UnityEngine_GameObject_o *)0x0)) {
          method_00 = &MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler;
          __this_02 = UnityEngine_GameObject__GetComponent_object_
                                (__this_01,
                                 (MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicCollisionHandler);
          if (Il2CppMethodInitialized_0754517d == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
            Il2CppMethodInitialized_0754517d = '\x01';
          }
          pCVar2 = (__this->fields)._owner;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          pMVar9 = (MethodInfo *)0x0;
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          damage = 100;
          if (((bVar3) && (pCVar2 = (__this->fields)._owner, pCVar2 != (Characters_BaseCharacter_o *)0x0)) &&
             ((pCVar2->fields).CustomDamageEnabled != false)) {
            damage = (pCVar2->fields).CustomDamage;
          }
          pSVar6 = Projectiles_Rock1Projectile__GetName(__this,pMVar9);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar3) {
            pCVar2 = (__this->fields)._owner;
            pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            if ((pUVar7 == (UnityEngine_Transform_o *)0x0) ||
               (UVar12 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0),
               __this_02 == (CustomLogic_CustomLogicCollisionHandler_o *)0x0)) goto label_05872f90;
            method_00 = (MethodInfo **)(ulong)damage;
            CustomLogic_CustomLogicCollisionHandler__GetHit
                      (__this_02,pCVar2,pSVar6,damage,"Rock",UVar12,(MethodInfo *)0x0);
          }
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar3) {
            pSVar8 = (__this->fields)._team;
            if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
            }
            bVar3 = GameManagers_TeamInfo__SameTeam_5858ba0(a,pSVar8,(MethodInfo *)0x0);
            if (!bVar3) {
              __this_03 = (UnityEngine_Object_o *)
                          UnityEngine_Collision__get_collider(collision,(MethodInfo *)0x0);
              if ((__this_03 == (UnityEngine_Object_o *)0x0) ||
                 (pSVar8 = UnityEngine_Object__get_name(__this_03,(MethodInfo *)0x0),
                 a == (Characters_BaseCharacter_o *)0x0)) goto label_05872f90;
              method_00 = (MethodInfo **)"Rock";
              (*(a->klass->vtable)._96_GetHit.methodPtr)
                        (a,pSVar6,damage,"Rock",pSVar8,(a->klass->vtable)._96_GetHit.method);
            }
          }
          fVar11 = (__this->fields)._size;
          Projectiles_Rock1Projectile__KillPlayersInRadius
                    (__this,fVar11 + fVar11,damage,a,(MethodInfo *)method_00);
          if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
          }
          pSVar6 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom7;
          pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            UVar12 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
            pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              rotation = UnityEngine_Transform__get_rotation(pUVar7,(MethodInfo *)0x0);
              fVar11 = (__this->fields)._size;
              if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
              }
              Effects_EffectSpawner__Spawn
                        (pSVar6,UVar12,rotation,fVar11,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
              bVar3 = (*(__this->klass->vtable)._20_get_DestroyOnImpact.methodPtr)
                                (__this,(__this->klass->vtable)._20_get_DestroyOnImpact.method);
              if (bVar3) {
                (*(__this->klass->vtable)._17_DestroySelf.methodPtr)
                          (__this,(__this->klass->vtable)._17_DestroySelf.method);
                return;
              }
              return;
            }
          }
        }
      }
    }
  }
label_05872f90:
  ThrowNullReferenceException();
}


// Projectiles.Rock1Projectile$$KillPlayersInRadius
// il2cpp: void Projectiles_Rock1Projectile__KillPlayersInRadius (Projectiles_Rock1Projectile_o* __this, float radius, int32_t damage, Characters_BaseCharacter_o* damagedHuman, const MethodInfo* method);
// 0x58730d0
// eh: try 0x58732d3..0x5873686 -> pad 0x5873707 (+24 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58736d4..0x58736d9 -> pad 0x58736f8 cleanup
// eh: try 0x58736fb..0x5873705 -> pad 0x587375e catch (...) [compiler noexcept guard]
// eh: try 0x587371f..0x5873724 -> pad 0x5873749 cleanup
// eh: try 0x587374c..0x5873756 -> pad 0x587375e catch (...) [compiler noexcept guard]
// asm: 68 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58732cd: nop dword ptr [rax]
// asm:   0x587338d: jmp 0x58733b5
// asm:   0x5873406: jmp 0x587341b
// asm:   0x587368e: jmp 0x58736bc
// asm:   0x5873690: jmp 0x5873707
// asm:   0x5873692: jmp 0x58736bc
// asm:   0x5873694: jmp 0x5873707
// asm:   0x5873696: jmp 0x58736bc
// asm:   0x5873698: jmp 0x5873707
// asm:   0x587369a: jmp 0x58736bc
// asm:   0x587369c: jmp 0x5873707
// asm:   0x587369e: jmp 0x5873707
// asm:   0x58736a0: jmp 0x58736bc
// asm:   0x58736a2: jmp 0x58736bc
// asm:   0x58736a4: jmp 0x58736bc
// asm:   0x58736a6: jmp 0x5873707
// asm:   0x58736a8: jmp 0x5873707
// asm:   0x58736aa: jmp 0x5873707
// asm:   0x58736ac: jmp 0x58736bc
// asm:   0x58736ae: jmp 0x5873707
// asm:   0x58736b0: jmp 0x58736bc
// asm:   0x58736b2: jmp 0x5873707
// asm:   0x58736b4: jmp 0x58736bc
// asm:   0x58736b6: jmp 0x5873707
// asm:   0x58736b8: jmp 0x58736bc
// asm:   0x58736ba: jmp 0x5873707
// asm:   0x58736bc: mov rbp, rax
// asm:   0x58736bf: cmp edx, 1
// asm:   0x58736c2: jne 0x58736fb
// asm:   0x58736c4: mov rdi, rbp
// asm:   0x58736c7: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58736cc: mov rbx, qword ptr [rax]
// asm:   0x58736cf: mov qword ptr [rsp + 8], rbx
// asm:   0x58736d4: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58736d9: lea rax, [rip + 0x1a1a770]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose
// asm:   0x58736e0: mov rsi, qword ptr [rax]
// asm:   0x58736e3: lea rdi, [rsp + 0x30]
// asm:   0x58736e8: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x58736ed: test rbx, rbx
// asm:   0x58736f0: je 0x5873651
// asm:   0x58736f6: jmp 0x5873741
// asm:   0x58736f8: mov rbp, rax
// asm:   0x58736fb: lea rdi, [rsp + 8]
// asm:   0x5873700: call 0x2fcf6f0  ; il2cpp_runtime_helper_02fcf6f0()
// asm:   0x5873705: jmp 0x5873756
// asm:   0x5873707: mov rbp, rax
// asm:   0x587370a: cmp edx, 1
// asm:   0x587370d: jne 0x587374c
// asm:   0x587370f: mov rdi, rbp
// asm:   0x5873712: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5873717: mov rbx, qword ptr [rax]
// asm:   0x587371a: mov qword ptr [rsp + 8], rbx
// asm:   0x587371f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5873724: lea rax, [rip + 0x1a1a73d]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x587372b: mov rsi, qword ptr [rax]
// asm:   0x587372e: lea rdi, [rsp + 0x50]
// asm:   0x5873733: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5873738: test rbx, rbx
// asm:   0x587373b: je 0x587349d
// asm:   0x5873741: mov rdi, rbx
// asm:   0x5873744: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5873749: mov rbp, rax
// asm:   0x587374c: lea rdi, [rsp + 8]
// asm:   0x5873751: call 0x2fcf6c0  ; il2cpp_runtime_helper_02fcf6c0()
// asm:   0x5873756: mov rdi, rbp
// asm:   0x5873759: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x587375e: mov rdi, rax
// asm:   0x5873761: call 0x2ab61e0  ; __clang_call_terminate()

void Projectiles_Rock1Projectile__KillPlayersInRadius
               (Projectiles_Rock1Projectile_o *__this,float radius,int32_t damage,
               Characters_BaseCharacter_o *damagedHuman,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  GameManagers_BaseGameManager_o *pGVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Utility_BaseComponentCache_o *pUVar4;
  System_String_o *pSVar5;
  Characters_BaseCharacter_o *pCVar6;
  bool bVar7;
  UnityEngine_Transform_o *pUVar8;
  MethodInfo *method_00;
  float fVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar10;
  float in_XMM1_Db;
  float fVar11;
  float in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o UVar12;
  undefined1 local_f0 [16];
  Characters_BaseCharacter_o *local_e0;
  System_String_o *local_d8;
  Projectiles_Rock1Projectile_o *local_d0;
  undefined1 local_c8 [8];
  undefined8 uStack_c0;
  Characters_BaseCharacter_o *local_b8;
  undefined1 local_a8 [8];
  System_Collections_Generic_HashSet_Enumerator_T__o *pSStack_a0;
  Characters_BaseCharacter_o *local_98;
  float local_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [24];
  GameManagers_BaseGameManager_o *local_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [24];
  
  if (Il2CppMethodInitialized_0754517c == '\0') {
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
    Il2CppMethodInitialized_0754517c = '\x01';
  }
  local_a8 = (undefined1  [8])0x0;
  pSStack_a0 = (System_Collections_Generic_HashSet_Enumerator_T__o *)0x0;
  local_98 = (Characters_BaseCharacter_o *)0x0;
  local_c8 = (undefined1  [8])0x0;
  uStack_c0._0_4_ = 0;
  uStack_c0._4_4_ = 0;
  local_b8 = (Characters_BaseCharacter_o *)0x0;
  pGVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar3 != (GameManagers_BaseGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar3->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pGVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar3);
    }
  }
  pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    UVar12 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
    local_88 = UVar12.fields.z;
    local_78._8_4_ = extraout_XMM0_Dc;
    local_78._0_8_ = UVar12.fields._0_8_;
    local_78._12_4_ = extraout_XMM0_Dd;
    fStack_84 = in_XMM1_Db;
    fStack_80 = in_XMM1_Dc;
    uStack_7c = in_XMM1_Dd;
    local_d8 = Projectiles_Rock1Projectile__GetName(__this,method_00);
    if ((pGVar3 != (GameManagers_BaseGameManager_o *)0x0) &&
       (__this_00 = (System_Collections_Generic_HashSet_object__o *)(*(uint64_t *)((char *)pGVar3 + 0x40))
       , local_d0 = __this, local_60 = pGVar3,
       __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_f0,__this_00,
                 (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
      fStack_80 = fStack_84;
      local_98 = local_e0;
      local_a8 = (undefined1  [8])local_f0._0_8_;
      pSStack_a0 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_f0._8_8_;
      local_f0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      fStack_84 = (float)local_78._0_4_;
      uStack_7c = local_78._4_4_;
      local_f0._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_a8;
      while (bVar7 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                               ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_a8,
                                (MethodInfo_4C456D0 *)
                                MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext),
            pCVar6 = local_98, bVar7) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar7 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar7) {
          if (pCVar6 == (Characters_BaseCharacter_o *)0x0) {
            ThrowNullReferenceException();
          }
          if ((pCVar6->fields).Dead == false) {
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar7 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)damagedHuman,
                               (MethodInfo *)0x0);
            if (!bVar7) {
              pUVar4 = (pCVar6->fields).Cache;
              if (pUVar4 == (Utility_BaseComponentCache_o *)0x0) {
                ThrowNullReferenceException();
              }
              pUVar8 = (pUVar4->fields).Transform;
              if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
                ThrowNullReferenceException();
              }
              UVar12 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
              local_58 = UVar12.fields.z;
              local_48._8_4_ = extraout_XMM0_Dc_00;
              local_48._0_8_ = UVar12.fields._0_8_;
              local_48._12_4_ = extraout_XMM0_Dd_00;
              fStack_54 = in_XMM1_Db;
              fStack_50 = in_XMM1_Dc;
              uStack_4c = in_XMM1_Dd;
              if (Il2CppMethodInitialized_0753e7b7 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                Il2CppMethodInitialized_0753e7b7 = '\x01';
                uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
              }
              else {
                uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
              }
              if (uVar2 == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
              }
              fVar9 = ((float)local_48._4_4_ - (float)local_78._4_4_) *
                      ((float)local_48._4_4_ - (float)local_78._4_4_) +
                      ((float)local_48._0_4_ - fStack_84) * ((float)local_48._0_4_ - fStack_84) +
                      (local_58 - local_88) * (local_58 - local_88);
              if (fVar9 < 0.0) {
                fVar9 = sqrtf(fVar9);
              }
              else {
                fVar9 = SQRT(fVar9);
              }
              in_XMM1_Dd = 0;
              in_XMM1_Dc = 0.0;
              in_XMM1_Db = 0.0;
              if (fVar9 < radius) {
                in_XMM1_Dd = 0;
                in_XMM1_Dc = 0.0;
                in_XMM1_Db = 0.0;
                pSVar5 = (local_d0->fields)._team;
                if ((((Il2CppClass *)TypeInfo_GameManagers_TeamInfo)->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
                }
                bVar7 = GameManagers_TeamInfo__SameTeam_5858ba0(pCVar6,pSVar5,(MethodInfo *)0x0);
                if (!bVar7) {
                  (*(pCVar6->klass->vtable)._96_GetHit.methodPtr)
                            (pCVar6,local_d8,damage,"Rock","",
                             (pCVar6->klass->vtable)._96_GetHit.method);
                }
              }
            }
          }
        }
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_a8,
                 (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose)
      ;
      if ((*(uint64_t *)((char *)local_60 + 0x58)) != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_f0,(*(uint64_t *)((char *)local_60 + 0x58)),
                   (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_Horse_GetEnumerator);
        local_b8 = local_e0;
        local_c8 = (undefined1  [8])local_f0._0_8_;
        uStack_c0 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_f0._8_8_;
        local_f0._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        local_f0._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_c8;
        while( true ) {
          do {
            do {
              do {
                bVar7 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_c8,
                                   (MethodInfo_4C456D0 *)
                                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_MoveNext);
                pCVar6 = local_b8;
                if (!bVar7) {
                  System_Collections_Generic_HashSet_Enumerator_object___Dispose
                            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_c8,
                             (MethodInfo_4C456C0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_Horse_Dispose);
                  return;
                }
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar7 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
              } while (bVar7);
              if (pCVar6 == (Characters_BaseCharacter_o *)0x0) {
                ThrowNullReferenceException();
              }
            } while ((pCVar6->fields).Dead != false);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar7 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)damagedHuman,
                               (MethodInfo *)0x0);
          } while (bVar7);
          pUVar4 = (pCVar6->fields).Cache;
          if (pUVar4 == (Utility_BaseComponentCache_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar8 = (pUVar4->fields).Transform;
          if (pUVar8 == (UnityEngine_Transform_o *)0x0) break;
          UVar12 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
          fVar9 = UVar12.fields.y - (float)local_78._4_4_;
          fVar10 = UVar12.fields.z - local_88;
          fVar11 = UVar12.fields.x - fStack_84;
          if (fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10 < radius * radius) {
            pSVar5 = (local_d0->fields)._team;
            if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
            }
            bVar7 = GameManagers_TeamInfo__SameTeam_5858ba0(pCVar6,pSVar5,(MethodInfo *)0x0);
            if (!bVar7) {
              (*(pCVar6->klass->vtable)._96_GetHit.methodPtr)
                        (pCVar6,local_d8,damage,"Rock","",
                         (pCVar6->klass->vtable)._96_GetHit.method);
            }
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


// Projectiles.Rock1Projectile$$CalculateDamage
// il2cpp: int32_t Projectiles_Rock1Projectile__CalculateDamage (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x5872fa0

int32_t Projectiles_Rock1Projectile__CalculateDamage(Projectiles_Rock1Projectile_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_0754517d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754517d = '\x01';
  }
  pCVar1 = (__this->fields)._owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  iVar3 = 100;
  if (((bVar2) && (pCVar1 = (__this->fields)._owner, pCVar1 != (Characters_BaseCharacter_o *)0x0)) &&
     ((pCVar1->fields).CustomDamageEnabled != false)) {
    iVar3 = (pCVar1->fields).CustomDamage;
  }
  return iVar3;
}


// Projectiles.Rock1Projectile$$GetName
// il2cpp: System_String_o* Projectiles_Rock1Projectile__GetName (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x5873020

System_String_o *
Projectiles_Rock1Projectile__GetName(Projectiles_Rock1Projectile_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_0754517e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Rock");
    il2cpp_codegen_initialize_runtime_metadata(&"'s Rock");
    Il2CppMethodInitialized_0754517e = '\x01';
  }
  pCVar1 = (__this->fields)._owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return "Rock";
  }
  pCVar1 = (__this->fields)._owner;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar3 = System_String__Concat_52f0320
                     ((pCVar1->fields).RichTextName,"'s Rock",(MethodInfo *)0x0);
  return pSVar3;
}


// Projectiles.Rock1Projectile$$.ctor
// il2cpp: void Projectiles_Rock1Projectile___ctor (Projectiles_Rock1Projectile_o* __this, const MethodInfo* method);
// 0x5873770

void Projectiles_Rock1Projectile___ctor(Projectiles_Rock1Projectile_o *__this,MethodInfo *method)

{
  Projectiles_BaseProjectile___ctor((Projectiles_SmokeBombProjectile_o *)__this,method);
  return;
}


