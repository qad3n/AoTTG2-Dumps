// Type: Projectiles.SmokeBombProjectile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Projectiles/SmokeBombProjectile.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Projectiles/SmokeBombProjectile.cs  [CHANGED since prior version]
// --------------------------------

// Projectiles.SmokeBombProjectile$$get_DestroyDelay
// il2cpp: float Projectiles_SmokeBombProjectile__get_DestroyDelay (Projectiles_SmokeBombProjectile_o* __this, const MethodInfo* method);
// 0x3f1a3c0

float Projectiles_SmokeBombProjectile__get_DestroyDelay
                (Projectiles_SmokeBombProjectile_o *__this,MethodInfo *method)

{
  return 10.0;
}


// Projectiles.SmokeBombProjectile$$OnCollisionEnter
// il2cpp: void Projectiles_SmokeBombProjectile__OnCollisionEnter (Projectiles_SmokeBombProjectile_o* __this, UnityEngine_Collision_o* collision, const MethodInfo* method);
// 0x3f1a3d0

void Projectiles_SmokeBombProjectile__OnCollisionEnter
               (Projectiles_SmokeBombProjectile_o *__this,UnityEngine_Collision_o *collision,
               MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *y;
  Characters_BaseCharacter_o *pCVar3;
  UnityEngine_LayerMask_o mask;
  int32_t layerMask;
  bool_conflict bVar4;
  Photon_Pun_PhotonView_o *pPVar5;
  UnityEngine_Transform_o *pUVar6;
  System_Int32_array *layers;
  UnityEngine_Collider_array *pUVar7;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Object_o *x_00;
  System_String_o *pSVar8;
  uint uVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Quaternion_o rotation;
  
  if (DAT_05703cd3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    il2cpp_init_method_metadata(&MethodInfo_BasicTitan_GetComponent_BasicTitan);
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    il2cpp_init_method_metadata(&"SmokeBomb");
    DAT_05703cd3 = '\x01';
  }
  pPVar5 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar5 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((char)(pPVar5->fields)._IsMine_k__BackingField == '\0') ||
       ((char)(__this->fields).Disabled != '\0')) {
      return;
    }
    pUVar6 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      UVar10 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
      layers = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
      if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (layers != (System_Int32_array *)0x0) {
        if ((int)layers->max_length != 0) {
          layers->m_Items[0] = *(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x18);
          mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
          layerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pUVar7 = UnityEngine_Physics__OverlapSphere(UVar10,4.0,layerMask,(MethodInfo *)0x0);
          if (pUVar7 == (UnityEngine_Collider_array *)0x0) goto LAB_03f1a751;
          iVar1 = (int)pUVar7->max_length;
          if (iVar1 < 1) {
LAB_03f1a72b:
            (*(__this->klass->vtable)._17_DestroySelf.methodPtr)
                      (__this,(__this->klass->vtable)._17_DestroySelf.method);
            return;
          }
          uVar9 = 0;
          if (iVar1 != 0) {
            do {
              x = (UnityEngine_Object_o *)pUVar7->m_Items[(int)uVar9];
              if ((((x == (UnityEngine_Object_o *)0x0) ||
                   (pUVar6 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
                   pUVar6 == (UnityEngine_Transform_o *)0x0)) ||
                  (pUVar6 = UnityEngine_Transform__get_root(pUVar6,(MethodInfo *)0x0),
                  pUVar6 == (UnityEngine_Transform_o *)0x0)) ||
                 (__this_00 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
                 __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03f1a751;
              x_00 = (UnityEngine_Object_o *)
                     UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_BasicTitan_GetComponent_BasicTitan);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar4 = UnityEngine_Object__op_Inequality
                                (x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar4 != '\0') {
                if ((x_00 == (UnityEngine_Object_o *)0x0) || (x_00[10].monitor == (void *)0x0))
                goto LAB_03f1a751;
                y = *(UnityEngine_Object_o **)((long)x_00[10].monitor + 0xc0);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar4 = UnityEngine_Object__op_Equality(x,y,(MethodInfo *)0x0);
                if ((char)bVar4 != '\0') {
                  if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pSVar8 = *(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0x38);
                  pUVar6 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto LAB_03f1a751;
                  UVar10 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
                  rotation = UnityEngine_Quaternion__Internal_FromEulerRad
                                       ((UnityEngine_Vector3_o)ZEXT812(0x4096cbe4),(MethodInfo *)0x0
                                       );
                  Effects_EffectSpawner__Spawn
                            (pSVar8,UVar10,rotation,1.0,1,(System_Object_array *)0x0,
                             (MethodInfo *)0x0);
                  pCVar3 = (__this->fields)._owner;
                  pSVar8 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                  (*x_00->klass[4]._1.methods)
                            (x_00,pCVar3,0,"SmokeBomb",pSVar8,x_00->klass[4]._1.nestedTypes);
                }
              }
              uVar9 = uVar9 + 1;
              uVar2 = (uint)pUVar7->max_length;
              if ((int)uVar2 <= (int)uVar9) goto LAB_03f1a72b;
            } while (uVar9 < uVar2);
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
LAB_03f1a751:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Projectiles.SmokeBombProjectile$$.ctor
// il2cpp: void Projectiles_SmokeBombProjectile___ctor (Projectiles_SmokeBombProjectile_o* __this, const MethodInfo* method);
// 0x3f1a760

void Projectiles_SmokeBombProjectile___ctor
               (Projectiles_SmokeBombProjectile_o *__this,MethodInfo *method)

{
  Projectiles_BaseProjectile___ctor(__this,method);
  return;
}


