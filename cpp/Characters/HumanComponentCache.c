// Type: Characters.HumanComponentCache
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HumanComponentCache.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HumanComponentCache.cs
// --------------------------------

// Characters.HumanComponentCache$$.ctor
// il2cpp: void Characters_HumanComponentCache___ctor (Characters_HumanComponentCache_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x182151f00

void Characters_HumanComponentCache___ctor
               (Characters_HumanComponentCache_o *__this,UnityEngine_GameObject_o *owner,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_ParticleSystem_o *pUVar3;
  Characters_BaseCharacter_o *owner_00;
  UnityEngine_GameObject_o *pUVar4;
  Characters_BaseHitbox_o *pCVar5;
  
  if (Il2CppMethodInitialized_184346c5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_ParticleSystem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"GroundLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"checkBox");
    il2cpp_codegen_initialize_runtime_metadata(&"neck");
    il2cpp_codegen_initialize_runtime_metadata(&"fire1");
    il2cpp_codegen_initialize_runtime_metadata(&"slideSparks");
    il2cpp_codegen_initialize_runtime_metadata(&"shoulder_L/upper_arm_L");
    il2cpp_codegen_initialize_runtime_metadata(&"hand_R");
    il2cpp_codegen_initialize_runtime_metadata(&"head");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Prefabs/HumanSounds");
    il2cpp_codegen_initialize_runtime_metadata(&"GroundRight");
    il2cpp_codegen_initialize_runtime_metadata(&"hookRefL1");
    il2cpp_codegen_initialize_runtime_metadata(&"3dmg_smoke");
    il2cpp_codegen_initialize_runtime_metadata(&"buff1");
    il2cpp_codegen_initialize_runtime_metadata(&"shoulder_R/upper_arm_R");
    il2cpp_codegen_initialize_runtime_metadata(&"chest");
    il2cpp_codegen_initialize_runtime_metadata(&"hookRef");
    il2cpp_codegen_initialize_runtime_metadata(&"forearm_L");
    il2cpp_codegen_initialize_runtime_metadata(&"hand_L");
    il2cpp_codegen_initialize_runtime_metadata(&"hookRefR1");
    il2cpp_codegen_initialize_runtime_metadata(&"Armature/Core/Controller_Body/hip/spine");
    il2cpp_codegen_initialize_runtime_metadata(&"buff2");
    il2cpp_codegen_initialize_runtime_metadata(&"speedFX");
    il2cpp_codegen_initialize_runtime_metadata(&"forearm_R");
    Il2CppMethodInitialized_184346c5c = '\x01';
  }
  Utility_BaseComponentCache___ctor((Utility_BaseComponentCache_o *)__this,owner,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).Transform;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"Armature/Core/Controller_Body/hip/spine",(MethodInfo *)0x0);
    (__this->fields).Spine = pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Spine,pUVar2);
    pUVar2 = (__this->fields).Spine;
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__Find(pUVar2,"chest",(MethodInfo *)0x0);
      (__this->fields).Chest = pUVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Chest,pUVar2);
      pUVar2 = (__this->fields).Transform;
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = UnityEngine_Transform__Find(pUVar2,"GroundLeft",(MethodInfo *)0x0);
        (__this->fields).GroundLeft = pUVar2;
        Il2CppCodeGenWriteBarrier(&(__this->fields).GroundLeft,pUVar2);
        pUVar2 = (__this->fields).Transform;
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          pUVar2 = UnityEngine_Transform__Find(pUVar2,"GroundRight",(MethodInfo *)0x0);
          (__this->fields).GroundRight = pUVar2;
          Il2CppCodeGenWriteBarrier(&(__this->fields).GroundRight,pUVar2);
          pUVar2 = (__this->fields).Chest;
          if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
            pUVar2 = UnityEngine_Transform__Find(pUVar2,"neck",(MethodInfo *)0x0);
            (__this->fields).Neck = pUVar2;
            Il2CppCodeGenWriteBarrier(&(__this->fields).Neck,pUVar2);
            pUVar2 = (__this->fields).Neck;
            if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
              pUVar2 = UnityEngine_Transform__Find(pUVar2,"head",(MethodInfo *)0x0);
              (__this->fields).Head = pUVar2;
              Il2CppCodeGenWriteBarrier(&(__this->fields).Head,pUVar2);
              pUVar2 = (__this->fields).Chest;
              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                pUVar2 = UnityEngine_Transform__Find(pUVar2,"shoulder_L/upper_arm_L",(MethodInfo *)0x0);
                (__this->fields).UpperarmL = pUVar2;
                Il2CppCodeGenWriteBarrier(&(__this->fields).UpperarmL,pUVar2);
                pUVar2 = (__this->fields).Chest;
                if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                  pUVar2 = UnityEngine_Transform__Find(pUVar2,"shoulder_R/upper_arm_R",(MethodInfo *)0x0);
                  (__this->fields).UpperarmR = pUVar2;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).UpperarmR,pUVar2);
                  pUVar2 = (__this->fields).UpperarmL;
                  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                    pUVar2 = UnityEngine_Transform__Find(pUVar2,"forearm_L",(MethodInfo *)0x0);
                    (__this->fields).ForearmL = pUVar2;
                    Il2CppCodeGenWriteBarrier(&(__this->fields).ForearmL,pUVar2);
                    pUVar2 = (__this->fields).UpperarmR;
                    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                      pUVar2 = UnityEngine_Transform__Find(pUVar2,"forearm_R",(MethodInfo *)0x0);
                      (__this->fields).ForearmR = pUVar2;
                      Il2CppCodeGenWriteBarrier(&(__this->fields).ForearmR,pUVar2);
                      pUVar2 = (__this->fields).ForearmL;
                      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                        pUVar2 = UnityEngine_Transform__Find(pUVar2,"hand_L",(MethodInfo *)0x0);
                        (__this->fields).HandL = pUVar2;
                        Il2CppCodeGenWriteBarrier(&(__this->fields).HandL,pUVar2);
                        pUVar2 = (__this->fields).ForearmR;
                        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                          pUVar2 = UnityEngine_Transform__Find(pUVar2,"hand_R",(MethodInfo *)0x0)
                          ;
                          (__this->fields).HandR = pUVar2;
                          Il2CppCodeGenWriteBarrier(&(__this->fields).HandR,pUVar2);
                          pUVar2 = (__this->fields).Transform;
                          if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
                             (pUVar2 = UnityEngine_Transform__Find
                                                 (pUVar2,"slideSparks",(MethodInfo *)0x0),
                             pUVar2 != (UnityEngine_Transform_o *)0x0)) {
                            pUVar3 = UnityEngine_Component__GetComponent_object_
                                               ((UnityEngine_Component_o *)pUVar2,
                                                (MethodInfo_6651A0 *)
                                                MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
                            (__this->fields).Sparks = pUVar3;
                            Il2CppCodeGenWriteBarrier(&(__this->fields).Sparks,pUVar3);
                            pUVar2 = (__this->fields).Transform;
                            if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
                               (pUVar2 = UnityEngine_Transform__Find
                                                   (pUVar2,"3dmg_smoke",(MethodInfo *)0x0),
                               pUVar2 != (UnityEngine_Transform_o *)0x0)) {
                              pUVar3 = UnityEngine_Component__GetComponent_object_
                                                 ((UnityEngine_Component_o *)pUVar2,
                                                  (MethodInfo_6651A0 *)
                                                  MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem
                                                 );
                              (__this->fields).Smoke = pUVar3;
                              Il2CppCodeGenWriteBarrier(&(__this->fields).Smoke,pUVar3);
                              pUVar2 = (__this->fields).Transform;
                              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                                pUVar2 = UnityEngine_Transform__Find
                                                   (pUVar2,"buff1",(MethodInfo *)0x0);
                                (__this->fields).Buff1 = pUVar2;
                                Il2CppCodeGenWriteBarrier(&(__this->fields).Buff1,pUVar2);
                                pUVar2 = (__this->fields).Transform;
                                if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                                  pUVar2 = UnityEngine_Transform__Find
                                                     (pUVar2,"buff2",(MethodInfo *)0x0);
                                  (__this->fields).Buff2 = pUVar2;
                                  Il2CppCodeGenWriteBarrier(&(__this->fields).Buff2,pUVar2);
                                  pUVar2 = (__this->fields).Transform;
                                  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                                    pUVar2 = UnityEngine_Transform__Find
                                                       (pUVar2,"fire1",(MethodInfo *)0x0);
                                    (__this->fields).Fire1 = pUVar2;
                                    Il2CppCodeGenWriteBarrier(&(__this->fields).Fire1,pUVar2);
                                    pUVar3 = (__this->fields).Smoke;
                                    if (pUVar3 != (UnityEngine_ParticleSystem_o *)0x0) {
                                      UnityEngine_ParticleSystem__Stop_2fca820(pUVar3,(MethodInfo *)0x0);
                                      pUVar3 = (__this->fields).Sparks;
                                      if (pUVar3 != (UnityEngine_ParticleSystem_o *)0x0) {
                                        UnityEngine_ParticleSystem__Stop_2fca820(pUVar3,(MethodInfo *)0x0);
                                        pUVar2 = (__this->fields).Transform;
                                        if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
                                           (pUVar2 = UnityEngine_Transform__Find
                                                               (pUVar2,"speedFX",(MethodInfo *)0x0
                                                               ), pUVar2 != (UnityEngine_Transform_o *)0x0)) {
                                          pUVar3 = UnityEngine_Component__GetComponentInChildren_object__664b50
                                                             ((UnityEngine_Component_o *)pUVar2,
                                                              (MethodInfo_664B50 *)
                                                                                                                            
                                                       MethodInfo_UnityEngine_Component_GetComponentInChildren_ParticleSystem
                                                       );
                                          (__this->fields).Wind = pUVar3;
                                          Il2CppCodeGenWriteBarrier(&(__this->fields).Wind,pUVar3);
                                          pUVar3 = (__this->fields).Wind;
                                          if (pUVar3 != (UnityEngine_ParticleSystem_o *)0x0) {
                                            UnityEngine_ParticleSystem__Stop_2fca820(pUVar3,(MethodInfo *)0x0)
                                            ;
                                            pUVar2 = (__this->fields).Transform;
                                            if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                                              pUVar2 = UnityEngine_Transform__Find
                                                                 (pUVar2,"speedFX",
                                                                  (MethodInfo *)0x0);
                                              (__this->fields).WindTransform = pUVar2;
                                              Il2CppCodeGenWriteBarrier
                                                        (&(__this->fields).WindTransform,pUVar2);
                                              pUVar2 = (__this->fields).Chest;
                                              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                                                pUVar2 = UnityEngine_Transform__Find
                                                                   (pUVar2,"hookRefL1",
                                                                    (MethodInfo *)0x0);
                                                (__this->fields).HookLeftAnchorDefault = pUVar2;
                                                Il2CppCodeGenWriteBarrier
                                                          (&(__this->fields).HookLeftAnchorDefault,pUVar2);
                                                pUVar2 = (__this->fields).Chest;
                                                if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                                                  pUVar2 = UnityEngine_Transform__Find
                                                                     (pUVar2,"hookRefR1",
                                                                      (MethodInfo *)0x0);
                                                  (__this->fields).HookRightAnchorDefault = pUVar2;
                                                  Il2CppCodeGenWriteBarrier
                                                            (&(__this->fields).HookRightAnchorDefault,pUVar2);
                                                  pUVar2 = (__this->fields).HandL;
                                                  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                                                    pUVar2 = UnityEngine_Transform__Find
                                                                       (pUVar2,"hookRef",
                                                                        (MethodInfo *)0x0);
                                                    (__this->fields).HookLeftAnchorGun = pUVar2;
                                                    Il2CppCodeGenWriteBarrier
                                                              (&(__this->fields).HookLeftAnchorGun,pUVar2);
                                                    pUVar2 = (__this->fields).HandR;
                                                    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                                                      pUVar2 = UnityEngine_Transform__Find
                                                                         (pUVar2,"hookRef",
                                                                          (MethodInfo *)0x0);
                                                      (__this->fields).HookRightAnchorGun = pUVar2;
                                                      Il2CppCodeGenWriteBarrier
                                                                (&(__this->fields).HookRightAnchorGun,pUVar2);
                                                      if (owner != (UnityEngine_GameObject_o *)0x0) {
                                                        owner_00 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (owner,(MethodInfo_6F5650 *)
                                                                                                                                                
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter
                                                       );
                                                       if ((TypeInfo_UnityEngine_Object->_2).
                                                           cctor_finished_or_no_cctor == 0) {
                                                         il2cpp_codegen_runtime_class_init
                                                                   ((Il2CppClass *)TypeInfo_UnityEngine_Object
                                                                   );
                                                       }
                                                       bVar1 = UnityEngine_Object__op_Inequality
                                                                         ((UnityEngine_Object_o *)owner_00,
                                                                          (UnityEngine_Object_o *)0x0,
                                                                          (MethodInfo *)0x0);
                                                       if (!bVar1) {
                                                         return;
                                                       }
                                                       pUVar2 = (__this->fields).HandL;
                                                       if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
                                                          (pUVar2 = UnityEngine_Transform__Find
                                                                              (pUVar2,"checkBox",
                                                                               (MethodInfo *)0x0),
                                                          pUVar2 != (UnityEngine_Transform_o *)0x0)) {
                                                         pUVar4 = UnityEngine_Component__get_gameObject
                                                                            ((UnityEngine_Component_o *)pUVar2
                                                                             ,(MethodInfo *)0x0);
                                                         pCVar5 = Characters_BaseHitbox__Create
                                                                            (owner_00,pUVar4,
                                                                             (UnityEngine_Collider_o *)0x0,
                                                                             (MethodInfo *)0x0);
                                                         (__this->fields).BladeHitLeft = pCVar5;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(__this->fields).BladeHitLeft,pCVar5);
                                                         pCVar5 = (__this->fields).BladeHitLeft;
                                                         if (pCVar5 != (Characters_BaseHitbox_o *)0x0) {
                                                           (pCVar5->fields).TwoFixedUpdates = true;
                                                           pUVar2 = (__this->fields).HandR;
                                                           if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
                                                              (pUVar2 = UnityEngine_Transform__Find
                                                                                  (pUVar2,
                                                       "checkBox",(MethodInfo *)0x0),
                                                       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
                                                         pUVar4 = UnityEngine_Component__get_gameObject
                                                                            ((UnityEngine_Component_o *)pUVar2
                                                                             ,(MethodInfo *)0x0);
                                                         pCVar5 = Characters_BaseHitbox__Create
                                                                            (owner_00,pUVar4,
                                                                             (UnityEngine_Collider_o *)0x0,
                                                                             (MethodInfo *)0x0);
                                                         (__this->fields).BladeHitRight = pCVar5;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(__this->fields).BladeHitRight,pCVar5);
                                                         pCVar5 = (__this->fields).BladeHitRight;
                                                         if (pCVar5 != (Characters_BaseHitbox_o *)0x0) {
                                                           (pCVar5->fields).TwoFixedUpdates = true;
                                                           Characters_HumanComponentCache__CreateAHSSHitbox
                                                                     (__this,owner_00,(MethodInfo *)0x0);
                                                           Characters_HumanComponentCache__CreateAPGHitbox
                                                                     (__this,owner_00,(MethodInfo *)0x0);
                                                           Utility_BaseComponentCache__LoadAudio
                                                                     ((Utility_BaseComponentCache_o *)__this,
                                                                      "Human/Prefabs/HumanSounds",
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
  ThrowNullReferenceException();
}


// Characters.HumanComponentCache$$CreateAHSSHitbox
// il2cpp: void Characters_HumanComponentCache__CreateAHSSHitbox (Characters_HumanComponentCache_o* __this, Characters_BaseCharacter_o* human, const MethodInfo* method);
// 0x1821519d0

void Characters_HumanComponentCache__CreateAHSSHitbox
               (Characters_HumanComponentCache_o *__this,Characters_BaseCharacter_o *human,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Rigidbody_o *__this_01;
  UnityEngine_CapsuleCollider_o *__this_02;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  longlong *plVar3;
  Characters_BaseHitbox_o *value;
  float fVar4;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184346c5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_CapsuleCollider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Rigidbody);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&"Radius");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSS");
    il2cpp_codegen_initialize_runtime_metadata(&"Range");
    Il2CppMethodInitialized_184346c5d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_2f1ad20(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__AddComponent_object_
                          (__this_00,
                           (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Rigidbody);
    if (__this_01 != (UnityEngine_Rigidbody_o *)0x0) {
      UnityEngine_Rigidbody__set_useGravity(__this_01,false,(MethodInfo *)0x0);
      UnityEngine_Rigidbody__set_isKinematic(__this_01,true,(MethodInfo *)0x0);
      if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
      }
      UnityEngine_GameObject__set_layer
                (__this_00,TypeInfo_Utility_PhysicsLayer->static_fields->Hitbox,(MethodInfo *)0x0);
      __this_02 = UnityEngine_GameObject__AddComponent_object_
                            (__this_00,
                             (MethodInfo_6F4D60 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_CapsuleCollider);
      if (__this_02 != (UnityEngine_CapsuleCollider_o *)0x0) {
        UnityEngine_CapsuleCollider__set_direction(__this_02,2,(MethodInfo *)0x0);
        UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)__this_02,true,(MethodInfo *)0x0);
        if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
        }
        pSVar1 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
        if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          pSVar2 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar1,(MethodInfo *)"AHSS");
          if (pSVar2 != (System_Xml_Schema_XmlSchema_o *)0x0) {
            plVar3 = (longlong *)
                     (*(pSVar2->klass->vtable)._7_get_IdAttribute.methodPtr)
                               (pSVar2,(MethodInfo *)"Radius");
            if (plVar3 != (longlong *)0x0) {
              fVar4 = (float)(**(code **)(*plVar3 + 0x388))(plVar3,*(undefined8 *)(*plVar3 + 0x390));
              UnityEngine_CapsuleCollider__set_radius(__this_02,fVar4,(MethodInfo *)0x0);
              plVar3 = (longlong *)
                       (*(pSVar2->klass->vtable)._7_get_IdAttribute.methodPtr)
                                 (pSVar2,(MethodInfo *)"Range");
              if (plVar3 != (longlong *)0x0) {
                fVar4 = (float)(**(code **)(*plVar3 + 0x388))(plVar3);
                UnityEngine_CapsuleCollider__set_height(__this_02,fVar4,(MethodInfo *)0x0);
                local_18.x = 0.0;
                local_18.y = 0.0;
                fVar4 = UnityEngine_CapsuleCollider__get_height(__this_02,(MethodInfo *)0x0);
                local_18.z = fVar4 * 0.5 + 0.5;
                UnityEngine_CapsuleCollider__set_center
                          (__this_02,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
                value = Characters_BaseHitbox__Create
                                  (human,__this_00,(UnityEngine_Collider_o *)0x0,(MethodInfo *)0x0);
                (__this->fields).AHSSHit = value;
                Il2CppCodeGenWriteBarrier(&(__this->fields).AHSSHit,value);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanComponentCache$$CreateAPGHitbox
// il2cpp: void Characters_HumanComponentCache__CreateAPGHitbox (Characters_HumanComponentCache_o* __this, Characters_BaseCharacter_o* human, const MethodInfo* method);
// 0x182151c90

void Characters_HumanComponentCache__CreateAPGHitbox
               (Characters_HumanComponentCache_o *__this,Characters_BaseCharacter_o *human,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Rigidbody_o *__this_01;
  UnityEngine_CapsuleCollider_o *__this_02;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  longlong *plVar3;
  Characters_BaseHitbox_o *value;
  float fVar4;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184346c5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_CapsuleCollider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Rigidbody);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&"Radius");
    il2cpp_codegen_initialize_runtime_metadata(&"APG");
    Il2CppMethodInitialized_184346c5e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_2f1ad20(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__AddComponent_object_
                          (__this_00,
                           (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Rigidbody);
    if (__this_01 != (UnityEngine_Rigidbody_o *)0x0) {
      UnityEngine_Rigidbody__set_useGravity(__this_01,false,(MethodInfo *)0x0);
      UnityEngine_Rigidbody__set_isKinematic(__this_01,true,(MethodInfo *)0x0);
      if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
      }
      UnityEngine_GameObject__set_layer
                (__this_00,TypeInfo_Utility_PhysicsLayer->static_fields->Hitbox,(MethodInfo *)0x0);
      __this_02 = UnityEngine_GameObject__AddComponent_object_
                            (__this_00,
                             (MethodInfo_6F4D60 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_CapsuleCollider);
      if (__this_02 != (UnityEngine_CapsuleCollider_o *)0x0) {
        UnityEngine_CapsuleCollider__set_direction(__this_02,2,(MethodInfo *)0x0);
        UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)__this_02,true,(MethodInfo *)0x0);
        if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
        }
        pSVar1 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
        if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          pSVar2 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar1,(MethodInfo *)"APG");
          if (pSVar2 != (System_Xml_Schema_XmlSchema_o *)0x0) {
            plVar3 = (longlong *)
                     (*(pSVar2->klass->vtable)._7_get_IdAttribute.methodPtr)
                               (pSVar2,(MethodInfo *)"Radius");
            if (plVar3 != (longlong *)0x0) {
              fVar4 = (float)(**(code **)(*plVar3 + 0x388))(plVar3);
              UnityEngine_CapsuleCollider__set_radius(__this_02,fVar4,(MethodInfo *)0x0);
              UnityEngine_CapsuleCollider__set_height(__this_02,10.0,(MethodInfo *)0x0);
              local_18.x = 0.0;
              local_18.y = 0.0;
              fVar4 = UnityEngine_CapsuleCollider__get_height(__this_02,(MethodInfo *)0x0);
              local_18.z = fVar4 * 0.5 + 0.5;
              UnityEngine_CapsuleCollider__set_center
                        (__this_02,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
              value = Characters_BaseHitbox__Create
                                (human,__this_00,(UnityEngine_Collider_o *)0x0,(MethodInfo *)0x0);
              (__this->fields).APGHit = value;
              Il2CppCodeGenWriteBarrier(&(__this->fields).APGHit,value);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


