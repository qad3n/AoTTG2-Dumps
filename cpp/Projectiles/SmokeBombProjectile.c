// Type: Projectiles.SmokeBombProjectile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Projectiles/SmokeBombProjectile.cs
// Prior real C# source (older reference): Assets/Scripts/Projectiles/SmokeBombProjectile.cs
// --------------------------------

// Projectiles.SmokeBombProjectile$$get_DestroyDelay
// il2cpp: float Projectiles_SmokeBombProjectile__get_DestroyDelay (Projectiles_SmokeBombProjectile_o* __this, const MethodInfo* method);
// 0x42094b0

float Projectiles_SmokeBombProjectile__get_DestroyDelay
                (Projectiles_SmokeBombProjectile_o *__this,MethodInfo *method)

{
  return 10.0;
}


// Projectiles.SmokeBombProjectile$$OnCollisionEnter
// il2cpp: void Projectiles_SmokeBombProjectile__OnCollisionEnter (Projectiles_SmokeBombProjectile_o* __this, UnityEngine_Collision_o* collision, const MethodInfo* method);
// 0x42094c0

void Projectiles_SmokeBombProjectile__OnCollisionEnter
               (Projectiles_SmokeBombProjectile_o *__this,UnityEngine_Collision_o *collision,
               MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  Projectiles_SmokeBombProjectile_o *x;
  System_Threading_CancellationTokenSource_o *pSVar3;
  System_Threading_CancellationTokenSource_c *y;
  Characters_BaseCharacter_o *pCVar4;
  UnityEngine_LayerMask_o mask;
  uint uVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_Collider__o *__this_01;
  System_Collections_Generic_List_ParticleSystem__o *__this_02;
  Photon_Pun_PhotonView_o *pPVar7;
  UnityEngine_Transform_o *pUVar8;
  System_Int32_array *layers;
  UnityEngine_Collider_array *pUVar9;
  Projectiles_SmokeBombProjectile_o *pPVar10;
  Projectiles_SmokeBombProjectile_o *__this_03;
  UnityEngine_GameObject_o *__this_04;
  System_String_o *pSVar11;
  Projectiles_SmokeBombProjectile_o *__this_05;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar12;
  
  if (g_data_057ad8f4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasicTitan_GetComponent_BasicTitan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Physics);
    il2cpp_runtime_helper_023445d0(&"SmokeBomb");
    g_data_057ad8f4 = '\x01';
  }
  __this_05 = __this;
  pPVar7 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar7 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((char)(pPVar7->fields)._IsMine_k__BackingField == '\0') || ((char)(__this->fields).Disabled != '\0'))
    {
      return;
    }
    __this_05 = __this;
    pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      UVar12 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
      layers = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int);
      if (*(int *)((long)&TypeInfo_PhysicsLayer[1].klass + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_05 = TypeInfo_PhysicsLayer;
      if (layers != (System_Int32_array *)0x0) {
        if ((int)layers->max_length == 0) goto Projectiles_BaseProjectile___ctor;
        layers->m_Items[0] = *(int32_t *)(*(long *)&(TypeInfo_PhysicsLayer->fields)._velocity.fields.z + 0x18);
        mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
        uVar5 = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_05 = (Projectiles_SmokeBombProjectile_o *)(ulong)uVar5;
        pUVar9 = UnityEngine_Physics__OverlapSphere_4e7aff0(UVar12,4.0,uVar5,(MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_Collider_array *)0x0) {
          iVar1 = (int)pUVar9->max_length;
          if (iVar1 < 1) {
label_0420981b:
            (*(__this->klass->vtable)._17_DestroySelf.methodPtr)
                      (__this,(__this->klass->vtable)._17_DestroySelf.method);
            return;
          }
          uVar5 = 0;
          if (iVar1 != 0) {
            do {
              x = (Projectiles_SmokeBombProjectile_o *)pUVar9->m_Items[(int)uVar5];
              if ((((x == (Projectiles_SmokeBombProjectile_o *)0x0) ||
                   (__this_05 = x,
                   pPVar10 = (Projectiles_SmokeBombProjectile_o *)
                             UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
                   pPVar10 == (Projectiles_SmokeBombProjectile_o *)0x0)) ||
                  (__this_03 = (Projectiles_SmokeBombProjectile_o *)
                               UnityEngine_Transform__get_root
                                         ((UnityEngine_Transform_o *)pPVar10,(MethodInfo *)0x0),
                  __this_05 = pPVar10, __this_03 == (Projectiles_SmokeBombProjectile_o *)0x0)) ||
                 (__this_04 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
                 __this_05 = __this_03, __this_04 == (UnityEngine_GameObject_o *)0x0)) goto label_04209841;
              pPVar10 = (Projectiles_SmokeBombProjectile_o *)
                        UnityEngine_GameObject__GetComponent_object_(__this_04,MethodInfo_BasicTitan_GetComponent_BasicTitan);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              __this_05 = pPVar10;
              bVar6 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pPVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                );
              if ((char)bVar6 != '\0') {
                if ((pPVar10 == (Projectiles_SmokeBombProjectile_o *)0x0) ||
                   (pSVar3 = pPVar10[1].fields.m_CancellationTokenSource,
                   pSVar3 == (System_Threading_CancellationTokenSource_o *)0x0)) goto label_04209841;
                y = pSVar3[3].klass;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                __this_05 = x;
                bVar6 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
                if ((char)bVar6 != '\0') {
                  if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x38);
                  __this_05 = __this;
                  pUVar8 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_04209841;
                  UVar12 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
                  rotation = UnityEngine_Quaternion__Internal_FromEulerRad
                                       ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0);
                  Effects_EffectSpawner__Spawn
                            (pSVar11,UVar12,rotation,1.0,1,(System_Object_array *)0x0,(MethodInfo *)0x0);
                  pCVar4 = (__this->fields)._owner;
                  pSVar11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)x,(MethodInfo *)0x0);
                  (*pPVar10->klass[2].vtable._5_Awake.methodPtr)
                            (pPVar10,pCVar4,0,"SmokeBomb",pSVar11,pPVar10->klass[2].vtable._5_Awake.method);
                  __this_05 = pPVar10;
                }
              }
              uVar5 = uVar5 + 1;
              uVar2 = (uint)pUVar9->max_length;
              if ((int)uVar2 <= (int)uVar5) goto label_0420981b;
            } while (uVar5 < uVar2);
          }
          goto Projectiles_BaseProjectile___ctor;
        }
      }
    }
  }
label_04209841:
  il2cpp_runtime_helper_022b2c90();
Projectiles_BaseProjectile___ctor:
  il2cpp_runtime_helper_022b2ca0();
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
  (__this_05->fields)._hideObjects = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this_05->fields)._hideObjects,__this_00);
  __this_01 = (System_Collections_Generic_List_Collider__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Collider);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_UnityEngine_Collider);
  (__this_05->fields)._colliders = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this_05->fields)._colliders,__this_01);
  __this_02 = (System_Collections_Generic_List_ParticleSystem__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_ParticleSystem);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_UnityEngine_ParticleSystem);
  (__this_05->fields)._fadeTrails = __this_02;
  il2cpp_runtime_helper_022b4080(&(__this_05->fields)._fadeTrails);
  Characters_BaseMovementSync___ctor((Characters_BaseMovementSync_o *)__this_05,(MethodInfo *)0x0);
  return;
}


// Projectiles.SmokeBombProjectile$$.ctor
// il2cpp: void Projectiles_SmokeBombProjectile___ctor (Projectiles_SmokeBombProjectile_o* __this, const MethodInfo* method);
// 0x4209850

void Projectiles_SmokeBombProjectile___ctor(Projectiles_SmokeBombProjectile_o *__this,MethodInfo *method)

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


