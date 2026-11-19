// Type: Characters.BasicTitanComponentCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Characters/BasicTitanComponentCache.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BasicTitanComponentCache.cs
// --------------------------------

// Characters.BasicTitanComponentCache$$.ctor
// il2cpp: void Characters_BasicTitanComponentCache___ctor (Characters_BasicTitanComponentCache_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x5c3fc10

void Characters_BasicTitanComponentCache___ctor
               (Characters_BasicTitanComponentCache_o *__this,UnityEngine_GameObject_o *owner,
               MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Collider_o **ppUVar2;
  UnityEngine_Collider_o **ppUVar3;
  byte bVar4;
  Characters_BaseHitbox_o *__this_00;
  Characters_BaseHitbox_array *pCVar5;
  UnityEngine_SphereCollider_o *pUVar6;
  MethodInfo *pMVar7;
  bool bVar8;
  uint uVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_CapsuleCollider_o *pUVar11;
  Characters_BaseCharacter_o *owner_00;
  System_Object_array *pSVar12;
  UnityEngine_Object_o *__this_01;
  System_String_o *a;
  UnityEngine_GameObject_o *pUVar13;
  Characters_BaseHitbox_o *pCVar14;
  uint uVar15;
  Characters_BaseHitbox_o **targetAddress;
  System_Collections_Generic_List_BaseHitbox__o *__this_02;
  float fVar16;
  
  if (Il2CppMethodInitialized_0754780c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseHitbox_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SphereCollider);
    il2cpp_codegen_initialize_runtime_metadata(&"CrawlerHitbox");
    il2cpp_codegen_initialize_runtime_metadata(&"BodyHitbox");
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2/Core/Controller.Body");
    il2cpp_codegen_initialize_runtime_metadata(&"head");
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2/Core");
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.R/upper_arm.R/forearm.R/hand.R/GrabRSocket");
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck");
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.L/upper_arm.L/forearm.L/hand.L/GrabLSocket");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans/Prefabs/TitanSounds");
    il2cpp_codegen_initialize_runtime_metadata(&"ForearmLHurtbox");
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2/Core/Controller.Body/hip");
    il2cpp_codegen_initialize_runtime_metadata(&"HairSocket");
    il2cpp_codegen_initialize_runtime_metadata(&"ForearmRHurtbox");
    Il2CppMethodInitialized_0754780c = '\x01';
  }
  Characters_BaseTitanComponentCache___ctor
            ((Characters_BaseTitanComponentCache_o *)__this,owner,(MethodInfo *)0x0);
  pUVar10 = (__this->fields).Transform;
  if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
    pUVar10 = UnityEngine_Transform__Find(pUVar10,"Amarture_VER2/Core",(MethodInfo *)0x0);
    (__this->fields).Core = pUVar10;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Core);
    pUVar10 = (__this->fields).Transform;
    if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
      pUVar10 = UnityEngine_Transform__Find(pUVar10,"Amarture_VER2/Core/Controller.Body",(MethodInfo *)0x0);
      (__this->fields).Body = pUVar10;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Body);
      pUVar10 = (__this->fields).Transform;
      if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
        pUVar10 = UnityEngine_Transform__Find(pUVar10,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck",(MethodInfo *)0x0);
        (__this->fields).Neck = pUVar10;
        Il2CppCodeGenWriteBarrier(&(__this->fields).Neck);
        pUVar10 = (__this->fields).Transform;
        if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
          pUVar10 = UnityEngine_Transform__Find(pUVar10,"Amarture_VER2/Core/Controller.Body/hip",(MethodInfo *)0x0);
          (__this->fields).Hip = pUVar10;
          Il2CppCodeGenWriteBarrier(&(__this->fields).Hip);
          pUVar10 = (__this->fields).Neck;
          if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
            pUVar10 = UnityEngine_Transform__Find(pUVar10,"head",(MethodInfo *)0x0);
            (__this->fields).Head = pUVar10;
            Il2CppCodeGenWriteBarrier(&(__this->fields).Head);
            pUVar10 = (__this->fields).Head;
            if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
              pUVar10 = UnityEngine_Transform__Find(pUVar10,"HairSocket",(MethodInfo *)0x0);
              (__this->fields).HairSocket = pUVar10;
              Il2CppCodeGenWriteBarrier(&(__this->fields).HairSocket);
              pUVar10 = (__this->fields).Head;
              if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                pUVar11 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar10,
                                     (MethodInfo_34B0830 *)
                                     MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider);
                (__this->fields).HeadCollider = pUVar11;
                Il2CppCodeGenWriteBarrier(&(__this->fields).HeadCollider);
                pUVar10 = (__this->fields).Transform;
                if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                  pUVar10 = UnityEngine_Transform__Find(pUVar10,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.L/upper_arm.L/forearm.L/hand.L/GrabLSocket",(MethodInfo *)0x0);
                  (__this->fields).GrabLSocket = pUVar10;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).GrabLSocket);
                  pUVar10 = (__this->fields).Transform;
                  if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                    pUVar10 = UnityEngine_Transform__Find(pUVar10,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.R/upper_arm.R/forearm.R/hand.R/GrabRSocket",(MethodInfo *)0x0);
                    (__this->fields).GrabRSocket = pUVar10;
                    Il2CppCodeGenWriteBarrier(&(__this->fields).GrabRSocket);
                    if (owner != (UnityEngine_GameObject_o *)0x0) {
                      owner_00 = UnityEngine_GameObject__GetComponent_object_
                                           (owner,(MethodInfo_353B730 *)
                                                  MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter
                                           );
                      pCVar14 = (Characters_BaseHitbox_o *)
                                MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider;
                      pSVar12 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                                          (owner,(MethodInfo_353C030 *)
                                                 MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider
                                          );
                      if (pSVar12 != (System_Object_array *)0x0) {
                        uVar9 = (uint)pSVar12->max_length;
                        if (0 < (int)uVar9) {
                          ppUVar2 = &(__this->fields).ForearmRHurtbox;
                          ppUVar3 = &(__this->fields).ForearmLHurtbox;
                          uVar15 = 0;
                          do {
                            if (uVar9 <= uVar15) {
                              ThrowIndexOutOfRangeException();
                            }
                            __this_00 = (Characters_BaseHitbox_o *)pSVar12->m_Items[(int)uVar15];
                            if (__this_00 == (Characters_BaseHitbox_o *)0x0) goto label_05c401e6;
                            __this_01 = (UnityEngine_Object_o *)
                                        UnityEngine_Component__get_gameObject
                                                  ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                            if (__this_01 == (UnityEngine_Object_o *)0x0) goto label_05c401e6;
                            a = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
                            bVar8 = System_String__op_Equality(a,"ForearmLHurtbox",(MethodInfo *)0x0);
                            if (bVar8) {
                              *ppUVar3 = (UnityEngine_Collider_o *)__this_00;
                              targetAddress = (Characters_BaseHitbox_o **)ppUVar3;
label_05c3ff76:
                              pCVar14 = __this_00;
label_05c3ff79:
                              Il2CppCodeGenWriteBarrier(targetAddress);
                            }
                            else {
                              bVar8 = System_String__op_Equality(a,"ForearmRHurtbox",(MethodInfo *)0x0);
                              if (bVar8) {
                                *ppUVar2 = (UnityEngine_Collider_o *)__this_00;
                                targetAddress = (Characters_BaseHitbox_o **)ppUVar2;
                                goto label_05c3ff76;
                              }
                              bVar8 = System_String__op_Equality(a,"BodyHitbox",(MethodInfo *)0x0);
                              if (bVar8) {
                                pUVar13 = UnityEngine_Component__get_gameObject
                                                    ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                                pCVar14 = Characters_BaseHitbox__Create
                                                    (owner_00,pUVar13,(UnityEngine_Collider_o *)__this_00,
                                                     (MethodInfo *)0x0);
                                (__this->fields).BodyHitbox = pCVar14;
                                Il2CppCodeGenWriteBarrier(&(__this->fields).BodyHitbox);
                                __this_02 = (__this->fields).Hitboxes;
                                if (__this_02 != (System_Collections_Generic_List_BaseHitbox__o *)0x0) {
                                  pCVar14 = (__this->fields).BodyHitbox;
label_05c400da:
                                  pMVar7 = MethodInfo_System_Collections_Generic_List_BaseHitbox_Add;
                                  piVar1 = &(__this_02->fields)._version;
                                  *piVar1 = *piVar1 + 1;
                                  pCVar5 = (__this_02->fields)._items;
                                  if (pCVar5 != (Characters_BaseHitbox_array *)0x0) {
                                    uVar9 = (__this_02->fields)._size;
                                    if ((uint)pCVar5->max_length <= uVar9) {
                                      System_Collections_Generic_List_object___AddWithResize
                                                ((System_Collections_Generic_List_object__o *)__this_02,
                                                 (Il2CppObject *)pCVar14,
                                                 (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
                                      goto label_05c3ff7e;
                                    }
                                    (__this_02->fields)._size = uVar9 + 1;
                                    targetAddress = pCVar5->m_Items + (int)uVar9;
                                    pCVar5->m_Items[(int)uVar9] = pCVar14;
                                    goto label_05c3ff79;
                                  }
                                }
                                goto label_05c401e6;
                              }
                              pCVar14 = (Characters_BaseHitbox_o *)"CrawlerHitbox";
                              bVar8 = System_String__op_Equality(a,"CrawlerHitbox",(MethodInfo *)0x0);
                              if (bVar8) {
                                pUVar13 = UnityEngine_Component__get_gameObject
                                                    ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                                pCVar14 = Characters_BaseHitbox__Create
                                                    (owner_00,pUVar13,(UnityEngine_Collider_o *)__this_00,
                                                     (MethodInfo *)0x0);
                                (__this->fields).CrawlerHitbox = pCVar14;
                                Il2CppCodeGenWriteBarrier(&(__this->fields).CrawlerHitbox);
                                __this_02 = (__this->fields).Hitboxes;
                                if (__this_02 != (System_Collections_Generic_List_BaseHitbox__o *)0x0) {
                                  pCVar14 = (__this->fields).CrawlerHitbox;
                                  goto label_05c400da;
                                }
                                goto label_05c401e6;
                              }
                            }
label_05c3ff7e:
                            uVar15 = uVar15 + 1;
                            uVar9 = (uint)pSVar12->max_length;
                          } while ((int)uVar15 < (int)uVar9);
                        }
                        pUVar6 = (UnityEngine_SphereCollider_o *)(__this->fields).HandLHurtbox;
                        if (pUVar6 != (UnityEngine_SphereCollider_o *)0x0) {
                          bVar4 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
                          if ((bVar4 <= (pUVar6->klass->_2).typeHierarchyDepth) &&
                             ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar4 - 1] ==
                              (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider)) {
                            pCVar14 = (Characters_BaseHitbox_o *)0x0;
                            fVar16 = UnityEngine_SphereCollider__get_radius(pUVar6,(MethodInfo *)0x0);
                            (__this->fields).HandLHurtboxRadius = fVar16;
                          }
                        }
                        pUVar6 = (UnityEngine_SphereCollider_o *)(__this->fields).HandRHurtbox;
                        if (pUVar6 != (UnityEngine_SphereCollider_o *)0x0) {
                          bVar4 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
                          if ((bVar4 <= (pUVar6->klass->_2).typeHierarchyDepth) &&
                             ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar4 - 1] ==
                              (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider)) {
                            pCVar14 = (Characters_BaseHitbox_o *)0x0;
                            fVar16 = UnityEngine_SphereCollider__get_radius(pUVar6,(MethodInfo *)0x0);
                            (__this->fields).HandRHurtboxRadius = fVar16;
                          }
                        }
                        Characters_BasicTitanComponentCache__SetupParticles(__this,(MethodInfo *)pCVar14);
                        Utility_BaseComponentCache__LoadAudio
                                  ((Utility_BaseComponentCache_o *)__this,"Titans/Prefabs/TitanSounds",
                                   (__this->fields).Neck,(MethodInfo *)0x0);
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
label_05c401e6:
  ThrowNullReferenceException();
}


// Characters.BasicTitanComponentCache$$SetupParticles
// il2cpp: void Characters_BasicTitanComponentCache__SetupParticles (Characters_BasicTitanComponentCache_o* __this, const MethodInfo* method);
// 0x5c401f0

void Characters_BasicTitanComponentCache__SetupParticles
               (Characters_BasicTitanComponentCache_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o **targetAddress;
  UnityEngine_ParticleSystem_o **ppUVar1;
  UnityEngine_ParticleSystem_o **targetAddress_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  UnityEngine_Vector3_StaticFields *pUVar18;
  UnityEngine_Component_o *pUVar19;
  UnityEngine_Transform_o *pUVar20;
  MethodInfo *pMVar21;
  UnityEngine_ParticleSystem_o *pUVar22;
  UnityEngine_Transform_o *pUVar23;
  UnityEngine_Quaternion_o UVar24;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o value_02;
  UnityEngine_Vector3_o value_03;
  UnityEngine_Vector3_o value_04;
  UnityEngine_Vector3_o value_05;
  UnityEngine_Vector3_o value_06;
  UnityEngine_Vector3_o value_07;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Transform_o **local_38;
  
  if (Il2CppMethodInitialized_0754780d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanComponentCache);
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.R/upper_arm.R/forearm.R");
    il2cpp_codegen_initialize_runtime_metadata(&"ArmBloodParticle");
    il2cpp_codegen_initialize_runtime_metadata(&"hand.L");
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.L/upper_arm.L/forearm.L");
    il2cpp_codegen_initialize_runtime_metadata(&"NapeBloodParticle");
    il2cpp_codegen_initialize_runtime_metadata(&"WardedWeakSpotParticle");
    il2cpp_codegen_initialize_runtime_metadata(&"ArmSmokeParticle");
    il2cpp_codegen_initialize_runtime_metadata(&"hand.R");
    il2cpp_codegen_initialize_runtime_metadata(&"DecapitationParticle");
    Il2CppMethodInitialized_0754780d = '\x01';
  }
  pUVar20 = (__this->fields).Transform;
  if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
    pUVar20 = UnityEngine_Transform__Find(pUVar20,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.L/upper_arm.L/forearm.L",(MethodInfo *)0x0);
    targetAddress = &(__this->fields).ForearmL;
    (__this->fields).ForearmL = pUVar20;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar20 = (__this->fields).Transform;
    if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
      pUVar20 = UnityEngine_Transform__Find(pUVar20,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.R/upper_arm.R/forearm.R",(MethodInfo *)0x0);
      local_38 = &(__this->fields).ForearmR;
      (__this->fields).ForearmR = pUVar20;
      Il2CppCodeGenWriteBarrier(local_38);
      pUVar20 = (__this->fields).ForearmL;
      if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
        pUVar20 = UnityEngine_Transform__Find(pUVar20,"hand.L",(MethodInfo *)0x0);
        (__this->fields).HandL = pUVar20;
        Il2CppCodeGenWriteBarrier(&(__this->fields).HandL);
        pUVar20 = (__this->fields).ForearmR;
        if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
          pMVar21 = (MethodInfo *)UnityEngine_Transform__Find(pUVar20,"hand.R",(MethodInfo *)0x0)
          ;
          (__this->fields).HandR = (UnityEngine_Transform_o *)pMVar21;
          Il2CppCodeGenWriteBarrier(&(__this->fields).HandR);
          if ((TypeInfo_Characters_BasicTitanComponentCache->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanComponentCache);
          }
          pMVar21 = (MethodInfo *)
                    Characters_BasicTitanComponentCache__InstantiateParticle("ArmBloodParticle",pMVar21);
          ppUVar1 = &(__this->fields).ForearmBloodL;
          (__this->fields).ForearmBloodL = (UnityEngine_ParticleSystem_o *)pMVar21;
          Il2CppCodeGenWriteBarrier(ppUVar1);
          pUVar22 = Characters_BasicTitanComponentCache__InstantiateParticle("ArmBloodParticle",pMVar21);
          targetAddress_00 = &(__this->fields).ForearmBloodR;
          (__this->fields).ForearmBloodR = pUVar22;
          Il2CppCodeGenWriteBarrier(targetAddress_00);
          pUVar22 = (__this->fields).ForearmBloodL;
          if (pUVar22 != (UnityEngine_ParticleSystem_o *)0x0) {
            pUVar20 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pUVar22,(MethodInfo *)0x0);
            if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent(pUVar20,*targetAddress,(MethodInfo *)0x0);
              if (*ppUVar1 != (UnityEngine_ParticleSystem_o *)0x0) {
                pUVar20 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)*ppUVar1,(MethodInfo *)0x0);
                if (Il2CppMethodInitialized_0753e4b6 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                  Il2CppMethodInitialized_0753e4b6 = '\x01';
                }
                if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__set_localPosition
                            (pUVar20,(UnityEngine_Vector3_o)
                                     (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,
                             (MethodInfo *)0x0);
                  if (*ppUVar1 != (UnityEngine_ParticleSystem_o *)0x0) {
                    pUVar20 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)*ppUVar1,(MethodInfo *)0x0);
                    local_48.x = -1.5707964;
                    local_48.y = 0.0;
                    local_48.z = 0.0;
                    UVar24 = UnityEngine_Quaternion__Internal_FromEulerRad
                                       ((UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
                    if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                      UnityEngine_Transform__set_localRotation(pUVar20,UVar24,(MethodInfo *)0x0);
                      if (*ppUVar1 != (UnityEngine_ParticleSystem_o *)0x0) {
                        pUVar20 = UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)*ppUVar1,(MethodInfo *)0x0);
                        if (Il2CppMethodInitialized_0753e4b7 == '\0') {
                          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                          Il2CppMethodInitialized_0753e4b7 = '\x01';
                        }
                        if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                          pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
                          value.fields.z = (pUVar18->oneVector).fields.z * 0.01;
                          uVar2 = (pUVar18->oneVector).fields.x;
                          uVar10 = (pUVar18->oneVector).fields.y;
                          value.fields.x = (float)uVar2 * 0.01;
                          value.fields.y = (float)uVar10 * 0.01;
                          UnityEngine_Transform__set_localScale(pUVar20,value,(MethodInfo *)0x0);
                          if (*targetAddress_00 != (UnityEngine_ParticleSystem_o *)0x0) {
                            pUVar20 = UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)*targetAddress_00,
                                                 (MethodInfo *)0x0);
                            if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                              UnityEngine_Transform__SetParent(pUVar20,*local_38,(MethodInfo *)0x0);
                              if (*targetAddress_00 != (UnityEngine_ParticleSystem_o *)0x0) {
                                pUVar20 = UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)*targetAddress_00,
                                                     (MethodInfo *)0x0);
                                if (Il2CppMethodInitialized_0753e4b6 == '\0') {
                                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                                  Il2CppMethodInitialized_0753e4b6 = '\x01';
                                }
                                if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                                  UnityEngine_Transform__set_localPosition
                                            (pUVar20,(UnityEngine_Vector3_o)
                                                     (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector)
                                                     .fields,(MethodInfo *)0x0);
                                  if (*targetAddress_00 != (UnityEngine_ParticleSystem_o *)0x0) {
                                    pUVar20 = UnityEngine_Component__get_transform
                                                        ((UnityEngine_Component_o *)*targetAddress_00,
                                                         (MethodInfo *)0x0);
                                    local_48.x = -1.5707964;
                                    local_48.y = 0.0;
                                    local_48.z = 0.0;
                                    UVar24 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                       ((UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
                                    if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                                      UnityEngine_Transform__set_localRotation
                                                (pUVar20,UVar24,(MethodInfo *)0x0);
                                      if (*targetAddress_00 != (UnityEngine_ParticleSystem_o *)0x0) {
                                        pUVar20 = UnityEngine_Component__get_transform
                                                            ((UnityEngine_Component_o *)*targetAddress_00,
                                                             (MethodInfo *)0x0);
                                        if (Il2CppMethodInitialized_0753e4b7 == '\0') {
                                          il2cpp_codegen_initialize_runtime_metadata
                                                    (&TypeInfo_UnityEngine_Vector3);
                                          Il2CppMethodInitialized_0753e4b7 = '\x01';
                                        }
                                        if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                                          pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
                                          value_00.fields.z = (pUVar18->oneVector).fields.z * 0.01;
                                          uVar3 = (pUVar18->oneVector).fields.x;
                                          uVar11 = (pUVar18->oneVector).fields.y;
                                          value_00.fields.x = (float)uVar3 * 0.01;
                                          value_00.fields.y = (float)uVar11 * 0.01;
                                          pMVar21 = (MethodInfo *)0x0;
                                          UnityEngine_Transform__set_localScale
                                                    (pUVar20,value_00,(MethodInfo *)0x0);
                                          pMVar21 = (MethodInfo *)
                                                    Characters_BasicTitanComponentCache__InstantiateParticle
                                                              ("ArmSmokeParticle",pMVar21);
                                          (__this->fields).ForearmSmokeL =
                                               (UnityEngine_ParticleSystem_o *)pMVar21;
                                          Il2CppCodeGenWriteBarrier(&(__this->fields).ForearmSmokeL);
                                          pMVar21 = (MethodInfo *)
                                                    Characters_BasicTitanComponentCache__InstantiateParticle
                                                              ("ArmSmokeParticle",pMVar21);
                                          (__this->fields).ForearmSmokeR =
                                               (UnityEngine_ParticleSystem_o *)pMVar21;
                                          Il2CppCodeGenWriteBarrier(&(__this->fields).ForearmSmokeR);
                                          pUVar22 = Characters_BasicTitanComponentCache__InstantiateParticle
                                                              ("NapeBloodParticle",pMVar21);
                                          ppUVar1 = &(__this->fields).NapeBlood;
                                          (__this->fields).NapeBlood = pUVar22;
                                          Il2CppCodeGenWriteBarrier(ppUVar1);
                                          pUVar22 = (__this->fields).NapeBlood;
                                          if (pUVar22 != (UnityEngine_ParticleSystem_o *)0x0) {
                                            pUVar20 = UnityEngine_Component__get_transform
                                                                ((UnityEngine_Component_o *)pUVar22,
                                                                 (MethodInfo *)0x0);
                                            if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                                              UnityEngine_Transform__SetParent
                                                        (pUVar20,(__this->fields).Neck,(MethodInfo *)0x0);
                                              pUVar22 = (__this->fields).NapeBlood;
                                              if (pUVar22 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                pUVar20 = UnityEngine_Component__get_transform
                                                                    ((UnityEngine_Component_o *)pUVar22,
                                                                     (MethodInfo *)0x0);
                                                if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                                                  value_01.fields.z = -0.1;
                                                  value_01.fields.x = 0.0;
                                                  value_01.fields.y = 0.02;
                                                  UnityEngine_Transform__set_localPosition
                                                            (pUVar20,value_01,(MethodInfo *)0x0);
                                                  if (*ppUVar1 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                    pUVar20 = UnityEngine_Component__get_transform
                                                                        ((UnityEngine_Component_o *)*ppUVar1,
                                                                         (MethodInfo *)0x0);
                                                    local_48.x = 0.0;
                                                    local_48.y = 3.1415927;
                                                    local_48.z = 0.0;
                                                    UVar24 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                                       ((UnityEngine_Vector3_o *)&local_48,
                                                                        (MethodInfo *)0x0);
                                                    if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                                                      UnityEngine_Transform__set_localRotation
                                                                (pUVar20,UVar24,(MethodInfo *)0x0);
                                                      if (*ppUVar1 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                        pUVar20 = UnityEngine_Component__get_transform
                                                                            ((UnityEngine_Component_o *)
                                                                             *ppUVar1,(MethodInfo *)0x0);
                                                        if (Il2CppMethodInitialized_0753e4b7 == '\0') {
                                                          il2cpp_codegen_initialize_runtime_metadata
                                                                    (&TypeInfo_UnityEngine_Vector3);
                                                          Il2CppMethodInitialized_0753e4b7 = '\x01';
                                                        }
                                                        if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                                                          pUVar18 = TypeInfo_UnityEngine_Vector3->
                                                                    static_fields;
                                                          value_02.fields.z =
                                                               (pUVar18->oneVector).fields.z * 0.01;
                                                          uVar4 = (pUVar18->oneVector).fields.x;
                                                          uVar12 = (pUVar18->oneVector).fields.y;
                                                          value_02.fields.x = (float)uVar4 * 0.01;
                                                          value_02.fields.y = (float)uVar12 * 0.01;
                                                          pMVar21 = (MethodInfo *)0x0;
                                                          UnityEngine_Transform__set_localScale
                                                                    (pUVar20,value_02,(MethodInfo *)0x0);
                                                          pUVar22 = 
                                                       Characters_BasicTitanComponentCache__InstantiateParticle
                                                                 ("WardedWeakSpotParticle",pMVar21);
                                                       ppUVar1 = &(__this->fields).WardedWeakSpotForearmL;
                                                       (__this->fields).WardedWeakSpotForearmL = pUVar22;
                                                       Il2CppCodeGenWriteBarrier(ppUVar1);
                                                       pUVar22 = (__this->fields).WardedWeakSpotForearmL;
                                                       if (pUVar22 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                         pUVar20 = UnityEngine_Component__get_transform
                                                                             ((UnityEngine_Component_o *)
                                                                              pUVar22,(MethodInfo *)0x0);
                                                         if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                                                           UnityEngine_Transform__SetParent
                                                                     (pUVar20,*targetAddress,(MethodInfo *)0x0
                                                                     );
                                                           if (*ppUVar1 != (UnityEngine_ParticleSystem_o *)0x0
                                                              ) {
                                                             pUVar20 = UnityEngine_Component__get_transform
                                                                                 ((UnityEngine_Component_o *)
                                                                                  *ppUVar1,(MethodInfo *)0x0);
                                                             if (Il2CppMethodInitialized_0753e4b6 == '\0') {
                                                               il2cpp_codegen_initialize_runtime_metadata
                                                                         (&TypeInfo_UnityEngine_Vector3);
                                                               Il2CppMethodInitialized_0753e4b6 = '\x01';
                                                             }
                                                             if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                                                               UnityEngine_Transform__set_localPosition
                                                                         (pUVar20,(UnityEngine_Vector3_o)
                                                                                  (
                                                       TypeInfo_UnityEngine_Vector3->static_fields->zeroVector
                                                       ).fields,(MethodInfo *)0x0);
                                                       if (*ppUVar1 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                         pUVar20 = UnityEngine_Component__get_transform
                                                                             ((UnityEngine_Component_o *)
                                                                              *ppUVar1,(MethodInfo *)0x0);
                                                         local_48.x = -1.5707964;
                                                         local_48.y = 0.0;
                                                         local_48.z = 0.0;
                                                         UVar24 = 
                                                       UnityEngine_Quaternion__Internal_FromEulerRad
                                                                 ((UnityEngine_Vector3_o *)&local_48,
                                                                  (MethodInfo *)0x0);
                                                       if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                                                         UnityEngine_Transform__set_localRotation
                                                                   (pUVar20,UVar24,(MethodInfo *)0x0);
                                                         if (*ppUVar1 != (UnityEngine_ParticleSystem_o *)0x0)
                                                         {
                                                           pUVar20 = UnityEngine_Component__get_transform
                                                                               ((UnityEngine_Component_o *)
                                                                                *ppUVar1,(MethodInfo *)0x0);
                                                           if (Il2CppMethodInitialized_0753e4b7 == '\0') {
                                                             il2cpp_codegen_initialize_runtime_metadata
                                                                       (&TypeInfo_UnityEngine_Vector3);
                                                             Il2CppMethodInitialized_0753e4b7 = '\x01';
                                                           }
                                                           if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                                                             pUVar18 = TypeInfo_UnityEngine_Vector3->
                                                                       static_fields;
                                                             value_03.fields.z =
                                                                  (pUVar18->oneVector).fields.z * 0.05;
                                                             uVar5 = (pUVar18->oneVector).fields.x;
                                                             uVar13 = (pUVar18->oneVector).fields.y;
                                                             value_03.fields.x = (float)uVar5 * 0.05;
                                                             value_03.fields.y = (float)uVar13 * 0.05;
                                                             pMVar21 = (MethodInfo *)0x0;
                                                             UnityEngine_Transform__set_localScale
                                                                       (pUVar20,value_03,(MethodInfo *)0x0);
                                                             pUVar22 = 
                                                       Characters_BasicTitanComponentCache__InstantiateParticle
                                                                 ("WardedWeakSpotParticle",pMVar21);
                                                       ppUVar1 = &(__this->fields).WardedWeakSpotForearmR;
                                                       (__this->fields).WardedWeakSpotForearmR = pUVar22;
                                                       Il2CppCodeGenWriteBarrier(ppUVar1);
                                                       pUVar22 = (__this->fields).WardedWeakSpotForearmR;
                                                       if (pUVar22 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                         pUVar20 = UnityEngine_Component__get_transform
                                                                             ((UnityEngine_Component_o *)
                                                                              pUVar22,(MethodInfo *)0x0);
                                                         if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                                                           UnityEngine_Transform__SetParent
                                                                     (pUVar20,*local_38,(MethodInfo *)0x0);
                                                           if (*ppUVar1 != (UnityEngine_ParticleSystem_o *)0x0
                                                              ) {
                                                             pUVar20 = UnityEngine_Component__get_transform
                                                                                 ((UnityEngine_Component_o *)
                                                                                  *ppUVar1,(MethodInfo *)0x0);
                                                             if (Il2CppMethodInitialized_0753e4b6 == '\0') {
                                                               il2cpp_codegen_initialize_runtime_metadata
                                                                         (&TypeInfo_UnityEngine_Vector3);
                                                               Il2CppMethodInitialized_0753e4b6 = '\x01';
                                                             }
                                                             if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                                                               UnityEngine_Transform__set_localPosition
                                                                         (pUVar20,(UnityEngine_Vector3_o)
                                                                                  (
                                                       TypeInfo_UnityEngine_Vector3->static_fields->zeroVector
                                                       ).fields,(MethodInfo *)0x0);
                                                       if (*ppUVar1 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                         pUVar20 = UnityEngine_Component__get_transform
                                                                             ((UnityEngine_Component_o *)
                                                                              *ppUVar1,(MethodInfo *)0x0);
                                                         local_48.x = -1.5707964;
                                                         local_48.y = 0.0;
                                                         local_48.z = 0.0;
                                                         UVar24 = 
                                                       UnityEngine_Quaternion__Internal_FromEulerRad
                                                                 ((UnityEngine_Vector3_o *)&local_48,
                                                                  (MethodInfo *)0x0);
                                                       if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                                                         UnityEngine_Transform__set_localRotation
                                                                   (pUVar20,UVar24,(MethodInfo *)0x0);
                                                         if (*ppUVar1 != (UnityEngine_ParticleSystem_o *)0x0)
                                                         {
                                                           pUVar20 = UnityEngine_Component__get_transform
                                                                               ((UnityEngine_Component_o *)
                                                                                *ppUVar1,(MethodInfo *)0x0);
                                                           if (Il2CppMethodInitialized_0753e4b7 == '\0') {
                                                             il2cpp_codegen_initialize_runtime_metadata
                                                                       (&TypeInfo_UnityEngine_Vector3);
                                                             Il2CppMethodInitialized_0753e4b7 = '\x01';
                                                           }
                                                           if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                                                             pUVar18 = TypeInfo_UnityEngine_Vector3->
                                                                       static_fields;
                                                             value_04.fields.z =
                                                                  (pUVar18->oneVector).fields.z * 0.05;
                                                             uVar6 = (pUVar18->oneVector).fields.x;
                                                             uVar14 = (pUVar18->oneVector).fields.y;
                                                             value_04.fields.x = (float)uVar6 * 0.05;
                                                             value_04.fields.y = (float)uVar14 * 0.05;
                                                             pMVar21 = (MethodInfo *)0x0;
                                                             UnityEngine_Transform__set_localScale
                                                                       (pUVar20,value_04,(MethodInfo *)0x0);
                                                             pUVar22 = 
                                                       Characters_BasicTitanComponentCache__InstantiateParticle
                                                                 ("WardedWeakSpotParticle",pMVar21);
                                                       ppUVar1 = &(__this->fields).WardedWeakSpotLegL;
                                                       (__this->fields).WardedWeakSpotLegL = pUVar22;
                                                       Il2CppCodeGenWriteBarrier(ppUVar1);
                                                       pUVar22 = (__this->fields).WardedWeakSpotLegL;
                                                       if (pUVar22 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                         pUVar20 = UnityEngine_Component__get_transform
                                                                             ((UnityEngine_Component_o *)
                                                                              pUVar22,(MethodInfo *)0x0);
                                                         pUVar19 = (UnityEngine_Component_o *)
                                                                   (__this->fields).LegLHurtbox;
                                                         if (pUVar19 != (UnityEngine_Component_o *)0x0) {
                                                           pUVar23 = UnityEngine_Component__get_transform
                                                                               (pUVar19,(MethodInfo *)0x0);
                                                           if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                                                             UnityEngine_Transform__SetParent
                                                                       (pUVar20,pUVar23,(MethodInfo *)0x0);
                                                             if (*ppUVar1 !=
                                                                 (UnityEngine_ParticleSystem_o *)0x0) {
                                                               pUVar20 = UnityEngine_Component__get_transform
                                                                                   ((UnityEngine_Component_o *
                                                                                    )*ppUVar1,
                                                                                    (MethodInfo *)0x0);
                                                               if (Il2CppMethodInitialized_0753e4b6 == '\0') {
                                                                 il2cpp_codegen_initialize_runtime_metadata
                                                                           (&TypeInfo_UnityEngine_Vector3);
                                                                 Il2CppMethodInitialized_0753e4b6 = '\x01';
                                                               }
                                                               if (pUVar20 != (UnityEngine_Transform_o *)0x0)
                                                               {
                                                                 UnityEngine_Transform__set_localPosition
                                                                           (pUVar20,(UnityEngine_Vector3_o)
                                                                                    (
                                                       TypeInfo_UnityEngine_Vector3->static_fields->zeroVector
                                                       ).fields,(MethodInfo *)0x0);
                                                       if (*ppUVar1 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                         pUVar20 = UnityEngine_Component__get_transform
                                                                             ((UnityEngine_Component_o *)
                                                                              *ppUVar1,(MethodInfo *)0x0);
                                                         local_48.x = -1.5707964;
                                                         local_48.y = 0.0;
                                                         local_48.z = 0.0;
                                                         UVar24 = 
                                                       UnityEngine_Quaternion__Internal_FromEulerRad
                                                                 ((UnityEngine_Vector3_o *)&local_48,
                                                                  (MethodInfo *)0x0);
                                                       if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                                                         UnityEngine_Transform__set_localRotation
                                                                   (pUVar20,UVar24,(MethodInfo *)0x0);
                                                         if (*ppUVar1 != (UnityEngine_ParticleSystem_o *)0x0)
                                                         {
                                                           pUVar20 = UnityEngine_Component__get_transform
                                                                               ((UnityEngine_Component_o *)
                                                                                *ppUVar1,(MethodInfo *)0x0);
                                                           if (Il2CppMethodInitialized_0753e4b7 == '\0') {
                                                             il2cpp_codegen_initialize_runtime_metadata
                                                                       (&TypeInfo_UnityEngine_Vector3);
                                                             Il2CppMethodInitialized_0753e4b7 = '\x01';
                                                           }
                                                           if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                                                             pUVar18 = TypeInfo_UnityEngine_Vector3->
                                                                       static_fields;
                                                             value_05.fields.z =
                                                                  (pUVar18->oneVector).fields.z * 0.05;
                                                             uVar7 = (pUVar18->oneVector).fields.x;
                                                             uVar15 = (pUVar18->oneVector).fields.y;
                                                             value_05.fields.x = (float)uVar7 * 0.05;
                                                             value_05.fields.y = (float)uVar15 * 0.05;
                                                             pMVar21 = (MethodInfo *)0x0;
                                                             UnityEngine_Transform__set_localScale
                                                                       (pUVar20,value_05,(MethodInfo *)0x0);
                                                             pUVar22 = 
                                                       Characters_BasicTitanComponentCache__InstantiateParticle
                                                                 ("WardedWeakSpotParticle",pMVar21);
                                                       ppUVar1 = &(__this->fields).WardedWeakSpotLegR;
                                                       (__this->fields).WardedWeakSpotLegR = pUVar22;
                                                       Il2CppCodeGenWriteBarrier(ppUVar1);
                                                       pUVar22 = (__this->fields).WardedWeakSpotLegR;
                                                       if (pUVar22 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                         pUVar20 = UnityEngine_Component__get_transform
                                                                             ((UnityEngine_Component_o *)
                                                                              pUVar22,(MethodInfo *)0x0);
                                                         pUVar19 = (UnityEngine_Component_o *)
                                                                   (__this->fields).LegRHurtbox;
                                                         if (pUVar19 != (UnityEngine_Component_o *)0x0) {
                                                           pUVar23 = UnityEngine_Component__get_transform
                                                                               (pUVar19,(MethodInfo *)0x0);
                                                           if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                                                             UnityEngine_Transform__SetParent
                                                                       (pUVar20,pUVar23,(MethodInfo *)0x0);
                                                             if (*ppUVar1 !=
                                                                 (UnityEngine_ParticleSystem_o *)0x0) {
                                                               pUVar20 = UnityEngine_Component__get_transform
                                                                                   ((UnityEngine_Component_o *
                                                                                    )*ppUVar1,
                                                                                    (MethodInfo *)0x0);
                                                               if (Il2CppMethodInitialized_0753e4b6 == '\0') {
                                                                 il2cpp_codegen_initialize_runtime_metadata
                                                                           (&TypeInfo_UnityEngine_Vector3);
                                                                 Il2CppMethodInitialized_0753e4b6 = '\x01';
                                                               }
                                                               if (pUVar20 != (UnityEngine_Transform_o *)0x0)
                                                               {
                                                                 UnityEngine_Transform__set_localPosition
                                                                           (pUVar20,(UnityEngine_Vector3_o)
                                                                                    (
                                                       TypeInfo_UnityEngine_Vector3->static_fields->zeroVector
                                                       ).fields,(MethodInfo *)0x0);
                                                       if (*ppUVar1 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                         pUVar20 = UnityEngine_Component__get_transform
                                                                             ((UnityEngine_Component_o *)
                                                                              *ppUVar1,(MethodInfo *)0x0);
                                                         local_48.x = -1.5707964;
                                                         local_48.y = 0.0;
                                                         local_48.z = 0.0;
                                                         UVar24 = 
                                                       UnityEngine_Quaternion__Internal_FromEulerRad
                                                                 ((UnityEngine_Vector3_o *)&local_48,
                                                                  (MethodInfo *)0x0);
                                                       if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                                                         UnityEngine_Transform__set_localRotation
                                                                   (pUVar20,UVar24,(MethodInfo *)0x0);
                                                         if (*ppUVar1 != (UnityEngine_ParticleSystem_o *)0x0)
                                                         {
                                                           pUVar20 = UnityEngine_Component__get_transform
                                                                               ((UnityEngine_Component_o *)
                                                                                *ppUVar1,(MethodInfo *)0x0);
                                                           if (Il2CppMethodInitialized_0753e4b7 == '\0') {
                                                             il2cpp_codegen_initialize_runtime_metadata
                                                                       (&TypeInfo_UnityEngine_Vector3);
                                                             Il2CppMethodInitialized_0753e4b7 = '\x01';
                                                           }
                                                           if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                                                             pUVar18 = TypeInfo_UnityEngine_Vector3->
                                                                       static_fields;
                                                             value_06.fields.z =
                                                                  (pUVar18->oneVector).fields.z * 0.05;
                                                             uVar8 = (pUVar18->oneVector).fields.x;
                                                             uVar16 = (pUVar18->oneVector).fields.y;
                                                             value_06.fields.x = (float)uVar8 * 0.05;
                                                             value_06.fields.y = (float)uVar16 * 0.05;
                                                             pMVar21 = (MethodInfo *)0x0;
                                                             UnityEngine_Transform__set_localScale
                                                                       (pUVar20,value_06,(MethodInfo *)0x0);
                                                             pUVar22 = 
                                                       Characters_BasicTitanComponentCache__InstantiateParticle
                                                                 ("DecapitationParticle",pMVar21);
                                                       ppUVar1 = &(__this->fields).DecapitationBlood;
                                                       (__this->fields).DecapitationBlood = pUVar22;
                                                       Il2CppCodeGenWriteBarrier(ppUVar1);
                                                       pUVar22 = (__this->fields).DecapitationBlood;
                                                       if (pUVar22 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                         pUVar20 = UnityEngine_Component__get_transform
                                                                             ((UnityEngine_Component_o *)
                                                                              pUVar22,(MethodInfo *)0x0);
                                                         if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                                                           UnityEngine_Transform__SetParent
                                                                     (pUVar20,(__this->fields).Neck,
                                                                      (MethodInfo *)0x0);
                                                           pUVar22 = (__this->fields).DecapitationBlood;
                                                           if (pUVar22 != (UnityEngine_ParticleSystem_o *)0x0)
                                                           {
                                                             pUVar20 = UnityEngine_Component__get_transform
                                                                                 ((UnityEngine_Component_o *)
                                                                                  pUVar22,(MethodInfo *)0x0);
                                                             if (Il2CppMethodInitialized_0753e4b6 == '\0') {
                                                               il2cpp_codegen_initialize_runtime_metadata
                                                                         (&TypeInfo_UnityEngine_Vector3);
                                                               Il2CppMethodInitialized_0753e4b6 = '\x01';
                                                             }
                                                             if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                                                               UnityEngine_Transform__set_localPosition
                                                                         (pUVar20,(UnityEngine_Vector3_o)
                                                                                  (
                                                       TypeInfo_UnityEngine_Vector3->static_fields->zeroVector
                                                       ).fields,(MethodInfo *)0x0);
                                                       if (*ppUVar1 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                         pUVar20 = UnityEngine_Component__get_transform
                                                                             ((UnityEngine_Component_o *)
                                                                              *ppUVar1,(MethodInfo *)0x0);
                                                         local_48.x = -1.5707964;
                                                         local_48.y = 0.0;
                                                         local_48.z = 0.0;
                                                         UVar24 = 
                                                       UnityEngine_Quaternion__Internal_FromEulerRad
                                                                 ((UnityEngine_Vector3_o *)&local_48,
                                                                  (MethodInfo *)0x0);
                                                       if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                                                         UnityEngine_Transform__set_localRotation
                                                                   (pUVar20,UVar24,(MethodInfo *)0x0);
                                                         if (*ppUVar1 != (UnityEngine_ParticleSystem_o *)0x0)
                                                         {
                                                           pUVar20 = UnityEngine_Component__get_transform
                                                                               ((UnityEngine_Component_o *)
                                                                                *ppUVar1,(MethodInfo *)0x0);
                                                           if (Il2CppMethodInitialized_0753e4b7 == '\0') {
                                                             il2cpp_codegen_initialize_runtime_metadata
                                                                       (&TypeInfo_UnityEngine_Vector3);
                                                             Il2CppMethodInitialized_0753e4b7 = '\x01';
                                                           }
                                                           if (pUVar20 != (UnityEngine_Transform_o *)0x0) {
                                                             pUVar18 = TypeInfo_UnityEngine_Vector3->
                                                                       static_fields;
                                                             value_07.fields.z =
                                                                  (pUVar18->oneVector).fields.z * 0.01;
                                                             uVar9 = (pUVar18->oneVector).fields.x;
                                                             uVar17 = (pUVar18->oneVector).fields.y;
                                                             value_07.fields.x = (float)uVar9 * 0.01;
                                                             value_07.fields.y = (float)uVar17 * 0.01;
                                                             UnityEngine_Transform__set_localScale
                                                                       (pUVar20,value_07,(MethodInfo *)0x0);
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


// Characters.BasicTitanComponentCache$$LoadParticle
// il2cpp: UnityEngine_GameObject_o* Characters_BasicTitanComponentCache__LoadParticle (System_String_o* name, const MethodInfo* method);
// 0x5c40f80

UnityEngine_GameObject_o *
Characters_BasicTitanComponentCache__LoadParticle(System_String_o *name,MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_Object_o *pUVar1;
  
  if (Il2CppMethodInitialized_0754780e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    Il2CppMethodInitialized_0754780e = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->TitanParticles;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar1 = ApplicationManagers_ResourceManager__LoadAsset(path,name,false,true,(MethodInfo *)0x0);
  if ((pUVar1 != (UnityEngine_Object_o *)0x0) &&
     (pUVar1->klass != (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject)) {
    il2cpp_codegen_raise_invalid_cast_exception(pUVar1);
  }
  return (UnityEngine_GameObject_o *)pUVar1;
}


// Characters.BasicTitanComponentCache$$LoadWoundMaterial
// il2cpp: UnityEngine_Material_o* Characters_BasicTitanComponentCache__LoadWoundMaterial (const MethodInfo* method);
// 0x5c41040

UnityEngine_Material_o * Characters_BasicTitanComponentCache__LoadWoundMaterial(MethodInfo *method)

{
  byte bVar1;
  System_String_o *path;
  UnityEngine_Material_o *pUVar2;
  
  if (Il2CppMethodInitialized_0754780f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Titans/Bodies/Materials/TitanWound");
    Il2CppMethodInitialized_0754780f = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar2 = (UnityEngine_Material_o *)
           ApplicationManagers_ResourceManager__LoadAsset
                     (path,"Titans/Bodies/Materials/TitanWound",false,true,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Material_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_Material->_2).typeHierarchyDepth;
    if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_Material))
    {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
    }
  }
  return pUVar2;
}


// Characters.BasicTitanComponentCache$$LoadShader
// il2cpp: UnityEngine_Shader_o* Characters_BasicTitanComponentCache__LoadShader (System_String_o* name, const MethodInfo* method);
// 0x5c41120

UnityEngine_Shader_o *
Characters_BasicTitanComponentCache__LoadShader(System_String_o *name,MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_Object_o *pUVar1;
  
  if (Il2CppMethodInitialized_07547810 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Shader);
    Il2CppMethodInitialized_07547810 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->Shaders;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar1 = ApplicationManagers_ResourceManager__LoadAsset(path,name,false,true,(MethodInfo *)0x0);
  if ((pUVar1 != (UnityEngine_Object_o *)0x0) &&
     (pUVar1->klass != (UnityEngine_Object_c *)TypeInfo_UnityEngine_Shader)) {
    il2cpp_codegen_raise_invalid_cast_exception(pUVar1);
  }
  return (UnityEngine_Shader_o *)pUVar1;
}


// Characters.BasicTitanComponentCache$$LoadDissolveShader
// il2cpp: UnityEngine_Shader_o* Characters_BasicTitanComponentCache__LoadDissolveShader (const MethodInfo* method);
// 0x5c411e0

UnityEngine_Shader_o * Characters_BasicTitanComponentCache__LoadDissolveShader(MethodInfo *method)

{
  Characters_BasicTitanComponentCache_StaticFields *pCVar1;
  bool bVar2;
  UnityEngine_Texture3D_o *pUVar3;
  UnityEngine_Shader_o *pUVar4;
  MethodInfo *method_00;
  Characters_BasicTitanComponentCache_c *method_01;
  
  if (Il2CppMethodInitialized_07547811 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanComponentCache);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"TitanDissolve");
    Il2CppMethodInitialized_07547811 = '\x01';
  }
  if ((TypeInfo_Characters_BasicTitanComponentCache->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanComponentCache);
  }
  pUVar3 = TypeInfo_Characters_BasicTitanComponentCache->static_fields->_dissolveNoise;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    method_01 = TypeInfo_Characters_BasicTitanComponentCache;
    if ((TypeInfo_Characters_BasicTitanComponentCache->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanComponentCache);
    }
    pUVar3 = Characters_BasicTitanComponentCache__CreateDissolveNoise((MethodInfo *)method_01);
    pCVar1 = TypeInfo_Characters_BasicTitanComponentCache->static_fields;
    pCVar1->_dissolveNoise = pUVar3;
    Il2CppCodeGenWriteBarrier(&pCVar1->_dissolveNoise);
    method_00 = (MethodInfo *)TypeInfo_Characters_BasicTitanComponentCache->static_fields->_dissolveNoise;
    UnityEngine_Shader__SetGlobalTexture
              (TypeInfo_Characters_BasicTitanComponentCache->static_fields->DissolveNoiseProperty,
               (UnityEngine_Texture_o *)method_00,(MethodInfo *)0x0);
  }
  if ((TypeInfo_Characters_BasicTitanComponentCache->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanComponentCache);
  }
  pUVar4 = Characters_BasicTitanComponentCache__LoadShader("TitanDissolve",method_00);
  return pUVar4;
}


// Characters.BasicTitanComponentCache$$CreateDissolveNoise
// il2cpp: UnityEngine_Texture3D_o* Characters_BasicTitanComponentCache__CreateDissolveNoise (const MethodInfo* method);
// 0x5c412e0

UnityEngine_Texture3D_o * Characters_BasicTitanComponentCache__CreateDissolveNoise(MethodInfo *method)

{
  System_Random_o *__this;
  System_Byte_array *data;
  UnityEngine_Texture_o *__this_00;
  
  if (Il2CppMethodInitialized_07547812 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Random);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Texture3D_SetPixelData_byte);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture3D);
    Il2CppMethodInitialized_07547812 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Random);
  System_Random___ctor_54cebf0(__this,1,(MethodInfo *)0x0);
  data = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,0x8000);
  if (__this != (System_Random_o *)0x0) {
    (*(__this->klass->vtable)._9_NextBytes.methodPtr)(__this,data,(__this->klass->vtable)._9_NextBytes.method)
    ;
    __this_00 = (UnityEngine_Texture_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture3D);
    UnityEngine_Texture3D___ctor_68f2570
              ((UnityEngine_Texture3D_o *)__this_00,0x20,0x20,0x20,0x3f,false,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Texture_o *)0x0) {
      UnityEngine_Texture__set_wrapMode(__this_00,0,(MethodInfo *)0x0);
      UnityEngine_Texture__set_filterMode(__this_00,1,(MethodInfo *)0x0);
      UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)__this_00,0x20,(MethodInfo *)0x0);
      UnityEngine_Texture3D__SetPixelData_byte_
                ((UnityEngine_Texture3D_o *)__this_00,data,0,0,
                 (MethodInfo_36A57B0 *)MethodInfo_UnityEngine_Texture3D_SetPixelData_byte);
      UnityEngine_Texture3D__Apply((UnityEngine_Texture3D_o *)__this_00,false,true,(MethodInfo *)0x0);
      return (UnityEngine_Texture3D_o *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitanComponentCache$$PrewarmAssets
// il2cpp: void Characters_BasicTitanComponentCache__PrewarmAssets (bool gore, const MethodInfo* method);
// 0x5c41420
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c414bb: mov rdi, qword ptr [r15]

void Characters_BasicTitanComponentCache__PrewarmAssets(bool gore,MethodInfo *method)

{
  uint32_t uVar1;
  uint uVar2;
  System_String_array *pSVar3;
  System_String_o *name;
  ulong uVar4;
  ulong uVar5;
  Il2CppClass *klass;
  Characters_BasicTitanComponentCache_c *method_00;
  
  if (Il2CppMethodInitialized_07547813 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanComponentCache);
    Il2CppMethodInitialized_07547813 = '\x01';
    uVar1 = (TypeInfo_Characters_BasicTitanComponentCache->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_BasicTitanComponentCache->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanComponentCache);
    pSVar3 = TypeInfo_Characters_BasicTitanComponentCache->static_fields->Particles;
  }
  else {
    pSVar3 = *(System_String_array **)
              ((Il2CppClass *)TypeInfo_Characters_BasicTitanComponentCache)->static_fields;
  }
  if (pSVar3 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (0 < (int)pSVar3->max_length) {
    uVar4 = pSVar3->max_length & 0xffffffff;
    uVar5 = 0;
    do {
      if (uVar4 <= uVar5) {
        ThrowIndexOutOfRangeException();
      }
      name = pSVar3->m_Items[uVar5];
      if ((TypeInfo_Characters_BasicTitanComponentCache->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanComponentCache);
      }
      Characters_BasicTitanComponentCache__LoadParticle(name,method);
      uVar5 = uVar5 + 1;
      uVar2 = (uint)pSVar3->max_length;
      uVar4 = (ulong)uVar2;
    } while ((long)uVar5 < (long)(int)uVar2);
  }
  if ((TypeInfo_Characters_BasicTitanComponentCache->_2).cctor_finished_or_no_cctor == 0) {
    method_00 = TypeInfo_Characters_BasicTitanComponentCache;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanComponentCache);
    Characters_BasicTitanComponentCache__LoadWoundMaterial((MethodInfo *)method_00);
    klass = (Il2CppClass *)TypeInfo_Characters_BasicTitanComponentCache;
  }
  else {
    Characters_BasicTitanComponentCache__LoadWoundMaterial
              ((MethodInfo *)TypeInfo_Characters_BasicTitanComponentCache);
    klass = (Il2CppClass *)TypeInfo_Characters_BasicTitanComponentCache;
  }
  if (gore) {
    TypeInfo_Characters_BasicTitanComponentCache = (Characters_BasicTitanComponentCache_c *)klass;
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
    }
    Characters_BasicTitanComponentCache__PrewarmGore((MethodInfo *)klass);
    return;
  }
  TypeInfo_Characters_BasicTitanComponentCache = (Characters_BasicTitanComponentCache_c *)klass;
  return;
}


// Characters.BasicTitanComponentCache$$PrewarmGore
// il2cpp: void Characters_BasicTitanComponentCache__PrewarmGore (const MethodInfo* method);
// 0x5c41560

void Characters_BasicTitanComponentCache__PrewarmGore(MethodInfo *method)

{
  uint uVar1;
  uint32_t uVar2;
  System_String_array *pSVar3;
  System_String_o *pSVar4;
  bool bVar5;
  undefined8 in_RAX;
  ulong uVar6;
  System_String_o *str1;
  System_String_o *pSVar7;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_SkinnedMeshRenderer_o *renderer;
  MethodInfo *method_00;
  Characters_TitanLimbMesh_CachedBody_o *__this;
  System_String_o **method_01;
  int iVar10;
  ulong uVar11;
  MethodInfo *in_RSI;
  Characters_BasicTitanComponentCache_c *method_02;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_07547814 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanComponentCache);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterPrefabs);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh);
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.R/upper_arm.R/forearm.R");
    il2cpp_codegen_initialize_runtime_metadata(&"NapeChunkParticle");
    il2cpp_codegen_initialize_runtime_metadata(&"hand.L");
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.L/upper_arm.L/forearm.L");
    il2cpp_codegen_initialize_runtime_metadata(&"Body");
    il2cpp_codegen_initialize_runtime_metadata(&"hand.R");
    Il2CppMethodInitialized_07547814 = '\x01';
  }
  method_02 = TypeInfo_Characters_BasicTitanComponentCache;
  if ((TypeInfo_Characters_BasicTitanComponentCache->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanComponentCache);
  }
  Characters_BasicTitanComponentCache__LoadDissolveShader((MethodInfo *)method_02);
  Characters_BasicTitanComponentCache__LoadParticle("NapeChunkParticle",in_RSI);
  pSVar3 = TypeInfo_Characters_BasicTitanComponentCache->static_fields->GoreShaders;
  if (pSVar3 == (System_String_array *)0x0) {
label_05c41948:
    ThrowNullReferenceException();
  }
  if (0 < (int)pSVar3->max_length) {
    uVar6 = pSVar3->max_length & 0xffffffff;
    uVar11 = 0;
    do {
      if (uVar6 <= uVar11) {
        ThrowIndexOutOfRangeException();
      }
      pSVar4 = pSVar3->m_Items[uVar11];
      if ((TypeInfo_Characters_BasicTitanComponentCache->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanComponentCache);
      }
      Characters_BasicTitanComponentCache__LoadShader(pSVar4,in_RSI);
      uVar11 = uVar11 + 1;
      uVar1 = (uint)pSVar3->max_length;
      uVar6 = (ulong)uVar1;
    } while ((long)uVar11 < (long)(int)uVar1);
  }
  iVar10 = 0;
  do {
    uStack_38 = CONCAT44(iVar10,(undefined4)uStack_38);
    if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
    }
    if (TypeInfo_Characters_BasicTitanSetup->static_fields->BodyCount <= iVar10) {
      return;
    }
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar4 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    if ((TypeInfo_Characters_CharacterPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterPrefabs);
    }
    pSVar7 = TypeInfo_Characters_CharacterPrefabs->static_fields->BasicTitanPrefix;
    str1 = System_Int32__ToString((int32_t *)((long)&uStack_38 + 4),(MethodInfo *)0x0);
    pSVar7 = System_String__Concat_52f0320(pSVar7,str1,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    x = ApplicationManagers_ResourceManager__LoadAsset(pSVar4,pSVar7,false,false,(MethodInfo *)0x0);
    if ((x != (UnityEngine_Object_o *)0x0) &&
       (x->klass != (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject)) {
      il2cpp_codegen_raise_invalid_cast_exception(x);
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar5) {
      if (((x == (UnityEngine_Object_o *)0x0) ||
          (pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0),
          pUVar8 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar9 = UnityEngine_Transform__Find(pUVar8,"Body",(MethodInfo *)0x0),
         pUVar9 == (UnityEngine_Transform_o *)0x0)) goto label_05c41948;
      renderer = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar9,
                            (MethodInfo_34B0830 *)
                            MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer);
      pUVar9 = UnityEngine_Transform__Find(pUVar8,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.L/upper_arm.L/forearm.L",(MethodInfo *)0x0);
      if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_05c41948;
      method_00 = (MethodInfo *)UnityEngine_Transform__Find(pUVar9,"hand.L",(MethodInfo *)0x0);
      pUVar8 = UnityEngine_Transform__Find(pUVar8,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.R/upper_arm.R/forearm.R",(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_05c41948;
      method_01 = &"hand.R";
      pUVar8 = UnityEngine_Transform__Find(pUVar8,"hand.R",(MethodInfo *)0x0);
      if ((TypeInfo_Characters_TitanLimbMesh->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh);
        if (g_data_07547862 != '\0') goto label_05c418c1;
label_05c4190c:
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh);
        g_data_07547862 = '\x01';
        uVar2 = (TypeInfo_Characters_TitanLimbMesh->_2).cctor_finished_or_no_cctor;
      }
      else {
        if (g_data_07547862 == '\0') goto label_05c4190c;
label_05c418c1:
        uVar2 = (TypeInfo_Characters_TitanLimbMesh->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh);
      }
      __this = Characters_TitanLimbMesh__GetBody
                         (renderer,(UnityEngine_Transform_o *)method_00,pUVar8,(MethodInfo *)method_01);
      if (__this == (Characters_TitanLimbMesh_CachedBody_o *)0x0) goto label_05c41948;
      Characters_TitanLimbMesh_CachedBody__Prewarm(__this,method_00);
    }
    iVar10 = uStack_38._4_4_ + 1;
  } while( true );
}


// Characters.BasicTitanComponentCache$$InstantiateParticle
// il2cpp: UnityEngine_ParticleSystem_o* Characters_BasicTitanComponentCache__InstantiateParticle (System_String_o* name, const MethodInfo* method);
// 0x5c40ed0

UnityEngine_ParticleSystem_o *
Characters_BasicTitanComponentCache__InstantiateParticle(System_String_o *name,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_ParticleSystem_o *pUVar2;
  
  if (Il2CppMethodInitialized_07547815 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanComponentCache);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_Instantiate_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547815 = '\x01';
  }
  if ((TypeInfo_Characters_BasicTitanComponentCache->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanComponentCache);
  }
  pUVar1 = Characters_BasicTitanComponentCache__LoadParticle(name,method);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar1 = UnityEngine_Object__Instantiate_object__35a4190
                     ((Il2CppObject *)pUVar1,
                      (MethodInfo_35A4190 *)MethodInfo_UnityEngine_Object_Instantiate_GameObject);
  if (pUVar1 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar2 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar1,(MethodInfo_353B730 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem);
  return pUVar2;
}


// Characters.BasicTitanComponentCache$$.cctor
// il2cpp: void Characters_BasicTitanComponentCache___cctor (const MethodInfo* method);
// 0x5c419d0

void Characters_BasicTitanComponentCache___cctor(MethodInfo *method)

{
  Characters_BasicTitanComponentCache_StaticFields *pCVar1;
  int32_t iVar2;
  System_String_array *pSVar3;
  
  if (Il2CppMethodInitialized_07547816 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanComponentCache);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"ArmBloodParticle");
    il2cpp_codegen_initialize_runtime_metadata(&"NapeBloodParticle");
    il2cpp_codegen_initialize_runtime_metadata(&"WardedWeakSpotParticle");
    il2cpp_codegen_initialize_runtime_metadata(&"Haircut");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanRegrowth");
    il2cpp_codegen_initialize_runtime_metadata(&"_DissolveNoise");
    il2cpp_codegen_initialize_runtime_metadata(&"ArmSmokeParticle");
    il2cpp_codegen_initialize_runtime_metadata(&"DecapitationParticle");
    Il2CppMethodInitialized_07547816 = '\x01';
  }
  pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  if (pSVar3 == (System_String_array *)0x0) {
label_05c41bed:
    ThrowNullReferenceException();
  }
  if ((int)pSVar3->max_length != 0) {
    pSVar3->m_Items[0] = "ArmBloodParticle";
    Il2CppCodeGenWriteBarrier(pSVar3->m_Items);
    if ((pSVar3->max_length & 0xfffffffe) != 0) {
      pSVar3->m_Items[1] = "ArmSmokeParticle";
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1);
      if (2 < (uint)pSVar3->max_length) {
        pSVar3->m_Items[2] = "NapeBloodParticle";
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 2);
        if ((pSVar3->max_length & 0xfffffffc) != 0) {
          pSVar3->m_Items[3] = "WardedWeakSpotParticle";
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 3);
          if (4 < (uint)pSVar3->max_length) {
            pSVar3->m_Items[4] = "DecapitationParticle";
            Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 4);
            TypeInfo_Characters_BasicTitanComponentCache->static_fields->Particles = pSVar3;
            Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_BasicTitanComponentCache->static_fields->Particles)
            ;
            pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
            if (pSVar3 == (System_String_array *)0x0) goto label_05c41bed;
            if ((int)pSVar3->max_length != 0) {
              pSVar3->m_Items[0] = "TitanRegrowth";
              Il2CppCodeGenWriteBarrier(pSVar3->m_Items);
              if ((pSVar3->max_length & 0xfffffffe) != 0) {
                pSVar3->m_Items[1] = "Haircut";
                Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1);
                pCVar1 = TypeInfo_Characters_BasicTitanComponentCache->static_fields;
                pCVar1->GoreShaders = pSVar3;
                Il2CppCodeGenWriteBarrier(&pCVar1->GoreShaders);
                iVar2 = UnityEngine_Shader__PropertyToID("_DissolveNoise",(MethodInfo *)0x0);
                TypeInfo_Characters_BasicTitanComponentCache->static_fields->DissolveNoiseProperty = iVar2;
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


