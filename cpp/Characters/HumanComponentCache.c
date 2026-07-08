// Type: Characters.HumanComponentCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/HumanComponentCache.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/HumanComponentCache.cs  [CHANGED since prior version]
// --------------------------------

// Characters.HumanComponentCache$$.ctor
// il2cpp: void Characters_HumanComponentCache___ctor (Characters_HumanComponentCache_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x3fd3450

void Characters_HumanComponentCache___ctor
               (Characters_HumanComponentCache_o *__this,UnityEngine_GameObject_o *owner,
               MethodInfo *method)

{
  UnityEngine_Transform_o **ppUVar1;
  UnityEngine_Transform_o **ppUVar2;
  UnityEngine_ParticleSystem_o **ppUVar3;
  bool_conflict bVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_ParticleSystem_o *pUVar6;
  Characters_BaseCharacter_o *owner_00;
  UnityEngine_GameObject_o *pUVar7;
  Characters_BaseHitbox_o *pCVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_ParticleSystem_EmissionModule_Fields local_38;
  
  if (DAT_057040ed == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ParticleSystem_GetComponentInChildren_ParticleSy);
    il2cpp_init_method_metadata(&MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"GroundLeft");
    il2cpp_init_method_metadata(&"checkBox");
    il2cpp_init_method_metadata(&"neck");
    il2cpp_init_method_metadata(&"fire1");
    il2cpp_init_method_metadata(&"slideSparks");
    il2cpp_init_method_metadata(&"shoulder_L/upper_arm_L");
    il2cpp_init_method_metadata(&"hand_R");
    il2cpp_init_method_metadata(&"head");
    il2cpp_init_method_metadata(&"Human/Prefabs/HumanSounds");
    il2cpp_init_method_metadata(&"GroundRight");
    il2cpp_init_method_metadata(&"hookRefL1");
    il2cpp_init_method_metadata(&"3dmg_smoke");
    il2cpp_init_method_metadata(&"buff1");
    il2cpp_init_method_metadata(&"shoulder_R/upper_arm_R");
    il2cpp_init_method_metadata(&"chest");
    il2cpp_init_method_metadata(&"hookRef");
    il2cpp_init_method_metadata(&"forearm_L");
    il2cpp_init_method_metadata(&"hand_L");
    il2cpp_init_method_metadata(&"hookRefR1");
    il2cpp_init_method_metadata(&"Armature/Core/Controller_Body/hip/spine");
    il2cpp_init_method_metadata(&"buff2");
    il2cpp_init_method_metadata(&"speedFX");
    il2cpp_init_method_metadata(&"forearm_R");
    DAT_057040ed = '\x01';
  }
  local_38.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
  Utility_BaseComponentCache___ctor((Utility_BaseComponentCache_o *)__this,owner,(MethodInfo *)0x0);
  pUVar5 = (__this->fields).Transform;
  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
    pUVar5 = UnityEngine_Transform__Find(pUVar5,"Armature/Core/Controller_Body/hip/spine",(MethodInfo *)0x0);
    (__this->fields).Spine = pUVar5;
    il2cpp_runtime_glue(&(__this->fields).Spine,pUVar5);
    pUVar5 = (__this->fields).Spine;
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      pUVar5 = UnityEngine_Transform__Find(pUVar5,"chest",(MethodInfo *)0x0);
      (__this->fields).Chest = pUVar5;
      il2cpp_runtime_glue(&(__this->fields).Chest,pUVar5);
      pUVar5 = (__this->fields).Transform;
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        pUVar5 = UnityEngine_Transform__Find(pUVar5,"GroundLeft",(MethodInfo *)0x0);
        (__this->fields).GroundLeft = pUVar5;
        il2cpp_runtime_glue(&(__this->fields).GroundLeft,pUVar5);
        pUVar5 = (__this->fields).Transform;
        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
          pUVar5 = UnityEngine_Transform__Find(pUVar5,"GroundRight",(MethodInfo *)0x0);
          (__this->fields).GroundRight = pUVar5;
          il2cpp_runtime_glue(&(__this->fields).GroundRight,pUVar5);
          pUVar5 = (__this->fields).Chest;
          if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
            pUVar5 = UnityEngine_Transform__Find(pUVar5,"neck",(MethodInfo *)0x0);
            (__this->fields).Neck = pUVar5;
            il2cpp_runtime_glue(&(__this->fields).Neck,pUVar5);
            pUVar5 = (__this->fields).Neck;
            if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
              pUVar5 = UnityEngine_Transform__Find(pUVar5,"head",(MethodInfo *)0x0);
              (__this->fields).Head = pUVar5;
              il2cpp_runtime_glue(&(__this->fields).Head,pUVar5);
              pUVar5 = (__this->fields).Chest;
              if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                pUVar5 = UnityEngine_Transform__Find(pUVar5,"shoulder_L/upper_arm_L",(MethodInfo *)0x0);
                (__this->fields).UpperarmL = pUVar5;
                il2cpp_runtime_glue(&(__this->fields).UpperarmL,pUVar5);
                pUVar5 = (__this->fields).Chest;
                if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                  pUVar5 = UnityEngine_Transform__Find(pUVar5,"shoulder_R/upper_arm_R",(MethodInfo *)0x0);
                  (__this->fields).UpperarmR = pUVar5;
                  il2cpp_runtime_glue(&(__this->fields).UpperarmR,pUVar5);
                  pUVar5 = (__this->fields).UpperarmL;
                  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                    pUVar5 = UnityEngine_Transform__Find(pUVar5,"forearm_L",(MethodInfo *)0x0);
                    (__this->fields).ForearmL = pUVar5;
                    il2cpp_runtime_glue(&(__this->fields).ForearmL,pUVar5);
                    pUVar5 = (__this->fields).UpperarmR;
                    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                      pUVar5 = UnityEngine_Transform__Find(pUVar5,"forearm_R",(MethodInfo *)0x0);
                      (__this->fields).ForearmR = pUVar5;
                      il2cpp_runtime_glue(&(__this->fields).ForearmR,pUVar5);
                      pUVar5 = (__this->fields).ForearmL;
                      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                        pUVar5 = UnityEngine_Transform__Find(pUVar5,"hand_L",(MethodInfo *)0x0);
                        ppUVar1 = &(__this->fields).HandL;
                        (__this->fields).HandL = pUVar5;
                        il2cpp_runtime_glue(ppUVar1,pUVar5);
                        pUVar5 = (__this->fields).ForearmR;
                        if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                          pUVar5 = UnityEngine_Transform__Find
                                             (pUVar5,"hand_R",(MethodInfo *)0x0);
                          ppUVar2 = &(__this->fields).HandR;
                          (__this->fields).HandR = pUVar5;
                          il2cpp_runtime_glue(ppUVar2,pUVar5);
                          pUVar5 = (__this->fields).Transform;
                          if ((pUVar5 != (UnityEngine_Transform_o *)0x0) &&
                             (pUVar5 = UnityEngine_Transform__Find
                                                 (pUVar5,"slideSparks",(MethodInfo *)0x0),
                             pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                            pUVar6 = (UnityEngine_ParticleSystem_o *)
                                     UnityEngine_Component__GetComponent<object>
                                               ((UnityEngine_Component_o *)pUVar5,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
                            ppUVar3 = &(__this->fields).Sparks;
                            (__this->fields).Sparks = pUVar6;
                            il2cpp_runtime_glue(ppUVar3,pUVar6);
                            pUVar5 = (__this->fields).Transform;
                            if ((pUVar5 != (UnityEngine_Transform_o *)0x0) &&
                               (pUVar5 = UnityEngine_Transform__Find
                                                   (pUVar5,"3dmg_smoke",(MethodInfo *)0x0),
                               pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                              pUVar6 = (UnityEngine_ParticleSystem_o *)
                                       UnityEngine_Component__GetComponent<object>
                                                 ((UnityEngine_Component_o *)pUVar5,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
                              (__this->fields).Smoke = pUVar6;
                              il2cpp_runtime_glue(&(__this->fields).Smoke,pUVar6);
                              pUVar5 = (__this->fields).Transform;
                              if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                                pUVar5 = UnityEngine_Transform__Find
                                                   (pUVar5,"buff1",(MethodInfo *)0x0);
                                (__this->fields).Buff1 = pUVar5;
                                il2cpp_runtime_glue(&(__this->fields).Buff1,pUVar5);
                                pUVar5 = (__this->fields).Transform;
                                if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                                  pUVar5 = UnityEngine_Transform__Find
                                                     (pUVar5,"buff2",(MethodInfo *)0x0);
                                  (__this->fields).Buff2 = pUVar5;
                                  il2cpp_runtime_glue(&(__this->fields).Buff2,pUVar5);
                                  pUVar5 = (__this->fields).Transform;
                                  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                                    pUVar5 = UnityEngine_Transform__Find
                                                       (pUVar5,"fire1",(MethodInfo *)0x0);
                                    (__this->fields).Fire1 = pUVar5;
                                    il2cpp_runtime_glue(&(__this->fields).Fire1);
                                    pUVar6 = (__this->fields).Smoke;
                                    if (pUVar6 != (UnityEngine_ParticleSystem_o *)0x0) {
                                      local_38.m_ParticleSystem =
                                           (UnityEngine_ParticleSystem_o *)
                                           UnityEngine_ParticleSystem__get_emission
                                                     (pUVar6,(MethodInfo *)0x0);
                                      UnityEngine_ParticleSystem_EmissionModule__set_enabled
                                                ((UnityEngine_ParticleSystem_EmissionModule_o)
                                                 &local_38,0,(MethodInfo *)0x0);
                                      pUVar6 = *ppUVar3;
                                      if (pUVar6 != (UnityEngine_ParticleSystem_o *)0x0) {
                                        local_38.m_ParticleSystem =
                                             (UnityEngine_ParticleSystem_o *)
                                             UnityEngine_ParticleSystem__get_emission
                                                       (pUVar6,(MethodInfo *)0x0);
                                        UnityEngine_ParticleSystem_EmissionModule__set_enabled
                                                  ((UnityEngine_ParticleSystem_EmissionModule_o)
                                                   &local_38,0,(MethodInfo *)0x0);
                                        pUVar5 = (__this->fields).Transform;
                                        if ((pUVar5 != (UnityEngine_Transform_o *)0x0) &&
                                           (pUVar5 = UnityEngine_Transform__Find
                                                               (pUVar5,"speedFX",
                                                                (MethodInfo *)0x0),
                                           pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                                          pUVar6 = (UnityEngine_ParticleSystem_o *)
                                                                                                      
                                                  UnityEngine_Component__GetComponentInChildren<object>
                                                            ((UnityEngine_Component_o *)pUVar5,
                                                             MethodInfo_ParticleSystem_GetComponentInChildren_ParticleSy);
                                          (__this->fields).Wind = pUVar6;
                                          il2cpp_runtime_glue(&(__this->fields).Wind);
                                          pUVar6 = (__this->fields).Wind;
                                          if (pUVar6 != (UnityEngine_ParticleSystem_o *)0x0) {
                                            local_38.m_ParticleSystem =
                                                 (UnityEngine_ParticleSystem_o *)
                                                 UnityEngine_ParticleSystem__get_emission
                                                           (pUVar6,(MethodInfo *)0x0);
                                            UnityEngine_ParticleSystem_EmissionModule__set_enabled
                                                      ((UnityEngine_ParticleSystem_EmissionModule_o)
                                                       &local_38,0,(MethodInfo *)0x0);
                                            pUVar5 = (__this->fields).Transform;
                                            if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                                              pUVar5 = UnityEngine_Transform__Find
                                                                 (pUVar5,"speedFX",
                                                                  (MethodInfo *)0x0);
                                              (__this->fields).WindTransform = pUVar5;
                                              il2cpp_runtime_glue(&(__this->fields).WindTransform,
                                                                 pUVar5);
                                              pUVar5 = (__this->fields).Chest;
                                              if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                                                pUVar5 = UnityEngine_Transform__Find
                                                                   (pUVar5,"hookRefL1",
                                                                    (MethodInfo *)0x0);
                                                (__this->fields).HookLeftAnchorDefault = pUVar5;
                                                il2cpp_runtime_glue(&(__this->fields).
                                                                    HookLeftAnchorDefault,pUVar5);
                                                pUVar5 = (__this->fields).Chest;
                                                if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                                                  pUVar5 = UnityEngine_Transform__Find
                                                                     (pUVar5,"hookRefR1",
                                                                      (MethodInfo *)0x0);
                                                  (__this->fields).HookRightAnchorDefault = pUVar5;
                                                  il2cpp_runtime_glue(&(__this->fields).
                                                                      HookRightAnchorDefault,pUVar5)
                                                  ;
                                                  pUVar5 = (__this->fields).HandL;
                                                  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                                                    pUVar5 = UnityEngine_Transform__Find
                                                                       (pUVar5,"hookRef",
                                                                        (MethodInfo *)0x0);
                                                    (__this->fields).HookLeftAnchorGun = pUVar5;
                                                    il2cpp_runtime_glue(&(__this->fields).
                                                                        HookLeftAnchorGun,pUVar5);
                                                    pUVar5 = (__this->fields).HandR;
                                                    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                                                      pUVar5 = UnityEngine_Transform__Find
                                                                         (pUVar5,"hookRef",
                                                                          (MethodInfo *)0x0);
                                                      (__this->fields).HookRightAnchorGun = pUVar5;
                                                      il2cpp_runtime_glue(&(__this->fields).
                                                                          HookRightAnchorGun,pUVar5)
                                                      ;
                                                      if (owner != (UnityEngine_GameObject_o *)0x0)
                                                      {
                                                        owner_00 = (Characters_BaseCharacter_o *)
                                                                                                                                      
                                                  UnityEngine_GameObject__GetComponent<object>
                                                            (owner,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
                                                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                                    il2cpp_init_class();
                                                  }
                                                  bVar4 = UnityEngine_Object__op_Inequality
                                                                    ((UnityEngine_Object_o *)
                                                                     owner_00,(UnityEngine_Object_o
                                                                               *)0x0,
                                                                     (MethodInfo *)0x0);
                                                  if ((char)bVar4 == '\0') {
                                                    return;
                                                  }
                                                  pUVar5 = *ppUVar1;
                                                  if ((pUVar5 != (UnityEngine_Transform_o *)0x0) &&
                                                     (pUVar5 = UnityEngine_Transform__Find
                                                                         (pUVar5,"checkBox",
                                                                          (MethodInfo *)0x0),
                                                     pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                                                    pUVar7 = UnityEngine_Component__get_gameObject
                                                                       ((UnityEngine_Component_o *)
                                                                        pUVar5,(MethodInfo *)0x0);
                                                    pCVar8 = Characters_BaseHitbox__Create
                                                                       (owner_00,pUVar7,
                                                                        (UnityEngine_Collider_o *)
                                                                        0x0,(MethodInfo *)0x0);
                                                    (__this->fields).BladeHitLeft = pCVar8;
                                                    il2cpp_runtime_glue(&(__this->fields).
                                                                        BladeHitLeft,pCVar8);
                                                    pCVar8 = (__this->fields).BladeHitLeft;
                                                    if (pCVar8 != (Characters_BaseHitbox_o *)0x0) {
                                                      *(undefined1 *)
                                                       &(pCVar8->fields).TwoFixedUpdates = 1;
                                                      pUVar5 = *ppUVar2;
                                                      if ((pUVar5 != (UnityEngine_Transform_o *)0x0)
                                                         && (pUVar5 = UnityEngine_Transform__Find
                                                                                (pUVar5,"checkBox"
                                                                                 ,(MethodInfo *)0x0)
                                                            , pUVar5 != (UnityEngine_Transform_o *)
                                                                        0x0)) {
                                                        pUVar7 = 
                                                  UnityEngine_Component__get_gameObject
                                                            ((UnityEngine_Component_o *)pUVar5,
                                                             (MethodInfo *)0x0);
                                                  pCVar8 = Characters_BaseHitbox__Create
                                                                     (owner_00,pUVar7,
                                                                      (UnityEngine_Collider_o *)0x0,
                                                                      (MethodInfo *)0x0);
                                                  (__this->fields).BladeHitRight = pCVar8;
                                                  il2cpp_runtime_glue(&(__this->fields).BladeHitRight
                                                                     ,pCVar8);
                                                  pCVar8 = (__this->fields).BladeHitRight;
                                                  if (pCVar8 != (Characters_BaseHitbox_o *)0x0) {
                                                    *(undefined1 *)&(pCVar8->fields).TwoFixedUpdates
                                                         = 1;
                                                    Characters_HumanComponentCache__CreateAHSSHitbox
                                                              (__this,owner_00,method_00);
                                                    Characters_HumanComponentCache__CreateAPGHitbox
                                                              (__this,owner_00,method_01);
                                                    Utility_BaseComponentCache__LoadAudio
                                                              ((Utility_BaseComponentCache_o *)
                                                               __this,"Human/Prefabs/HumanSounds",
                                                               (__this->fields).Transform,
                                                               (MethodInfo *)0x0);
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanComponentCache$$CreateAHSSHitbox
// il2cpp: void Characters_HumanComponentCache__CreateAHSSHitbox (Characters_HumanComponentCache_o* __this, Characters_BaseCharacter_o* human, const MethodInfo* method);
// 0x3fd3c60

void Characters_HumanComponentCache__CreateAHSSHitbox
               (Characters_HumanComponentCache_o *__this,Characters_BaseCharacter_o *human,
               MethodInfo *method)

{
  undefined1 auVar1 [12];
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Rigidbody_o *__this_01;
  UnityEngine_CapsuleCollider_o *__this_02;
  long *plVar2;
  long *plVar3;
  Characters_BaseHitbox_o *pCVar4;
  float fVar5;
  
  if (DAT_057040ee == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterData);
    il2cpp_init_method_metadata(&MethodInfo_CapsuleCollider_AddComponent_CapsuleCollider);
    il2cpp_init_method_metadata(&MethodInfo_Rigidbody_AddComponent_Rigidbody);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&"Radius");
    il2cpp_init_method_metadata(&"AHSS");
    il2cpp_init_method_metadata(&"Range");
    DAT_057040ee = '\x01';
  }
  __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = (UnityEngine_Rigidbody_o *)
                UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_Rigidbody_AddComponent_Rigidbody);
    if (__this_01 != (UnityEngine_Rigidbody_o *)0x0) {
      UnityEngine_Rigidbody__set_useGravity(__this_01,0,(MethodInfo *)0x0);
      UnityEngine_Rigidbody__set_isKinematic(__this_01,1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_GameObject__set_layer
                (__this_00,*(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 8),(MethodInfo *)0x0);
      __this_02 = (UnityEngine_CapsuleCollider_o *)
                  UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_CapsuleCollider_AddComponent_CapsuleCollider);
      if (__this_02 != (UnityEngine_CapsuleCollider_o *)0x0) {
        UnityEngine_CapsuleCollider__set_direction(__this_02,2,(MethodInfo *)0x0);
        UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)__this_02,1,(MethodInfo *)0x0)
        ;
        if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
          il2cpp_init_class();
        }
        plVar2 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
        if (plVar2 != (long *)0x0) {
          plVar2 = (long *)(**(code **)(*plVar2 + 0x1a8))
                                     (plVar2,"AHSS",*(undefined8 *)(*plVar2 + 0x1b0));
          if (plVar2 != (long *)0x0) {
            plVar3 = (long *)(**(code **)(*plVar2 + 0x1a8))
                                       (plVar2,"Radius",*(undefined8 *)(*plVar2 + 0x1b0));
            if (plVar3 != (long *)0x0) {
              fVar5 = (float)(**(code **)(*plVar3 + 0x388))(plVar3);
              UnityEngine_CapsuleCollider__set_radius(__this_02,fVar5,(MethodInfo *)0x0);
              plVar2 = (long *)(**(code **)(*plVar2 + 0x1a8))
                                         (plVar2,"Range",*(undefined8 *)(*plVar2 + 0x1b0));
              if (plVar2 != (long *)0x0) {
                fVar5 = (float)(**(code **)(*plVar2 + 0x388))(plVar2);
                UnityEngine_CapsuleCollider__set_height(__this_02,fVar5,(MethodInfo *)0x0);
                fVar5 = UnityEngine_CapsuleCollider__get_height(__this_02,(MethodInfo *)0x0);
                auVar1._4_8_ = 0;
                auVar1._0_4_ = fVar5 * 0.5 + 0.5;
                UnityEngine_CapsuleCollider__set_center
                          (__this_02,(UnityEngine_Vector3_o)(auVar1 << 0x40),(MethodInfo *)0x0);
                pCVar4 = Characters_BaseHitbox__Create
                                   (human,__this_00,(UnityEngine_Collider_o *)0x0,(MethodInfo *)0x0)
                ;
                (__this->fields).AHSSHit = pCVar4;
                il2cpp_runtime_glue(&(__this->fields).AHSSHit,pCVar4);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanComponentCache$$CreateAPGHitbox
// il2cpp: void Characters_HumanComponentCache__CreateAPGHitbox (Characters_HumanComponentCache_o* __this, Characters_BaseCharacter_o* human, const MethodInfo* method);
// 0x3fd3ee0

void Characters_HumanComponentCache__CreateAPGHitbox
               (Characters_HumanComponentCache_o *__this,Characters_BaseCharacter_o *human,
               MethodInfo *method)

{
  undefined1 auVar1 [12];
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Rigidbody_o *__this_01;
  UnityEngine_CapsuleCollider_o *__this_02;
  long *plVar2;
  Characters_BaseHitbox_o *pCVar3;
  float fVar4;
  
  if (DAT_057040ef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterData);
    il2cpp_init_method_metadata(&MethodInfo_CapsuleCollider_AddComponent_CapsuleCollider);
    il2cpp_init_method_metadata(&MethodInfo_Rigidbody_AddComponent_Rigidbody);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&"Radius");
    il2cpp_init_method_metadata(&"APG");
    DAT_057040ef = '\x01';
  }
  __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = (UnityEngine_Rigidbody_o *)
                UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_Rigidbody_AddComponent_Rigidbody);
    if (__this_01 != (UnityEngine_Rigidbody_o *)0x0) {
      UnityEngine_Rigidbody__set_useGravity(__this_01,0,(MethodInfo *)0x0);
      UnityEngine_Rigidbody__set_isKinematic(__this_01,1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_GameObject__set_layer
                (__this_00,*(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 8),(MethodInfo *)0x0);
      __this_02 = (UnityEngine_CapsuleCollider_o *)
                  UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_CapsuleCollider_AddComponent_CapsuleCollider);
      if (__this_02 != (UnityEngine_CapsuleCollider_o *)0x0) {
        UnityEngine_CapsuleCollider__set_direction(__this_02,2,(MethodInfo *)0x0);
        UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)__this_02,1,(MethodInfo *)0x0)
        ;
        if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
          il2cpp_init_class();
        }
        plVar2 = (long *)**(long **)(TypeInfo_CharacterData + 0xb8);
        if (plVar2 != (long *)0x0) {
          plVar2 = (long *)(**(code **)(*plVar2 + 0x1a8))
                                     (plVar2,"APG",*(undefined8 *)(*plVar2 + 0x1b0));
          if (plVar2 != (long *)0x0) {
            plVar2 = (long *)(**(code **)(*plVar2 + 0x1a8))
                                       (plVar2,"Radius",*(undefined8 *)(*plVar2 + 0x1b0));
            if (plVar2 != (long *)0x0) {
              fVar4 = (float)(**(code **)(*plVar2 + 0x388))(plVar2);
              UnityEngine_CapsuleCollider__set_radius(__this_02,fVar4,(MethodInfo *)0x0);
              UnityEngine_CapsuleCollider__set_height(__this_02,10.0,(MethodInfo *)0x0);
              fVar4 = UnityEngine_CapsuleCollider__get_height(__this_02,(MethodInfo *)0x0);
              auVar1._4_8_ = 0;
              auVar1._0_4_ = fVar4 * 0.5 + 0.5;
              UnityEngine_CapsuleCollider__set_center
                        (__this_02,(UnityEngine_Vector3_o)(auVar1 << 0x40),(MethodInfo *)0x0);
              pCVar3 = Characters_BaseHitbox__Create
                                 (human,__this_00,(UnityEngine_Collider_o *)0x0,(MethodInfo *)0x0);
              (__this->fields).APGHit = pCVar3;
              il2cpp_runtime_glue(&(__this->fields).APGHit,pCVar3);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


