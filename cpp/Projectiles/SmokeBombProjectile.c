// Type: Projectiles.SmokeBombProjectile
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Projectiles/SmokeBombProjectile.cs
// Prior real C# source (older reference): Assets/Scripts/Projectiles/SmokeBombProjectile.cs
// --------------------------------

// Projectiles.SmokeBombProjectile$$get_DestroyDelay
// il2cpp: float Projectiles_SmokeBombProjectile__get_DestroyDelay (Projectiles_SmokeBombProjectile_o* __this, const MethodInfo* method);
// 0x5873880

float Projectiles_SmokeBombProjectile__get_DestroyDelay
                (Projectiles_SmokeBombProjectile_o *__this,MethodInfo *method)

{
  return 10.0;
}


// Projectiles.SmokeBombProjectile$$OnCollisionEnter
// il2cpp: void Projectiles_SmokeBombProjectile__OnCollisionEnter (Projectiles_SmokeBombProjectile_o* __this, UnityEngine_Collision_o* collision, const MethodInfo* method);
// 0x5873890

void Projectiles_SmokeBombProjectile__OnCollisionEnter
               (Projectiles_SmokeBombProjectile_o *__this,UnityEngine_Collision_o *collision,
               MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  UnityEngine_Object_o *x;
  Characters_BaseTitanComponentCache_o *pCVar2;
  UnityEngine_Object_o *y;
  bool bVar3;
  UnityEngine_LayerMask_o mask;
  int32_t layerMask;
  uint uVar4;
  Photon_Pun_PhotonView_o *pPVar5;
  UnityEngine_Transform_o *pUVar6;
  System_Int32_array *layers;
  UnityEngine_Collider_array *pUVar7;
  System_String_o *pSVar8;
  UnityEngine_GameObject_o *__this_00;
  Characters_BasicTitan_o *x_00;
  uint uVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Quaternion_o UVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_Fields UStack_68;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [24];
  
  if (Il2CppMethodInitialized_07545180 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&"SmokeBomb");
    Il2CppMethodInitialized_07545180 = '\x01';
  }
  pPVar5 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar5 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((pPVar5->fields)._IsMine_k__BackingField == false) || ((__this->fields).Disabled != false)) {
      return;
    }
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      UVar17 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
      layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
      if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
      }
      if (layers != (System_Int32_array *)0x0) {
        if ((int)layers->max_length == 0) {
label_05873c4d:
          ThrowIndexOutOfRangeException();
        }
        layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->Hurtbox;
        mask = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
        layerMask = UnityEngine_LayerMask__op_Implicit(mask,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
        }
        uVar10 = 0;
        uVar11 = 0;
        pUVar7 = UnityEngine_Physics__OverlapSphere_69dcbd0(UVar17,4.0,layerMask,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_Collider_array *)0x0) {
          uVar4 = (uint)pUVar7->max_length;
          if (0 < (int)uVar4) {
            uVar9 = 0;
            do {
              if (uVar4 <= uVar9) goto label_05873c4d;
              x = (UnityEngine_Object_o *)pUVar7->m_Items[(int)uVar9];
              if ((((x == (UnityEngine_Object_o *)0x0) ||
                   (pUVar6 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
                   pUVar6 == (UnityEngine_Transform_o *)0x0)) ||
                  (pUVar6 = UnityEngine_Transform__get_root(pUVar6,(MethodInfo *)0x0),
                  pUVar6 == (UnityEngine_Transform_o *)0x0)) ||
                 (__this_00 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
                 __this_00 == (UnityEngine_GameObject_o *)0x0)) goto label_05873c48;
              x_00 = UnityEngine_GameObject__GetComponent_object_
                               (__this_00,
                                (MethodInfo_353B730 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_BasicTitan);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar3 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar3) {
                if ((x_00 == (Characters_BasicTitan_o *)0x0) ||
                   (pCVar2 = (x_00->fields).BaseTitanCache,
                   pCVar2 == (Characters_BaseTitanComponentCache_o *)0x0)) goto label_05873c48;
                y = (UnityEngine_Object_o *)(pCVar2->fields).EyesHurtbox;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar3 = UnityEngine_Object__op_Equality(x,y,(MethodInfo *)0x0);
                if (bVar3) {
                  if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
                  }
                  pSVar8 = TypeInfo_Effects_EffectPrefabs->static_fields->CriticalHit;
                  pUVar6 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_05873c48;
                  UVar17 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
                  UStack_68.x = 4.712389;
                  UStack_68.y = 0.0;
                  UStack_68.z = 0.0;
                  UVar16 = UnityEngine_Quaternion__Internal_FromEulerRad
                                     ((UnityEngine_Vector3_o *)&UStack_68,(MethodInfo *)0x0);
                  fVar12 = UVar16.fields.x;
                  fVar13 = UVar16.fields.y;
                  fVar14 = UVar16.fields.z;
                  fVar15 = UVar16.fields.w;
                  if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
                    auStack_48._8_4_ = extraout_XMM0_Dc;
                    auStack_48._0_8_ = UVar16.fields._0_8_;
                    auStack_48._12_4_ = extraout_XMM0_Dd;
                    auStack_58._8_4_ = uVar10;
                    auStack_58._0_8_ = UVar16.fields._8_8_;
                    auStack_58._12_4_ = uVar11;
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
                    fVar12 = (float)auStack_48._0_4_;
                    fVar13 = (float)auStack_48._4_4_;
                    fVar14 = (float)auStack_58._0_4_;
                    fVar15 = (float)auStack_58._4_4_;
                  }
                  uVar10 = 0;
                  uVar11 = 0;
                  UVar16.fields.y = fVar13;
                  UVar16.fields.x = fVar12;
                  UVar16.fields.w = fVar15;
                  UVar16.fields.z = fVar14;
                  Effects_EffectSpawner__Spawn
                            (pSVar8,UVar17,UVar16,1.0,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
                  pCVar1 = (__this->fields)._owner;
                  pSVar8 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                  (*(x_00->klass->vtable)._95_GetHit.methodPtr)
                            (x_00,pCVar1,0,"SmokeBomb",pSVar8,
                             (x_00->klass->vtable)._95_GetHit.method);
                }
              }
              uVar9 = uVar9 + 1;
              uVar4 = (uint)pUVar7->max_length;
            } while ((int)uVar9 < (int)uVar4);
          }
          (*(__this->klass->vtable)._17_DestroySelf.methodPtr)
                    (__this,(__this->klass->vtable)._17_DestroySelf.method);
          return;
        }
      }
    }
  }
label_05873c48:
  ThrowNullReferenceException();
}


// Projectiles.SmokeBombProjectile$$.ctor
// il2cpp: void Projectiles_SmokeBombProjectile___ctor (Projectiles_SmokeBombProjectile_o* __this, const MethodInfo* method);
// 0x5873c60

void Projectiles_SmokeBombProjectile___ctor(Projectiles_SmokeBombProjectile_o *__this,MethodInfo *method)

{
  Projectiles_BaseProjectile___ctor(__this,method);
  return;
}


