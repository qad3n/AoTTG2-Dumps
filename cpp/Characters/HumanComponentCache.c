// Type: Characters.HumanComponentCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HumanComponentCache.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HumanComponentCache.cs
// --------------------------------

// Characters.HumanComponentCache$$.ctor
// il2cpp: void Characters_HumanComponentCache___ctor (Characters_HumanComponentCache_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x42dfd10

void Characters_HumanComponentCache___ctor
               (Characters_HumanComponentCache_o *__this,UnityEngine_GameObject_o *owner,MethodInfo *method)

{
  UnityEngine_Transform_o **ppUVar1;
  UnityEngine_Transform_o **ppUVar2;
  UnityEngine_ParticleSystem_o **ppUVar3;
  UnityEngine_ParticleSystem_o *pUVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  bool_conflict bVar7;
  Characters_BaseCharacter_o *owner_00;
  UnityEngine_Transform_o *pUVar8;
  Characters_BaseCharacter_o *pCVar9;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Rigidbody_o *pUVar11;
  UnityEngine_CapsuleCollider_o *pUVar12;
  UnityEngine_GameObject_o *pUVar13;
  long *plVar14;
  UnityEngine_Transform_c *pUVar15;
  Characters_BaseMovementSync_o *__this_01;
  Characters_BaseMovementSync_o *pCVar16;
  Characters_BaseHitbox_o *pCVar17;
  Characters_BaseMovementSync_c *pCVar18;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Transform_o *__this_02;
  Characters_BaseMovementSync_o *__this_03;
  float fVar19;
  UnityEngine_ParticleSystem_EmissionModule_Fields local_38;
  
  if (g_data_057ade5b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParticleSystem_GetComponentInChildren_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"GroundLeft");
    il2cpp_runtime_helper_023445d0(&"checkBox");
    il2cpp_runtime_helper_023445d0(&"neck");
    il2cpp_runtime_helper_023445d0(&"fire1");
    il2cpp_runtime_helper_023445d0(&"slideSparks");
    il2cpp_runtime_helper_023445d0(&"shoulder_L/upper_arm_L");
    il2cpp_runtime_helper_023445d0(&"hand_R");
    il2cpp_runtime_helper_023445d0(&"head");
    il2cpp_runtime_helper_023445d0(&"Human/Prefabs/HumanSounds");
    il2cpp_runtime_helper_023445d0(&"GroundRight");
    il2cpp_runtime_helper_023445d0(&"hookRefL1");
    il2cpp_runtime_helper_023445d0(&"3dmg_smoke");
    il2cpp_runtime_helper_023445d0(&"buff1");
    il2cpp_runtime_helper_023445d0(&"shoulder_R/upper_arm_R");
    il2cpp_runtime_helper_023445d0(&"chest");
    il2cpp_runtime_helper_023445d0(&"hookRef");
    il2cpp_runtime_helper_023445d0(&"forearm_L");
    il2cpp_runtime_helper_023445d0(&"hand_L");
    il2cpp_runtime_helper_023445d0(&"hookRefR1");
    il2cpp_runtime_helper_023445d0(&"Armature/Core/Controller_Body/hip/spine");
    il2cpp_runtime_helper_023445d0(&"buff2");
    il2cpp_runtime_helper_023445d0(&"speedFX");
    il2cpp_runtime_helper_023445d0(&"forearm_R");
    g_data_057ade5b = '\x01';
  }
  local_38.m_ParticleSystem = (UnityEngine_ParticleSystem_o *)0x0;
  owner_00 = (Characters_BaseCharacter_o *)owner;
  Utility_BaseComponentCache___ctor((Utility_BaseComponentCache_o *)__this,owner,(MethodInfo *)0x0);
  pUVar8 = (__this->fields).Transform;
  __this_02 = (UnityEngine_Transform_o *)0x0;
  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
    owner_00 = (Characters_BaseCharacter_o *)
               UnityEngine_Transform__Find(pUVar8,"Armature/Core/Controller_Body/hip/spine",(MethodInfo *)0x0);
    (__this->fields).Spine = (UnityEngine_Transform_o *)owner_00;
    il2cpp_runtime_helper_022b4080(&(__this->fields).Spine);
    pUVar8 = (__this->fields).Spine;
    __this_02 = (UnityEngine_Transform_o *)0x0;
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      owner_00 = (Characters_BaseCharacter_o *)
                 UnityEngine_Transform__Find(pUVar8,"chest",(MethodInfo *)0x0);
      (__this->fields).Chest = (UnityEngine_Transform_o *)owner_00;
      il2cpp_runtime_helper_022b4080(&(__this->fields).Chest);
      pUVar8 = (__this->fields).Transform;
      __this_02 = (UnityEngine_Transform_o *)0x0;
      if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
        owner_00 = (Characters_BaseCharacter_o *)
                   UnityEngine_Transform__Find(pUVar8,"GroundLeft",(MethodInfo *)0x0);
        (__this->fields).GroundLeft = (UnityEngine_Transform_o *)owner_00;
        il2cpp_runtime_helper_022b4080(&(__this->fields).GroundLeft);
        pUVar8 = (__this->fields).Transform;
        __this_02 = (UnityEngine_Transform_o *)0x0;
        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
          owner_00 = (Characters_BaseCharacter_o *)
                     UnityEngine_Transform__Find(pUVar8,"GroundRight",(MethodInfo *)0x0);
          (__this->fields).GroundRight = (UnityEngine_Transform_o *)owner_00;
          il2cpp_runtime_helper_022b4080(&(__this->fields).GroundRight);
          pUVar8 = (__this->fields).Chest;
          __this_02 = (UnityEngine_Transform_o *)0x0;
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            owner_00 = (Characters_BaseCharacter_o *)
                       UnityEngine_Transform__Find(pUVar8,"neck",(MethodInfo *)0x0);
            (__this->fields).Neck = (UnityEngine_Transform_o *)owner_00;
            il2cpp_runtime_helper_022b4080(&(__this->fields).Neck);
            pUVar8 = (__this->fields).Neck;
            __this_02 = (UnityEngine_Transform_o *)0x0;
            if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
              owner_00 = (Characters_BaseCharacter_o *)
                         UnityEngine_Transform__Find(pUVar8,"head",(MethodInfo *)0x0);
              (__this->fields).Head = (UnityEngine_Transform_o *)owner_00;
              il2cpp_runtime_helper_022b4080(&(__this->fields).Head);
              pUVar8 = (__this->fields).Chest;
              __this_02 = (UnityEngine_Transform_o *)0x0;
              if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                owner_00 = (Characters_BaseCharacter_o *)
                           UnityEngine_Transform__Find(pUVar8,"shoulder_L/upper_arm_L",(MethodInfo *)0x0);
                (__this->fields).UpperarmL = (UnityEngine_Transform_o *)owner_00;
                il2cpp_runtime_helper_022b4080(&(__this->fields).UpperarmL);
                pUVar8 = (__this->fields).Chest;
                __this_02 = (UnityEngine_Transform_o *)0x0;
                if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                  owner_00 = (Characters_BaseCharacter_o *)
                             UnityEngine_Transform__Find(pUVar8,"shoulder_R/upper_arm_R",(MethodInfo *)0x0);
                  (__this->fields).UpperarmR = (UnityEngine_Transform_o *)owner_00;
                  il2cpp_runtime_helper_022b4080(&(__this->fields).UpperarmR);
                  pUVar8 = (__this->fields).UpperarmL;
                  __this_02 = (UnityEngine_Transform_o *)0x0;
                  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                    owner_00 = (Characters_BaseCharacter_o *)
                               UnityEngine_Transform__Find(pUVar8,"forearm_L",(MethodInfo *)0x0);
                    (__this->fields).ForearmL = (UnityEngine_Transform_o *)owner_00;
                    il2cpp_runtime_helper_022b4080(&(__this->fields).ForearmL);
                    pUVar8 = (__this->fields).UpperarmR;
                    __this_02 = (UnityEngine_Transform_o *)0x0;
                    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                      owner_00 = (Characters_BaseCharacter_o *)
                                 UnityEngine_Transform__Find(pUVar8,"forearm_R",(MethodInfo *)0x0);
                      (__this->fields).ForearmR = (UnityEngine_Transform_o *)owner_00;
                      il2cpp_runtime_helper_022b4080(&(__this->fields).ForearmR);
                      pUVar8 = (__this->fields).ForearmL;
                      __this_02 = (UnityEngine_Transform_o *)0x0;
                      if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                        owner_00 = (Characters_BaseCharacter_o *)
                                   UnityEngine_Transform__Find(pUVar8,"hand_L",(MethodInfo *)0x0);
                        ppUVar1 = &(__this->fields).HandL;
                        (__this->fields).HandL = (UnityEngine_Transform_o *)owner_00;
                        il2cpp_runtime_helper_022b4080(ppUVar1);
                        pUVar8 = (__this->fields).ForearmR;
                        __this_02 = (UnityEngine_Transform_o *)0x0;
                        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                          owner_00 = (Characters_BaseCharacter_o *)
                                     UnityEngine_Transform__Find(pUVar8,"hand_R",(MethodInfo *)0x0);
                          ppUVar2 = &(__this->fields).HandR;
                          (__this->fields).HandR = (UnityEngine_Transform_o *)owner_00;
                          il2cpp_runtime_helper_022b4080(ppUVar2);
                          __this_02 = (__this->fields).Transform;
                          if ((__this_02 != (UnityEngine_Transform_o *)0x0) &&
                             (owner_00 = "slideSparks",
                             pUVar8 = UnityEngine_Transform__Find
                                                (__this_02,(System_String_o *)"slideSparks",(MethodInfo *)0x0),
                             pUVar8 != (UnityEngine_Transform_o *)0x0)) {
                            owner_00 = (Characters_BaseCharacter_o *)
                                       UnityEngine_Component__GetComponent_object_
                                                 ((UnityEngine_Component_o *)pUVar8,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
                            ppUVar3 = &(__this->fields).Sparks;
                            (__this->fields).Sparks = (UnityEngine_ParticleSystem_o *)owner_00;
                            il2cpp_runtime_helper_022b4080(ppUVar3);
                            __this_02 = (__this->fields).Transform;
                            if ((__this_02 != (UnityEngine_Transform_o *)0x0) &&
                               (owner_00 = "3dmg_smoke",
                               pUVar8 = UnityEngine_Transform__Find
                                                  (__this_02,(System_String_o *)"3dmg_smoke",(MethodInfo *)0x0
                                                  ), pUVar8 != (UnityEngine_Transform_o *)0x0)) {
                              owner_00 = (Characters_BaseCharacter_o *)
                                         UnityEngine_Component__GetComponent_object_
                                                   ((UnityEngine_Component_o *)pUVar8,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
                              (__this->fields).Smoke = (UnityEngine_ParticleSystem_o *)owner_00;
                              il2cpp_runtime_helper_022b4080(&(__this->fields).Smoke);
                              pUVar8 = (__this->fields).Transform;
                              __this_02 = (UnityEngine_Transform_o *)0x0;
                              if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                                owner_00 = (Characters_BaseCharacter_o *)
                                           UnityEngine_Transform__Find(pUVar8,"buff1",(MethodInfo *)0x0);
                                (__this->fields).Buff1 = (UnityEngine_Transform_o *)owner_00;
                                il2cpp_runtime_helper_022b4080(&(__this->fields).Buff1);
                                pUVar8 = (__this->fields).Transform;
                                __this_02 = (UnityEngine_Transform_o *)0x0;
                                if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                                  owner_00 = (Characters_BaseCharacter_o *)
                                             UnityEngine_Transform__Find
                                                       (pUVar8,"buff2",(MethodInfo *)0x0);
                                  (__this->fields).Buff2 = (UnityEngine_Transform_o *)owner_00;
                                  il2cpp_runtime_helper_022b4080(&(__this->fields).Buff2);
                                  pUVar8 = (__this->fields).Transform;
                                  __this_02 = (UnityEngine_Transform_o *)0x0;
                                  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                                    owner_00 = (Characters_BaseCharacter_o *)
                                               UnityEngine_Transform__Find
                                                         (pUVar8,"fire1",(MethodInfo *)0x0);
                                    (__this->fields).Fire1 = (UnityEngine_Transform_o *)owner_00;
                                    il2cpp_runtime_helper_022b4080(&(__this->fields).Fire1);
                                    pUVar4 = (__this->fields).Smoke;
                                    __this_02 = (UnityEngine_Transform_o *)0x0;
                                    if (pUVar4 != (UnityEngine_ParticleSystem_o *)0x0) {
                                      local_38.m_ParticleSystem =
                                           (UnityEngine_ParticleSystem_o *)
                                           UnityEngine_ParticleSystem__get_emission(pUVar4,(MethodInfo *)0x0);
                                      owner_00 = (Characters_BaseCharacter_o *)0x0;
                                      UnityEngine_ParticleSystem_EmissionModule__set_enabled
                                                ((UnityEngine_ParticleSystem_EmissionModule_o)&local_38,0,
                                                 (MethodInfo *)0x0);
                                      pUVar4 = *ppUVar3;
                                      __this_02 = (UnityEngine_Transform_o *)0x0;
                                      if (pUVar4 != (UnityEngine_ParticleSystem_o *)0x0) {
                                        local_38.m_ParticleSystem =
                                             (UnityEngine_ParticleSystem_o *)
                                             UnityEngine_ParticleSystem__get_emission
                                                       (pUVar4,(MethodInfo *)0x0);
                                        owner_00 = (Characters_BaseCharacter_o *)0x0;
                                        UnityEngine_ParticleSystem_EmissionModule__set_enabled
                                                  ((UnityEngine_ParticleSystem_EmissionModule_o)&local_38,0,
                                                   (MethodInfo *)0x0);
                                        __this_02 = (__this->fields).Transform;
                                        if ((__this_02 != (UnityEngine_Transform_o *)0x0) &&
                                           (owner_00 = "speedFX",
                                           pUVar8 = UnityEngine_Transform__Find
                                                              (__this_02,(System_String_o *)"speedFX",
                                                               (MethodInfo *)0x0),
                                           pUVar8 != (UnityEngine_Transform_o *)0x0)) {
                                          owner_00 = (Characters_BaseCharacter_o *)
                                                     UnityEngine_Component__GetComponentInChildren_object__24e7d50
                                                               ((UnityEngine_Component_o *)pUVar8,MethodInfo_ParticleSystem_GetComponentInChildren_ParticleSystem
                                                               );
                                          (__this->fields).Wind = (UnityEngine_ParticleSystem_o *)owner_00;
                                          il2cpp_runtime_helper_022b4080(&(__this->fields).Wind);
                                          pUVar4 = (__this->fields).Wind;
                                          __this_02 = (UnityEngine_Transform_o *)0x0;
                                          if (pUVar4 != (UnityEngine_ParticleSystem_o *)0x0) {
                                            local_38.m_ParticleSystem =
                                                 (UnityEngine_ParticleSystem_o *)
                                                 UnityEngine_ParticleSystem__get_emission
                                                           (pUVar4,(MethodInfo *)0x0);
                                            owner_00 = (Characters_BaseCharacter_o *)0x0;
                                            UnityEngine_ParticleSystem_EmissionModule__set_enabled
                                                      ((UnityEngine_ParticleSystem_EmissionModule_o)&local_38,
                                                       0,(MethodInfo *)0x0);
                                            pUVar8 = (__this->fields).Transform;
                                            __this_02 = (UnityEngine_Transform_o *)0x0;
                                            if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                                              owner_00 = (Characters_BaseCharacter_o *)
                                                         UnityEngine_Transform__Find
                                                                   (pUVar8,(System_String_o *)"speedFX",
                                                                    (MethodInfo *)0x0);
                                              (__this->fields).WindTransform =
                                                   (UnityEngine_Transform_o *)owner_00;
                                              il2cpp_runtime_helper_022b4080(&(__this->fields).WindTransform);
                                              pUVar8 = (__this->fields).Chest;
                                              __this_02 = (UnityEngine_Transform_o *)0x0;
                                              if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                                                owner_00 = (Characters_BaseCharacter_o *)
                                                           UnityEngine_Transform__Find
                                                                     (pUVar8,"hookRefL1",(MethodInfo *)0x0);
                                                (__this->fields).HookLeftAnchorDefault =
                                                     (UnityEngine_Transform_o *)owner_00;
                                                il2cpp_runtime_helper_022b4080(&(__this->fields).HookLeftAnchorDefault);
                                                pUVar8 = (__this->fields).Chest;
                                                __this_02 = (UnityEngine_Transform_o *)0x0;
                                                if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                                                  owner_00 = (Characters_BaseCharacter_o *)
                                                             UnityEngine_Transform__Find
                                                                       (pUVar8,"hookRefR1",(MethodInfo *)0x0)
                                                  ;
                                                  (__this->fields).HookRightAnchorDefault =
                                                       (UnityEngine_Transform_o *)owner_00;
                                                  il2cpp_runtime_helper_022b4080(&(__this->fields).HookRightAnchorDefault)
                                                  ;
                                                  pUVar8 = (__this->fields).HandL;
                                                  __this_02 = (UnityEngine_Transform_o *)0x0;
                                                  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                                                    owner_00 = (Characters_BaseCharacter_o *)
                                                               UnityEngine_Transform__Find
                                                                         (pUVar8,"hookRef",
                                                                          (MethodInfo *)0x0);
                                                    (__this->fields).HookLeftAnchorGun =
                                                         (UnityEngine_Transform_o *)owner_00;
                                                    il2cpp_runtime_helper_022b4080(&(__this->fields).HookLeftAnchorGun);
                                                    pUVar8 = (__this->fields).HandR;
                                                    __this_02 = (UnityEngine_Transform_o *)0x0;
                                                    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                                                      owner_00 = (Characters_BaseCharacter_o *)
                                                                 UnityEngine_Transform__Find
                                                                           (pUVar8,"hookRef",
                                                                            (MethodInfo *)0x0);
                                                      __this_02 = (UnityEngine_Transform_o *)
                                                                  &(__this->fields).HookRightAnchorGun;
                                                      (__this->fields).HookRightAnchorGun =
                                                           (UnityEngine_Transform_o *)owner_00;
                                                      il2cpp_runtime_helper_022b4080();
                                                      if (owner != (UnityEngine_GameObject_o *)0x0) {
                                                        pCVar9 = (Characters_BaseCharacter_o *)
                                                                 UnityEngine_GameObject__GetComponent_object_
                                                                           (owner,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
                                                        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                                                          il2cpp_runtime_helper_02337ed0();
                                                        }
                                                        owner_00 = (Characters_BaseCharacter_o *)0x0;
                                                        bVar7 = UnityEngine_Object__op_Inequality
                                                                          ((UnityEngine_Object_o *)pCVar9,
                                                                           (UnityEngine_Object_o *)0x0,
                                                                           (MethodInfo *)0x0);
                                                        if ((char)bVar7 == '\0') {
                                                          return;
                                                        }
                                                        __this_02 = *ppUVar1;
                                                        if ((__this_02 != (UnityEngine_Transform_o *)0x0) &&
                                                           (owner_00 = "checkBox",
                                                           pUVar8 = UnityEngine_Transform__Find
                                                                              (__this_02,
                                                                               (System_String_o *)"checkBox"
                                                                               ,(MethodInfo *)0x0),
                                                           pUVar8 != (UnityEngine_Transform_o *)0x0)) {
                                                          pUVar10 = UnityEngine_Component__get_gameObject
                                                                              ((UnityEngine_Component_o *)
                                                                               pUVar8,(MethodInfo *)0x0);
                                                          owner_00 = (Characters_BaseCharacter_o *)
                                                                     Characters_BaseHitbox__Create
                                                                               (pCVar9,pUVar10,
                                                                                (UnityEngine_Collider_o *)0x0,
                                                                                (MethodInfo *)0x0);
                                                          __this_02 = (UnityEngine_Transform_o *)
                                                                      &(__this->fields).BladeHitLeft;
                                                          (__this->fields).BladeHitLeft =
                                                               (Characters_BaseHitbox_o *)owner_00;
                                                          il2cpp_runtime_helper_022b4080();
                                                          pCVar17 = (__this->fields).BladeHitLeft;
                                                          if (pCVar17 != (Characters_BaseHitbox_o *)0x0) {
                                                            *(undefined1 *)&(pCVar17->fields).TwoFixedUpdates
                                                                 = 1;
                                                            __this_02 = *ppUVar2;
                                                            if ((__this_02 != (UnityEngine_Transform_o *)0x0)
                                                               && (owner_00 = "checkBox",
                                                                  pUVar8 = UnityEngine_Transform__Find
                                                                                     (__this_02,
                                                                                      (System_String_o *)
                                                                                      "checkBox",
                                                                                      (MethodInfo *)0x0),
                                                                  pUVar8 != (UnityEngine_Transform_o *)0x0)) {
                                                              pUVar10 = UnityEngine_Component__get_gameObject
                                                                                  ((UnityEngine_Component_o *)
                                                                                   pUVar8,(MethodInfo *)0x0);
                                                              owner_00 = (Characters_BaseCharacter_o *)
                                                                         Characters_BaseHitbox__Create
                                                                                   (pCVar9,pUVar10,
                                                                                    (UnityEngine_Collider_o *)
                                                                                    0x0,(MethodInfo *)0x0);
                                                              __this_02 = (UnityEngine_Transform_o *)
                                                                          &(__this->fields).BladeHitRight;
                                                              (__this->fields).BladeHitRight =
                                                                   (Characters_BaseHitbox_o *)owner_00;
                                                              il2cpp_runtime_helper_022b4080();
                                                              pCVar17 = (__this->fields).BladeHitRight;
                                                              if (pCVar17 != (Characters_BaseHitbox_o *)0x0) {
                                                                *(undefined1 *)
                                                                 &(pCVar17->fields).TwoFixedUpdates = 1;
                                                                                                                                
                                                       Characters_HumanComponentCache__CreateAHSSHitbox
                                                                 (__this,pCVar9,method_00);
                                                       Characters_HumanComponentCache__CreateAPGHitbox
                                                                 (__this,pCVar9,method_01);
                                                       Utility_BaseComponentCache__LoadAudio
                                                                 ((Utility_BaseComponentCache_o *)__this,
                                                                  "Human/Prefabs/HumanSounds",(__this->fields).Transform,
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade5c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CapsuleCollider_AddComponent_CapsuleCollider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_AddComponent_Rigidbody);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&"Radius");
    il2cpp_runtime_helper_023445d0(&"AHSS");
    il2cpp_runtime_helper_023445d0(&"Range");
    g_data_057ade5c = '\x01';
  }
  __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  pCVar9 = (Characters_BaseCharacter_o *)0x0;
  pUVar10 = __this_00;
  UnityEngine_GameObject___ctor_4dfc3c0(__this_00,(MethodInfo *)0x0);
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (pCVar9 = MethodInfo_Rigidbody_AddComponent_Rigidbody, pUVar10 = __this_00,
     pUVar11 = (UnityEngine_Rigidbody_o *)
               UnityEngine_GameObject__AddComponent_object_(__this_00,(MethodInfo_255A020 *)MethodInfo_Rigidbody_AddComponent_Rigidbody),
     pUVar11 != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_useGravity(pUVar11,0,(MethodInfo *)0x0);
    UnityEngine_Rigidbody__set_isKinematic(pUVar11,1,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_GameObject__set_layer
              (__this_00,*(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 8),(MethodInfo *)0x0);
    pCVar9 = MethodInfo_CapsuleCollider_AddComponent_CapsuleCollider;
    pUVar10 = __this_00;
    pUVar12 = (UnityEngine_CapsuleCollider_o *)
              UnityEngine_GameObject__AddComponent_object_(__this_00,(MethodInfo_255A020 *)MethodInfo_CapsuleCollider_AddComponent_CapsuleCollider);
    if (pUVar12 != (UnityEngine_CapsuleCollider_o *)0x0) {
      UnityEngine_CapsuleCollider__set_direction(pUVar12,2,(MethodInfo *)0x0);
      pCVar9 = (Characters_BaseCharacter_o *)0x1;
      UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)pUVar12,1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar10 = (UnityEngine_GameObject_o *)**(long **)(TypeInfo_CharacterData + 0xb8);
      if (((pUVar10 != (UnityEngine_GameObject_o *)0x0) &&
          (pCVar9 = "AHSS",
          pUVar13 = (UnityEngine_GameObject_o *)
                    (*pUVar10->klass[1]._1.this_arg.data)
                              (pUVar10,"AHSS",*(undefined8 *)&pUVar10->klass[1]._1.this_arg.bits),
          pUVar13 != (UnityEngine_GameObject_o *)0x0)) &&
         (pCVar9 = "Radius", pUVar10 = pUVar13,
         plVar14 = (long *)(*pUVar13->klass[1]._1.this_arg.data)
                                     (pUVar13,"Radius",*(undefined8 *)&pUVar13->klass[1]._1.this_arg.bits)
         , plVar14 != (long *)0x0)) {
        fVar19 = (float)(**(code **)(*plVar14 + 0x388))(plVar14);
        UnityEngine_CapsuleCollider__set_radius(pUVar12,fVar19,(MethodInfo *)0x0);
        pCVar9 = "Range";
        plVar14 = (long *)(*pUVar13->klass[1]._1.this_arg.data)
                                    (pUVar13,"Range",*(undefined8 *)&pUVar13->klass[1]._1.this_arg.bits);
        pUVar10 = pUVar13;
        if (plVar14 != (long *)0x0) {
          fVar19 = (float)(**(code **)(*plVar14 + 0x388))(plVar14);
          UnityEngine_CapsuleCollider__set_height(pUVar12,fVar19,(MethodInfo *)0x0);
          fVar19 = UnityEngine_CapsuleCollider__get_height(pUVar12,(MethodInfo *)0x0);
          auVar5._4_8_ = 0;
          auVar5._0_4_ = fVar19 * 0.5 + 0.5;
          UnityEngine_CapsuleCollider__set_center
                    (pUVar12,(UnityEngine_Vector3_o)(auVar5 << 0x40),(MethodInfo *)0x0);
          pUVar15 = (UnityEngine_Transform_c *)
                    Characters_BaseHitbox__Create
                              (owner_00,__this_00,(UnityEngine_Collider_o *)0x0,(MethodInfo *)0x0);
          __this_02[9].klass = pUVar15;
          il2cpp_runtime_helper_022b4080(__this_02 + 9,pUVar15);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade5d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CapsuleCollider_AddComponent_CapsuleCollider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_AddComponent_Rigidbody);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&"Radius");
    il2cpp_runtime_helper_023445d0(&"APG");
    g_data_057ade5d = '\x01';
  }
  __this_01 = (Characters_BaseMovementSync_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  __this_03 = __this_01;
  UnityEngine_GameObject___ctor_4dfc3c0((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
  if ((__this_01 != (Characters_BaseMovementSync_o *)0x0) &&
     (__this_03 = __this_01,
     pUVar11 = (UnityEngine_Rigidbody_o *)
               UnityEngine_GameObject__AddComponent_object_
                         ((UnityEngine_GameObject_o *)__this_01,(MethodInfo_255A020 *)MethodInfo_Rigidbody_AddComponent_Rigidbody),
     pUVar11 != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_useGravity(pUVar11,0,(MethodInfo *)0x0);
    UnityEngine_Rigidbody__set_isKinematic(pUVar11,1,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_GameObject__set_layer
              ((UnityEngine_GameObject_o *)__this_01,*(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 8),
               (MethodInfo *)0x0);
    __this_03 = __this_01;
    pUVar12 = (UnityEngine_CapsuleCollider_o *)
              UnityEngine_GameObject__AddComponent_object_
                        ((UnityEngine_GameObject_o *)__this_01,(MethodInfo_255A020 *)MethodInfo_CapsuleCollider_AddComponent_CapsuleCollider);
    if (pUVar12 != (UnityEngine_CapsuleCollider_o *)0x0) {
      UnityEngine_CapsuleCollider__set_direction(pUVar12,2,(MethodInfo *)0x0);
      UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)pUVar12,1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_03 = (Characters_BaseMovementSync_o *)**(long **)(TypeInfo_CharacterData + 0xb8);
      if (((__this_03 != (Characters_BaseMovementSync_o *)0x0) &&
          (pCVar16 = (Characters_BaseMovementSync_o *)
                     (*(__this_03->klass->vtable)._7_ReceiveCustomStream.methodPtr)
                               (__this_03,"APG",
                                (__this_03->klass->vtable)._7_ReceiveCustomStream.method),
          pCVar16 != (Characters_BaseMovementSync_o *)0x0)) &&
         (plVar14 = (long *)(*(pCVar16->klass->vtable)._7_ReceiveCustomStream.methodPtr)
                                      (pCVar16,"Radius",
                                       (pCVar16->klass->vtable)._7_ReceiveCustomStream.method),
         __this_03 = pCVar16, plVar14 != (long *)0x0)) {
        fVar19 = (float)(**(code **)(*plVar14 + 0x388))(plVar14);
        UnityEngine_CapsuleCollider__set_radius(pUVar12,fVar19,(MethodInfo *)0x0);
        UnityEngine_CapsuleCollider__set_height(pUVar12,10.0,(MethodInfo *)0x0);
        fVar19 = UnityEngine_CapsuleCollider__get_height(pUVar12,(MethodInfo *)0x0);
        auVar6._4_8_ = 0;
        auVar6._0_4_ = fVar19 * 0.5 + 0.5;
        UnityEngine_CapsuleCollider__set_center
                  (pUVar12,(UnityEngine_Vector3_o)(auVar6 << 0x40),(MethodInfo *)0x0);
        pCVar17 = Characters_BaseHitbox__Create
                            (pCVar9,(UnityEngine_GameObject_o *)__this_01,(UnityEngine_Collider_o *)0x0,
                             (MethodInfo *)0x0);
        pUVar10[9].monitor = pCVar17;
        il2cpp_runtime_helper_022b4080(&pUVar10[9].monitor,pCVar17);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade5e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_GetComponent_Human);
    g_data_057ade5e = '\x01';
  }
  Characters_BaseMovementSync__Awake(__this_03,(MethodInfo *)0x0);
  pCVar18 = (Characters_BaseMovementSync_c *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_03,MethodInfo_Human_GetComponent_Human);
  __this_03[1].klass = pCVar18;
  il2cpp_runtime_helper_022b4080(__this_03 + 1,pCVar18);
  return;
}


// Characters.HumanComponentCache$$CreateAHSSHitbox
// il2cpp: void Characters_HumanComponentCache__CreateAHSSHitbox (Characters_HumanComponentCache_o* __this, Characters_BaseCharacter_o* human, const MethodInfo* method);
// 0x42e0520

void Characters_HumanComponentCache__CreateAHSSHitbox
               (Characters_HumanComponentCache_o *__this,Characters_BaseCharacter_o *human,MethodInfo *method)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Rigidbody_o *pUVar3;
  UnityEngine_CapsuleCollider_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  long *plVar6;
  Characters_BaseHitbox_o *pCVar7;
  Characters_BaseMovementSync_o *__this_01;
  Characters_BaseMovementSync_o *pCVar8;
  Characters_BaseMovementSync_c *pCVar9;
  Characters_BaseCharacter_o *owner;
  UnityEngine_GameObject_o *pUVar10;
  Characters_BaseMovementSync_o *__this_02;
  float fVar11;
  
  if (g_data_057ade5c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CapsuleCollider_AddComponent_CapsuleCollider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_AddComponent_Rigidbody);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&"Radius");
    il2cpp_runtime_helper_023445d0(&"AHSS");
    il2cpp_runtime_helper_023445d0(&"Range");
    g_data_057ade5c = '\x01';
  }
  __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  owner = (Characters_BaseCharacter_o *)0x0;
  pUVar10 = __this_00;
  UnityEngine_GameObject___ctor_4dfc3c0(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    owner = MethodInfo_Rigidbody_AddComponent_Rigidbody;
    pUVar10 = __this_00;
    pUVar3 = (UnityEngine_Rigidbody_o *)
             UnityEngine_GameObject__AddComponent_object_(__this_00,(MethodInfo_255A020 *)MethodInfo_Rigidbody_AddComponent_Rigidbody);
    if (pUVar3 != (UnityEngine_Rigidbody_o *)0x0) {
      UnityEngine_Rigidbody__set_useGravity(pUVar3,0,(MethodInfo *)0x0);
      UnityEngine_Rigidbody__set_isKinematic(pUVar3,1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_GameObject__set_layer
                (__this_00,*(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 8),(MethodInfo *)0x0);
      owner = MethodInfo_CapsuleCollider_AddComponent_CapsuleCollider;
      pUVar10 = __this_00;
      pUVar4 = (UnityEngine_CapsuleCollider_o *)
               UnityEngine_GameObject__AddComponent_object_(__this_00,(MethodInfo_255A020 *)MethodInfo_CapsuleCollider_AddComponent_CapsuleCollider);
      if (pUVar4 != (UnityEngine_CapsuleCollider_o *)0x0) {
        UnityEngine_CapsuleCollider__set_direction(pUVar4,2,(MethodInfo *)0x0);
        owner = (Characters_BaseCharacter_o *)0x1;
        UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)pUVar4,1,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar10 = (UnityEngine_GameObject_o *)**(long **)(TypeInfo_CharacterData + 0xb8);
        if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
          owner = "AHSS";
          pUVar5 = (UnityEngine_GameObject_o *)
                   (*pUVar10->klass[1]._1.this_arg.data)
                             (pUVar10,"AHSS",*(undefined8 *)&pUVar10->klass[1]._1.this_arg.bits);
          if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
            owner = "Radius";
            pUVar10 = pUVar5;
            plVar6 = (long *)(*pUVar5->klass[1]._1.this_arg.data)
                                       (pUVar5,"Radius",*(undefined8 *)&pUVar5->klass[1]._1.this_arg.bits)
            ;
            if (plVar6 != (long *)0x0) {
              fVar11 = (float)(**(code **)(*plVar6 + 0x388))(plVar6);
              UnityEngine_CapsuleCollider__set_radius(pUVar4,fVar11,(MethodInfo *)0x0);
              owner = "Range";
              plVar6 = (long *)(*pUVar5->klass[1]._1.this_arg.data)
                                         (pUVar5,"Range",
                                          *(undefined8 *)&pUVar5->klass[1]._1.this_arg.bits);
              pUVar10 = pUVar5;
              if (plVar6 != (long *)0x0) {
                fVar11 = (float)(**(code **)(*plVar6 + 0x388))(plVar6);
                UnityEngine_CapsuleCollider__set_height(pUVar4,fVar11,(MethodInfo *)0x0);
                fVar11 = UnityEngine_CapsuleCollider__get_height(pUVar4,(MethodInfo *)0x0);
                auVar1._4_8_ = 0;
                auVar1._0_4_ = fVar11 * 0.5 + 0.5;
                UnityEngine_CapsuleCollider__set_center
                          (pUVar4,(UnityEngine_Vector3_o)(auVar1 << 0x40),(MethodInfo *)0x0);
                pCVar7 = Characters_BaseHitbox__Create
                                   (human,__this_00,(UnityEngine_Collider_o *)0x0,(MethodInfo *)0x0);
                (__this->fields).AHSSHit = pCVar7;
                il2cpp_runtime_helper_022b4080(&(__this->fields).AHSSHit,pCVar7);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade5d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CapsuleCollider_AddComponent_CapsuleCollider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_AddComponent_Rigidbody);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&"Radius");
    il2cpp_runtime_helper_023445d0(&"APG");
    g_data_057ade5d = '\x01';
  }
  __this_01 = (Characters_BaseMovementSync_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  __this_02 = __this_01;
  UnityEngine_GameObject___ctor_4dfc3c0((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Characters_BaseMovementSync_o *)0x0) {
    __this_02 = __this_01;
    pUVar3 = (UnityEngine_Rigidbody_o *)
             UnityEngine_GameObject__AddComponent_object_
                       ((UnityEngine_GameObject_o *)__this_01,(MethodInfo_255A020 *)MethodInfo_Rigidbody_AddComponent_Rigidbody);
    if (pUVar3 != (UnityEngine_Rigidbody_o *)0x0) {
      UnityEngine_Rigidbody__set_useGravity(pUVar3,0,(MethodInfo *)0x0);
      UnityEngine_Rigidbody__set_isKinematic(pUVar3,1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_GameObject__set_layer
                ((UnityEngine_GameObject_o *)__this_01,*(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 8),
                 (MethodInfo *)0x0);
      __this_02 = __this_01;
      pUVar4 = (UnityEngine_CapsuleCollider_o *)
               UnityEngine_GameObject__AddComponent_object_
                         ((UnityEngine_GameObject_o *)__this_01,(MethodInfo_255A020 *)MethodInfo_CapsuleCollider_AddComponent_CapsuleCollider);
      if (pUVar4 != (UnityEngine_CapsuleCollider_o *)0x0) {
        UnityEngine_CapsuleCollider__set_direction(pUVar4,2,(MethodInfo *)0x0);
        UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)pUVar4,1,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_02 = (Characters_BaseMovementSync_o *)**(long **)(TypeInfo_CharacterData + 0xb8);
        if (__this_02 != (Characters_BaseMovementSync_o *)0x0) {
          pCVar8 = (Characters_BaseMovementSync_o *)
                   (*(__this_02->klass->vtable)._7_ReceiveCustomStream.methodPtr)
                             (__this_02,"APG",(__this_02->klass->vtable)._7_ReceiveCustomStream.method)
          ;
          if (pCVar8 != (Characters_BaseMovementSync_o *)0x0) {
            plVar6 = (long *)(*(pCVar8->klass->vtable)._7_ReceiveCustomStream.methodPtr)
                                       (pCVar8,"Radius",
                                        (pCVar8->klass->vtable)._7_ReceiveCustomStream.method);
            __this_02 = pCVar8;
            if (plVar6 != (long *)0x0) {
              fVar11 = (float)(**(code **)(*plVar6 + 0x388))(plVar6);
              UnityEngine_CapsuleCollider__set_radius(pUVar4,fVar11,(MethodInfo *)0x0);
              UnityEngine_CapsuleCollider__set_height(pUVar4,10.0,(MethodInfo *)0x0);
              fVar11 = UnityEngine_CapsuleCollider__get_height(pUVar4,(MethodInfo *)0x0);
              auVar2._4_8_ = 0;
              auVar2._0_4_ = fVar11 * 0.5 + 0.5;
              UnityEngine_CapsuleCollider__set_center
                        (pUVar4,(UnityEngine_Vector3_o)(auVar2 << 0x40),(MethodInfo *)0x0);
              pCVar7 = Characters_BaseHitbox__Create
                                 (owner,(UnityEngine_GameObject_o *)__this_01,(UnityEngine_Collider_o *)0x0,
                                  (MethodInfo *)0x0);
              pUVar10[9].monitor = pCVar7;
              il2cpp_runtime_helper_022b4080(&pUVar10[9].monitor,pCVar7);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade5e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_GetComponent_Human);
    g_data_057ade5e = '\x01';
  }
  Characters_BaseMovementSync__Awake(__this_02,(MethodInfo *)0x0);
  pCVar9 = (Characters_BaseMovementSync_c *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_02,MethodInfo_Human_GetComponent_Human);
  __this_02[1].klass = pCVar9;
  il2cpp_runtime_helper_022b4080(__this_02 + 1,pCVar9);
  return;
}


// Characters.HumanComponentCache$$CreateAPGHitbox
// il2cpp: void Characters_HumanComponentCache__CreateAPGHitbox (Characters_HumanComponentCache_o* __this, Characters_BaseCharacter_o* human, const MethodInfo* method);
// 0x42e07a0

void Characters_HumanComponentCache__CreateAPGHitbox
               (Characters_HumanComponentCache_o *__this,Characters_BaseCharacter_o *human,MethodInfo *method)

{
  undefined1 auVar1 [12];
  Characters_BaseMovementSync_o *__this_00;
  UnityEngine_Rigidbody_o *__this_01;
  UnityEngine_CapsuleCollider_o *__this_02;
  Characters_BaseMovementSync_o *pCVar2;
  long *plVar3;
  Characters_BaseHitbox_o *pCVar4;
  Characters_BaseMovementSync_c *pCVar5;
  Characters_BaseMovementSync_o *__this_03;
  float fVar6;
  
  if (g_data_057ade5d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterData);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CapsuleCollider_AddComponent_CapsuleCollider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_AddComponent_Rigidbody);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&"Radius");
    il2cpp_runtime_helper_023445d0(&"APG");
    g_data_057ade5d = '\x01';
  }
  __this_00 = (Characters_BaseMovementSync_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  __this_03 = __this_00;
  UnityEngine_GameObject___ctor_4dfc3c0((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Characters_BaseMovementSync_o *)0x0) {
    __this_03 = __this_00;
    __this_01 = (UnityEngine_Rigidbody_o *)
                UnityEngine_GameObject__AddComponent_object_
                          ((UnityEngine_GameObject_o *)__this_00,MethodInfo_Rigidbody_AddComponent_Rigidbody);
    if (__this_01 != (UnityEngine_Rigidbody_o *)0x0) {
      UnityEngine_Rigidbody__set_useGravity(__this_01,0,(MethodInfo *)0x0);
      UnityEngine_Rigidbody__set_isKinematic(__this_01,1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_GameObject__set_layer
                ((UnityEngine_GameObject_o *)__this_00,*(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 8),
                 (MethodInfo *)0x0);
      __this_03 = __this_00;
      __this_02 = (UnityEngine_CapsuleCollider_o *)
                  UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)__this_00,MethodInfo_CapsuleCollider_AddComponent_CapsuleCollider);
      if (__this_02 != (UnityEngine_CapsuleCollider_o *)0x0) {
        UnityEngine_CapsuleCollider__set_direction(__this_02,2,(MethodInfo *)0x0);
        UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)__this_02,1,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_CharacterData + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_03 = (Characters_BaseMovementSync_o *)**(long **)(TypeInfo_CharacterData + 0xb8);
        if (__this_03 != (Characters_BaseMovementSync_o *)0x0) {
          pCVar2 = (Characters_BaseMovementSync_o *)
                   (*(__this_03->klass->vtable)._7_ReceiveCustomStream.methodPtr)
                             (__this_03,"APG",(__this_03->klass->vtable)._7_ReceiveCustomStream.method)
          ;
          if (pCVar2 != (Characters_BaseMovementSync_o *)0x0) {
            plVar3 = (long *)(*(pCVar2->klass->vtable)._7_ReceiveCustomStream.methodPtr)
                                       (pCVar2,"Radius",
                                        (pCVar2->klass->vtable)._7_ReceiveCustomStream.method);
            __this_03 = pCVar2;
            if (plVar3 != (long *)0x0) {
              fVar6 = (float)(**(code **)(*plVar3 + 0x388))(plVar3);
              UnityEngine_CapsuleCollider__set_radius(__this_02,fVar6,(MethodInfo *)0x0);
              UnityEngine_CapsuleCollider__set_height(__this_02,10.0,(MethodInfo *)0x0);
              fVar6 = UnityEngine_CapsuleCollider__get_height(__this_02,(MethodInfo *)0x0);
              auVar1._4_8_ = 0;
              auVar1._0_4_ = fVar6 * 0.5 + 0.5;
              UnityEngine_CapsuleCollider__set_center
                        (__this_02,(UnityEngine_Vector3_o)(auVar1 << 0x40),(MethodInfo *)0x0);
              pCVar4 = Characters_BaseHitbox__Create
                                 (human,(UnityEngine_GameObject_o *)__this_00,(UnityEngine_Collider_o *)0x0,
                                  (MethodInfo *)0x0);
              (__this->fields).APGHit = pCVar4;
              il2cpp_runtime_helper_022b4080(&(__this->fields).APGHit,pCVar4);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ade5e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_GetComponent_Human);
    g_data_057ade5e = '\x01';
  }
  Characters_BaseMovementSync__Awake(__this_03,(MethodInfo *)0x0);
  pCVar5 = (Characters_BaseMovementSync_c *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_03,MethodInfo_Human_GetComponent_Human);
  __this_03[1].klass = pCVar5;
  il2cpp_runtime_helper_022b4080(__this_03 + 1,pCVar5);
  return;
}


