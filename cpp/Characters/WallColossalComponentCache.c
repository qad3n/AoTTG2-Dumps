// Type: Characters.WallColossalComponentCache
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/WallColossalComponentCache.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/WallColossal/WallColossalComponentCache.cs
// --------------------------------

// Characters.WallColossalComponentCache$$.ctor
// il2cpp: void Characters_WallColossalComponentCache___ctor (Characters_WallColossalComponentCache_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x182193a00

void Characters_WallColossalComponentCache___ctor
               (Characters_WallColossalComponentCache_o *__this,UnityEngine_GameObject_o *owner,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  Characters_BaseHitbox_o *pCVar4;
  UnityEngine_Object_o *x;
  UnityEngine_Collider_o *pUVar5;
  bool bVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_ParticleSystem_o *pUVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Vector3_o *pUVar11;
  UnityEngine_Quaternion_o *pUVar12;
  Characters_WallColossalSteamWarningZone_o *value;
  UnityEngine_BoxCollider_o *__this_00;
  UnityEngine_Rigidbody_o *__this_01;
  UnityEngine_BoxCollider_o *__this_02;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Quaternion_Fields local_18;
  
  if (Il2CppMethodInitialized_184346d6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Rigidbody);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_WallColossalSteamWarningZone);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&"ColossalSteam1");
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/neck");
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_L/upper_arm_L/forearm_L/ArmSmokeParticle");
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2/Core");
    il2cpp_codegen_initialize_runtime_metadata(&"SteamWarningZone");
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_R/upper_arm_R/forearm_R/ArmSmokeParticle");
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2/Core/Controller_Body/hip");
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_R/upper_arm_R/forearm_R/hand_R");
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/neck/head");
    il2cpp_codegen_initialize_runtime_metadata(&"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_L/upper_arm_L/forearm_L/hand_L");
    il2cpp_codegen_initialize_runtime_metadata(&"Shifters/Prefabs/ShifterSounds");
    il2cpp_codegen_initialize_runtime_metadata(&"ColossalSteam2");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans/Prefabs/TitanSounds");
    Il2CppMethodInitialized_184346d6f = '\x01';
  }
  Characters_ShifterComponentCache___ctor
            ((Characters_ShifterComponentCache_o *)__this,owner,(MethodInfo *)0x0);
  pUVar7 = (__this->fields).Transform;
  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
    pUVar7 = UnityEngine_Transform__Find(pUVar7,"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/neck/head",(MethodInfo *)0x0);
    (__this->fields).Head = pUVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Head,pUVar7);
    pUVar7 = (__this->fields).Transform;
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      pUVar7 = UnityEngine_Transform__Find(pUVar7,"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/neck",(MethodInfo *)0x0);
      (__this->fields).Neck = pUVar7;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Neck,pUVar7);
      pUVar7 = (__this->fields).Transform;
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        pUVar7 = UnityEngine_Transform__Find(pUVar7,"Armature_VER2/Core",(MethodInfo *)0x0);
        (__this->fields).Core = pUVar7;
        Il2CppCodeGenWriteBarrier(&(__this->fields).Core,pUVar7);
        pUVar7 = (__this->fields).Transform;
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          pUVar7 = UnityEngine_Transform__Find(pUVar7,"Armature_VER2/Core/Controller_Body/hip",(MethodInfo *)0x0);
          (__this->fields).Hip = pUVar7;
          Il2CppCodeGenWriteBarrier(&(__this->fields).Hip,pUVar7);
          pUVar7 = (__this->fields).Neck;
          if ((pUVar7 != (UnityEngine_Transform_o *)0x0) &&
             (pUVar7 = UnityEngine_Transform__Find(pUVar7,"ColossalSteam1",(MethodInfo *)0x0),
             pUVar7 != (UnityEngine_Transform_o *)0x0)) {
            pUVar8 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar7,
                                (MethodInfo_6651A0 *)
                                MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
            (__this->fields).ColossalSteam1 = pUVar8;
            Il2CppCodeGenWriteBarrier(&(__this->fields).ColossalSteam1,pUVar8);
            pUVar7 = (__this->fields).Neck;
            if ((pUVar7 != (UnityEngine_Transform_o *)0x0) &&
               (pUVar7 = UnityEngine_Transform__Find(pUVar7,"ColossalSteam2",(MethodInfo *)0x0),
               pUVar7 != (UnityEngine_Transform_o *)0x0)) {
              pUVar8 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar7,
                                  (MethodInfo_6651A0 *)
                                  MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
              (__this->fields).ColossalSteam2 = pUVar8;
              Il2CppCodeGenWriteBarrier(&(__this->fields).ColossalSteam2,pUVar8);
              pUVar7 = (__this->fields).Transform;
              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                pUVar7 = UnityEngine_Transform__Find(pUVar7,"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_L/upper_arm_L/forearm_L/hand_L",(MethodInfo *)0x0);
                (__this->fields).LeftHand = pUVar7;
                Il2CppCodeGenWriteBarrier(&(__this->fields).LeftHand,pUVar7);
                pUVar7 = (__this->fields).Transform;
                if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                  pUVar7 = UnityEngine_Transform__Find(pUVar7,"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_R/upper_arm_R/forearm_R/hand_R",(MethodInfo *)0x0);
                  (__this->fields).RightHand = pUVar7;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).RightHand,pUVar7);
                  pUVar7 = (__this->fields).Transform;
                  if ((pUVar7 != (UnityEngine_Transform_o *)0x0) &&
                     (pUVar7 = UnityEngine_Transform__Find(pUVar7,"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_L/upper_arm_L/forearm_L/ArmSmokeParticle",(MethodInfo *)0x0),
                     pUVar7 != (UnityEngine_Transform_o *)0x0)) {
                    pUVar8 = UnityEngine_Component__GetComponent_object_
                                       ((UnityEngine_Component_o *)pUVar7,
                                        (MethodInfo_6651A0 *)
                                        MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
                    (__this->fields).LeftHandSteam = pUVar8;
                    Il2CppCodeGenWriteBarrier(&(__this->fields).LeftHandSteam,pUVar8);
                    pUVar7 = (__this->fields).Transform;
                    if ((pUVar7 != (UnityEngine_Transform_o *)0x0) &&
                       (pUVar7 = UnityEngine_Transform__Find(pUVar7,"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_R/upper_arm_R/forearm_R/ArmSmokeParticle",(MethodInfo *)0x0),
                       pUVar7 != (UnityEngine_Transform_o *)0x0)) {
                      pUVar8 = UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)pUVar7,
                                          (MethodInfo_6651A0 *)
                                          MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
                      (__this->fields).RightHandSteam = pUVar8;
                      Il2CppCodeGenWriteBarrier(&(__this->fields).RightHandSteam,pUVar8);
                      Utility_BaseComponentCache__LoadAudio
                                ((Utility_BaseComponentCache_o *)__this,"Shifters/Prefabs/ShifterSounds",
                                 (__this->fields).Neck,(MethodInfo *)0x0);
                      Utility_BaseComponentCache__LoadAudio
                                ((Utility_BaseComponentCache_o *)__this,"Titans/Prefabs/TitanSounds",
                                 (__this->fields).Neck,(MethodInfo *)0x0);
                      pCVar4 = (__this->fields).SteamHitbox;
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      bVar6 = UnityEngine_Object__op_Inequality
                                        ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,
                                         (MethodInfo *)0x0);
                      if (!bVar6) {
                        return;
                      }
                      pCVar4 = (__this->fields).SteamHitbox;
                      if (pCVar4 != (Characters_BaseHitbox_o *)0x0) {
                        x = (UnityEngine_Object_o *)(pCVar4->fields)._collider;
                        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                        }
                        bVar6 = UnityEngine_Object__op_Inequality
                                          (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                        if (!bVar6) {
                          return;
                        }
                        pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                        UnityEngine_GameObject___ctor(pUVar9,"SteamWarningZone",(MethodInfo *)0x0);
                        (__this->fields).SteamWarningZone = pUVar9;
                        Il2CppCodeGenWriteBarrier(&(__this->fields).SteamWarningZone,pUVar9);
                        pUVar9 = (__this->fields).SteamWarningZone;
                        if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar7 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
                          pCVar4 = (__this->fields).SteamHitbox;
                          if (((pCVar4 != (Characters_BaseHitbox_o *)0x0) &&
                              (pUVar10 = UnityEngine_Component__get_transform
                                                   ((UnityEngine_Component_o *)pCVar4,(MethodInfo *)0x0),
                              pUVar10 != (UnityEngine_Transform_o *)0x0)) &&
                             (pUVar10 = UnityEngine_Transform__GetParent(pUVar10,(MethodInfo *)0x0),
                             pUVar7 != (UnityEngine_Transform_o *)0x0)) {
                            UnityEngine_Transform__SetParent(pUVar7,pUVar10,(MethodInfo *)0x0);
                            pUVar9 = (__this->fields).SteamWarningZone;
                            if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                              pUVar7 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
                              pCVar4 = (__this->fields).SteamHitbox;
                              if (((pCVar4 != (Characters_BaseHitbox_o *)0x0) &&
                                  (pUVar10 = UnityEngine_Component__get_transform
                                                       ((UnityEngine_Component_o *)pCVar4,(MethodInfo *)0x0),
                                  pUVar10 != (UnityEngine_Transform_o *)0x0)) &&
                                 (pUVar11 = UnityEngine_Transform__get_localPosition
                                                      ((UnityEngine_Vector3_o *)&local_18,pUVar10,
                                                       (MethodInfo *)0x0),
                                 pUVar7 != (UnityEngine_Transform_o *)0x0)) {
                                local_28.x = (pUVar11->fields).x;
                                local_28.y = (pUVar11->fields).y;
                                local_28.z = (pUVar11->fields).z;
                                UnityEngine_Transform__set_localPosition
                                          (pUVar7,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
                                pUVar9 = (__this->fields).SteamWarningZone;
                                if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                                  pUVar7 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
                                  pCVar4 = (__this->fields).SteamHitbox;
                                  if (((pCVar4 != (Characters_BaseHitbox_o *)0x0) &&
                                      (pUVar10 = UnityEngine_Component__get_transform
                                                           ((UnityEngine_Component_o *)pCVar4,
                                                            (MethodInfo *)0x0),
                                      pUVar10 != (UnityEngine_Transform_o *)0x0)) &&
                                     (pUVar12 = UnityEngine_Transform__get_localRotation
                                                          ((UnityEngine_Quaternion_o *)&local_18,pUVar10,
                                                           (MethodInfo *)0x0),
                                     pUVar7 != (UnityEngine_Transform_o *)0x0)) {
                                    local_18.x = (pUVar12->fields).x;
                                    local_18.y = (pUVar12->fields).y;
                                    local_18.z = (pUVar12->fields).z;
                                    local_18.w = (pUVar12->fields).w;
                                    UnityEngine_Transform__set_localRotation
                                              (pUVar7,(UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0)
                                    ;
                                    pUVar9 = (__this->fields).SteamWarningZone;
                                    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
                                      il2cpp_codegen_runtime_class_init
                                                ((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
                                    }
                                    if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                                      UnityEngine_GameObject__set_layer
                                                (pUVar9,TypeInfo_Utility_PhysicsLayer->static_fields->
                                                        CharacterDetection,(MethodInfo *)0x0);
                                      pUVar9 = (__this->fields).SteamWarningZone;
                                      if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                                        value = UnityEngine_GameObject__AddComponent_object_
                                                          (pUVar9,(MethodInfo_6F4D60 *)
                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_WallColossalSteamWarningZone
                                                       );
                                        (__this->fields).SteamWarningZoneComponent = value;
                                        Il2CppCodeGenWriteBarrier
                                                  (&(__this->fields).SteamWarningZoneComponent,value);
                                        pCVar4 = (__this->fields).SteamHitbox;
                                        if (pCVar4 != (Characters_BaseHitbox_o *)0x0) {
                                          pUVar5 = (pCVar4->fields)._collider;
                                          __this_02 = (UnityEngine_BoxCollider_o *)0x0;
                                          if (pUVar5 != (UnityEngine_Collider_o *)0x0) {
                                            bVar3 = (TypeInfo_UnityEngine_BoxCollider->_2).typeHierarchyDepth;
                                            if (((pUVar5->klass->_2).typeHierarchyDepth < bVar3) ||
                                               (bVar6 = true,
                                               (pUVar5->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
                                               (Il2CppClass *)TypeInfo_UnityEngine_BoxCollider)) {
                                              bVar6 = false;
                                            }
                                            if (bVar6) {
                                              __this_02 = (UnityEngine_BoxCollider_o *)pUVar5;
                                            }
                                          }
                                          pUVar9 = (__this->fields).SteamWarningZone;
                                          if (((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
                                              (__this_00 = UnityEngine_GameObject__AddComponent_object_
                                                                     (pUVar9,(MethodInfo_6F4D60 *)
                                                                                                                                                          
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider
                                                       ), __this_02 != (UnityEngine_BoxCollider_o *)0x0)) &&
                                             (pUVar11 = UnityEngine_BoxCollider__get_center
                                                                  ((UnityEngine_Vector3_o *)&local_18,
                                                                   __this_02,(MethodInfo *)0x0),
                                             __this_00 != (UnityEngine_BoxCollider_o *)0x0)) {
                                            local_28.x = (pUVar11->fields).x;
                                            local_28.y = (pUVar11->fields).y;
                                            local_28.z = (pUVar11->fields).z;
                                            UnityEngine_BoxCollider__set_center
                                                      (__this_00,(UnityEngine_Vector3_o *)&local_28,
                                                       (MethodInfo *)0x0);
                                            pUVar11 = UnityEngine_BoxCollider__get_size
                                                                ((UnityEngine_Vector3_o *)&local_18,__this_02,
                                                                 (MethodInfo *)0x0);
                                            uVar1 = (pUVar11->fields).x;
                                            uVar2 = (pUVar11->fields).y;
                                            local_28.y = (float)uVar2 * 2.4;
                                            local_28.x = (float)uVar1 * 2.4;
                                            local_28.z = (pUVar11->fields).z * 2.4;
                                            UnityEngine_BoxCollider__set_size
                                                      (__this_00,(UnityEngine_Vector3_o *)&local_28,
                                                       (MethodInfo *)0x0);
                                            UnityEngine_Collider__set_isTrigger
                                                      ((UnityEngine_Collider_o *)__this_00,true,
                                                       (MethodInfo *)0x0);
                                            pUVar9 = (__this->fields).SteamWarningZone;
                                            if ((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
                                               (__this_01 = UnityEngine_GameObject__AddComponent_object_
                                                                      (pUVar9,(MethodInfo_6F4D60 *)
                                                                                                                                                            
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_Rigidbody
                                                       ), __this_01 != (UnityEngine_Rigidbody_o *)0x0)) {
                                              UnityEngine_Rigidbody__set_isKinematic
                                                        (__this_01,true,(MethodInfo *)0x0);
                                              UnityEngine_Rigidbody__set_useGravity
                                                        (__this_01,false,(MethodInfo *)0x0);
                                              pUVar9 = (__this->fields).SteamWarningZone;
                                              if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                                                UnityEngine_GameObject__SetActive
                                                          (pUVar9,false,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


