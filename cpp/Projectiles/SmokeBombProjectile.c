// Type: Projectiles.SmokeBombProjectile
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Projectiles/SmokeBombProjectile.cs
// Prior real C# source (older reference): Assets/Scripts/Projectiles/SmokeBombProjectile.cs
// --------------------------------

// Projectiles.SmokeBombProjectile$$get_DestroyDelay
// il2cpp: float Projectiles_SmokeBombProjectile__get_DestroyDelay (Projectiles_SmokeBombProjectile_o* __this, const MethodInfo* method);
// 0x1820b9980

float
Projectiles_SmokeBombProjectile__get_DestroyDelay(Projectiles_SmokeBombProjectile_o* __this, MethodInfo* method)

{
  return 10.0;
}


// Projectiles.SmokeBombProjectile$$OnCollisionEnter
// il2cpp: void Projectiles_SmokeBombProjectile__OnCollisionEnter (Projectiles_SmokeBombProjectile_o* __this, UnityEngine_Collision_o* collision, const MethodInfo* method);
// 0x1820d0ad0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820d0cac: nop dword ptr [rax]

void Projectiles_SmokeBombProjectile__OnCollisionEnter
               (Projectiles_SmokeBombProjectile_o *__this,UnityEngine_Collision_o *collision,
               MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  UnityEngine_Object_o *x;
  Characters_BaseTitanComponentCache_o *pCVar4;
  UnityEngine_Object_o *y;
  Characters_BaseCharacter_o *pCVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  UnityEngine_LayerMask_o UVar9;
  Photon_Pun_PhotonView_o *pPVar10;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_Vector3_o *pUVar12;
  System_Int32_array *layers;
  UnityEngine_Collider_array *pUVar13;
  UnityEngine_GameObject_o *__this_00;
  Characters_BasicTitan_o *x_00;
  UnityEngine_Quaternion_o *pUVar14;
  System_String_o *pSVar15;
  uint uVar16;
  UnityEngine_Vector3_Fields local_a8;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Vector3_o local_88;
  UnityEngine_Quaternion_Fields local_78;
  UnityEngine_Quaternion_o local_68 [4];
  
  if (Il2CppMethodInitialized_184346925 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&"SmokeBomb");
    Il2CppMethodInitialized_184346925 = '\x01';
  }
  pPVar10 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar10 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((pPVar10->fields)._IsMine_k__BackingField == false) || ((__this->fields).Disabled != false)) {
      return;
    }
    pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
      pUVar12 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)&local_98,pUVar11,(MethodInfo *)0x0);
      uVar1._0_4_ = (pUVar12->fields).x;
      uVar1._4_4_ = (pUVar12->fields).y;
      fVar3 = (pUVar12->fields).z;
      layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,1);
      if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
      }
      if (layers != (System_Int32_array *)0x0) {
        if ((int)layers->max_length != 0) {
          layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->Hurtbox;
          UVar9 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
          UVar9 = UnityEngine_LayerMask__op_Implicit((int32_t)UVar9.fields.m_Mask,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
          }
          local_a8._0_8_ = uVar1;
          local_a8.z = fVar3;
          pUVar13 = UnityEngine_Physics__OverlapSphere_2fe3980
                              ((UnityEngine_Vector3_o *)&local_a8,4.0,(int32_t)UVar9.fields.m_Mask,
                               (MethodInfo *)0x0);
          if (pUVar13 == (UnityEngine_Collider_array *)0x0) goto label_1820d0f07;
          uVar16 = 0;
          while( true ) {
            if ((int)pUVar13->max_length <= (int)uVar16) {
              (*(__this->klass->vtable)._17_DestroySelf.methodPtr)
                        (__this,(__this->klass->vtable)._17_DestroySelf.method);
              return;
            }
            if ((uint)pUVar13->max_length <= uVar16) break;
            x = (UnityEngine_Object_o *)pUVar13->m_Items[(int)uVar16];
            if ((((x == (UnityEngine_Object_o *)0x0) ||
                 (pUVar11 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
                 pUVar11 == (UnityEngine_Transform_o *)0x0)) ||
                (pUVar11 = UnityEngine_Transform__GetRoot(pUVar11,(MethodInfo *)0x0),
                pUVar11 == (UnityEngine_Transform_o *)0x0)) ||
               (__this_00 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0),
               __this_00 == (UnityEngine_GameObject_o *)0x0)) goto label_1820d0f07;
            x_00 = UnityEngine_GameObject__GetComponent_object_
                             (__this_00,
                              (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_BasicTitan);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar8 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar8) {
              if ((x_00 == (Characters_BasicTitan_o *)0x0) ||
                 (pCVar4 = (x_00->fields).BaseTitanCache,
                 pCVar4 == (Characters_BaseTitanComponentCache_o *)0x0)) goto label_1820d0f07;
              y = (UnityEngine_Object_o *)(pCVar4->fields).EyesHurtbox;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar8 = UnityEngine_Object__op_Equality(x,y,(MethodInfo *)0x0);
              if (bVar8) {
                if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
                }
                pSVar15 = TypeInfo_Effects_EffectPrefabs->static_fields->CriticalHit;
                pUVar11 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_1820d0f07;
                pUVar12 = UnityEngine_Transform__get_position(&local_88,pUVar11,(MethodInfo *)0x0);
                local_a8.x = 4.712389;
                local_a8.y = 0.0;
                local_a8.z = 0.0;
                uVar2._0_4_ = (pUVar12->fields).x;
                uVar2._4_4_ = (pUVar12->fields).y;
                fVar3 = (pUVar12->fields).z;
                pUVar14 = UnityEngine_Quaternion__Internal_FromEulerRad
                                    (local_68,(UnityEngine_Vector3_o *)&local_a8,(MethodInfo *)0x0);
                uVar6._0_4_ = (pUVar14->fields).x;
                uVar6._4_4_ = (pUVar14->fields).y;
                uVar7._0_4_ = (pUVar14->fields).z;
                uVar7._4_4_ = (pUVar14->fields).w;
                if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
                }
                local_98._0_8_ = uVar2;
                local_98.z = fVar3;
                local_78._0_8_ = uVar6;
                local_78._8_8_ = uVar7;
                Effects_EffectSpawner__Spawn
                          (pSVar15,(UnityEngine_Vector3_o *)&local_98,(UnityEngine_Quaternion_o *)&local_78,
                           1.0,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
                pCVar5 = (__this->fields)._owner;
                pSVar15 = UnityEngine_Object__get_name(x,(MethodInfo *)0x0);
                il2cpp_runtime_helper_18017a990(0x5f,x_00,pCVar5,0,"SmokeBomb",pSVar15);
              }
            }
            uVar16 = uVar16 + 1;
          }
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_1820d0f07:
  ThrowNullReferenceException();
}


// Projectiles.SmokeBombProjectile$$.ctor
// il2cpp: void Projectiles_SmokeBombProjectile___ctor (Projectiles_SmokeBombProjectile_o* __this, const MethodInfo* method);
// 0x1820b6310

void Projectiles_SmokeBombProjectile___ctor(Projectiles_SmokeBombProjectile_o *__this,MethodInfo *method)

{
  Projectiles_BaseProjectile___ctor((Projectiles_BladeThrowProjectile_o *)__this,(MethodInfo *)0x0);
  return;
}


