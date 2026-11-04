// Type: Characters.BasicTitanComponentCache
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/BasicTitanComponentCache.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BasicTitanComponentCache.cs
// --------------------------------

// Characters.BasicTitanComponentCache$$.ctor
// il2cpp: void Characters_BasicTitanComponentCache___ctor (Characters_BasicTitanComponentCache_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x18219d990

void Characters_BasicTitanComponentCache___ctor
               (Characters_BasicTitanComponentCache_o *__this,UnityEngine_GameObject_o *owner,
               MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Component_o *__this_00;
  UnityEngine_SphereCollider_o *pUVar2;
  bool bVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_CapsuleCollider_o *value;
  Characters_BaseCharacter_o *owner_00;
  System_Object_array *pSVar5;
  UnityEngine_Object_o *__this_01;
  System_String_o *a;
  UnityEngine_GameObject_o *pUVar6;
  Characters_BaseHitbox_o *pCVar7;
  uint uVar8;
  float fVar9;
  
  if (Il2CppMethodInitialized_184346e33 == '\0') {
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
    Il2CppMethodInitialized_184346e33 = '\x01';
  }
  Characters_BaseTitanComponentCache___ctor
            ((Characters_BaseTitanComponentCache_o *)__this,owner,(MethodInfo *)0x0);
  pUVar4 = (__this->fields).Transform;
  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
    pUVar4 = UnityEngine_Transform__Find(pUVar4,"Amarture_VER2/Core",(MethodInfo *)0x0);
    (__this->fields).Core = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Core,pUVar4);
    pUVar4 = (__this->fields).Transform;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = UnityEngine_Transform__Find(pUVar4,"Amarture_VER2/Core/Controller.Body",(MethodInfo *)0x0);
      (__this->fields).Body = pUVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Body,pUVar4);
      pUVar4 = (__this->fields).Transform;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        pUVar4 = UnityEngine_Transform__Find(pUVar4,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck",(MethodInfo *)0x0);
        (__this->fields).Neck = pUVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields).Neck,pUVar4);
        pUVar4 = (__this->fields).Transform;
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          pUVar4 = UnityEngine_Transform__Find(pUVar4,"Amarture_VER2/Core/Controller.Body/hip",(MethodInfo *)0x0);
          (__this->fields).Hip = pUVar4;
          Il2CppCodeGenWriteBarrier(&(__this->fields).Hip,pUVar4);
          pUVar4 = (__this->fields).Neck;
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            pUVar4 = UnityEngine_Transform__Find(pUVar4,"head",(MethodInfo *)0x0);
            (__this->fields).Head = pUVar4;
            Il2CppCodeGenWriteBarrier(&(__this->fields).Head,pUVar4);
            pUVar4 = (__this->fields).Head;
            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
              pUVar4 = UnityEngine_Transform__Find(pUVar4,"HairSocket",(MethodInfo *)0x0);
              (__this->fields).HairSocket = pUVar4;
              Il2CppCodeGenWriteBarrier(&(__this->fields).HairSocket,pUVar4);
              pUVar4 = (__this->fields).Head;
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                value = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar4,
                                   (MethodInfo_6651A0 *)
                                   MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider);
                (__this->fields).HeadCollider = value;
                Il2CppCodeGenWriteBarrier(&(__this->fields).HeadCollider,value);
                pUVar4 = (__this->fields).Transform;
                if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                  pUVar4 = UnityEngine_Transform__Find(pUVar4,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.L/upper_arm.L/forearm.L/hand.L/GrabLSocket",(MethodInfo *)0x0);
                  (__this->fields).GrabLSocket = pUVar4;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).GrabLSocket,pUVar4);
                  pUVar4 = (__this->fields).Transform;
                  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                    pUVar4 = UnityEngine_Transform__Find(pUVar4,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.R/upper_arm.R/forearm.R/hand.R/GrabRSocket",(MethodInfo *)0x0);
                    (__this->fields).GrabRSocket = pUVar4;
                    Il2CppCodeGenWriteBarrier(&(__this->fields).GrabRSocket,pUVar4);
                    if (owner != (UnityEngine_GameObject_o *)0x0) {
                      owner_00 = UnityEngine_GameObject__GetComponent_object_
                                           (owner,(MethodInfo_6F5650 *)
                                                  MethodInfo_UnityEngine_GameObject_GetComponent_BaseCharacter
                                           );
                      pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                                         (owner,(MethodInfo_6F5810 *)
                                                MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider
                                         );
                      if (pSVar5 != (System_Object_array *)0x0) {
                        uVar8 = 0;
                        while( true ) {
                          if ((int)pSVar5->max_length <= (int)uVar8) {
                            pUVar2 = (UnityEngine_SphereCollider_o *)(__this->fields).HandLHurtbox;
                            if (pUVar2 != (UnityEngine_SphereCollider_o *)0x0) {
                              bVar1 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
                              if ((bVar1 <= (pUVar2->klass->_2).typeHierarchyDepth) &&
                                 ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                                  (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider)) {
                                fVar9 = UnityEngine_SphereCollider__get_radius(pUVar2,(MethodInfo *)0x0);
                                (__this->fields).HandLHurtboxRadius = fVar9;
                              }
                            }
                            pUVar2 = (UnityEngine_SphereCollider_o *)(__this->fields).HandRHurtbox;
                            if (pUVar2 != (UnityEngine_SphereCollider_o *)0x0) {
                              bVar1 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
                              if ((bVar1 <= (pUVar2->klass->_2).typeHierarchyDepth) &&
                                 ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                                  (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider)) {
                                fVar9 = UnityEngine_SphereCollider__get_radius(pUVar2,(MethodInfo *)0x0);
                                (__this->fields).HandRHurtboxRadius = fVar9;
                              }
                            }
                            Characters_BasicTitanComponentCache__SetupParticles(__this,(MethodInfo *)0x0);
                            Utility_BaseComponentCache__LoadAudio
                                      ((Utility_BaseComponentCache_o *)__this,"Titans/Prefabs/TitanSounds",
                                       (__this->fields).Neck,(MethodInfo *)0x0);
                            return;
                          }
                          if ((uint)pSVar5->max_length <= uVar8) {
                            ThrowIndexOutOfRangeException();
                          }
                          __this_00 = (UnityEngine_Component_o *)pSVar5->m_Items[(int)uVar8];
                          if (__this_00 == (UnityEngine_Component_o *)0x0) break;
                          __this_01 = (UnityEngine_Object_o *)
                                      UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
                          if (__this_01 == (UnityEngine_Object_o *)0x0) break;
                          a = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
                          bVar3 = System_String__op_Equality(a,"ForearmLHurtbox",(MethodInfo *)0x0);
                          if (bVar3) {
                            (__this->fields).ForearmLHurtbox = (UnityEngine_Collider_o *)__this_00;
                            Il2CppCodeGenWriteBarrier(&(__this->fields).ForearmLHurtbox,__this_00);
label_18219de28:
                            uVar8 = uVar8 + 1;
                          }
                          else {
                            bVar3 = System_String__op_Equality(a,"ForearmRHurtbox",(MethodInfo *)0x0);
                            if (bVar3) {
                              (__this->fields).ForearmRHurtbox = (UnityEngine_Collider_o *)__this_00;
                              Il2CppCodeGenWriteBarrier(&(__this->fields).ForearmRHurtbox,__this_00);
                              uVar8 = uVar8 + 1;
                            }
                            else {
                              bVar3 = System_String__op_Equality(a,"BodyHitbox",(MethodInfo *)0x0);
                              if (bVar3) {
                                pUVar6 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
                                pCVar7 = Characters_BaseHitbox__Create
                                                   (owner_00,pUVar6,(UnityEngine_Collider_o *)__this_00,
                                                    (MethodInfo *)0x0);
                                (__this->fields).BodyHitbox = pCVar7;
                                Il2CppCodeGenWriteBarrier(&(__this->fields).BodyHitbox,pCVar7);
                                if ((__this->fields).Hitboxes ==
                                    (System_Collections_Generic_List_BaseHitbox__o *)0x0) break;
                                il2cpp_runtime_helper_180012890();
                                uVar8 = uVar8 + 1;
                              }
                              else {
                                bVar3 = System_String__op_Equality(a,"CrawlerHitbox",(MethodInfo *)0x0);
                                if (!bVar3) goto label_18219de28;
                                pUVar6 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
                                pCVar7 = Characters_BaseHitbox__Create
                                                   (owner_00,pUVar6,(UnityEngine_Collider_o *)__this_00,
                                                    (MethodInfo *)0x0);
                                (__this->fields).CrawlerHitbox = pCVar7;
                                Il2CppCodeGenWriteBarrier(&(__this->fields).CrawlerHitbox,pCVar7);
                                if ((__this->fields).Hitboxes ==
                                    (System_Collections_Generic_List_BaseHitbox__o *)0x0) break;
                                il2cpp_runtime_helper_180012890();
                                uVar8 = uVar8 + 1;
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


// Characters.BasicTitanComponentCache$$SetupParticles
// il2cpp: void Characters_BasicTitanComponentCache__SetupParticles (Characters_BasicTitanComponentCache_o* __this, const MethodInfo* method);
// 0x18219c880

void Characters_BasicTitanComponentCache__SetupParticles
               (Characters_BasicTitanComponentCache_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
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
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  System_String_o *path;
  UnityEngine_Vector3_StaticFields *pUVar31;
  UnityEngine_Component_o *pUVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  UnityEngine_Transform_o *pUVar65;
  UnityEngine_GameObject_o *pUVar66;
  UnityEngine_ParticleSystem_o *pUVar67;
  UnityEngine_Quaternion_o *pUVar68;
  UnityEngine_Transform_o *pUVar69;
  UnityEngine_Quaternion_o local_48;
  UnityEngine_Quaternion_o local_38 [3];
  
  if (Il2CppMethodInitialized_184346e34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Titans/Particles/Prefabs/ArmBloodParticle");
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.R/upper_arm.R/forearm.R");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans/Particles/Prefabs/DecapitationParticle");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans/Particles/Prefabs/NapeBloodParticle");
    il2cpp_codegen_initialize_runtime_metadata(&"hand.L");
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.L/upper_arm.L/forearm.L");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans/Particles/Prefabs/WardedWeakSpotParticle");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans/Particles/Prefabs/ArmSmokeParticle");
    il2cpp_codegen_initialize_runtime_metadata(&"hand.R");
    Il2CppMethodInitialized_184346e34 = '\x01';
  }
  pUVar65 = (__this->fields).Transform;
  if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
    pUVar65 = UnityEngine_Transform__Find(pUVar65,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.L/upper_arm.L/forearm.L",(MethodInfo *)0x0);
    (__this->fields).ForearmL = pUVar65;
    Il2CppCodeGenWriteBarrier(&(__this->fields).ForearmL,pUVar65);
    pUVar65 = (__this->fields).Transform;
    if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
      pUVar65 = UnityEngine_Transform__Find(pUVar65,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.R/upper_arm.R/forearm.R",(MethodInfo *)0x0);
      (__this->fields).ForearmR = pUVar65;
      Il2CppCodeGenWriteBarrier(&(__this->fields).ForearmR,pUVar65);
      pUVar65 = (__this->fields).ForearmL;
      if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
        pUVar65 = UnityEngine_Transform__Find(pUVar65,"hand.L",(MethodInfo *)0x0);
        (__this->fields).HandL = pUVar65;
        Il2CppCodeGenWriteBarrier(&(__this->fields).HandL,pUVar65);
        pUVar65 = (__this->fields).ForearmR;
        if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
          pUVar65 = UnityEngine_Transform__Find(pUVar65,"hand.R",(MethodInfo *)0x0);
          (__this->fields).HandR = pUVar65;
          Il2CppCodeGenWriteBarrier(&(__this->fields).HandR,pUVar65);
          if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
          }
          path = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
          if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
          }
          pUVar66 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                              (path,"Titans/Particles/Prefabs/ArmBloodParticle",true,
                               (MethodInfo_795F00 *)
                               MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
          if (pUVar66 != (UnityEngine_GameObject_o *)0x0) {
            pUVar67 = UnityEngine_GameObject__GetComponent_object_
                                (pUVar66,(MethodInfo_6F5650 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem);
            (__this->fields).ForearmBloodL = pUVar67;
            Il2CppCodeGenWriteBarrier(&(__this->fields).ForearmBloodL,pUVar67);
            pUVar66 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                (TypeInfo_Utility_ResourcePaths->static_fields->Characters,
                                 "Titans/Particles/Prefabs/ArmBloodParticle",true,
                                 (MethodInfo_795F00 *)
                                 MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
            if (pUVar66 != (UnityEngine_GameObject_o *)0x0) {
              pUVar67 = UnityEngine_GameObject__GetComponent_object_
                                  (pUVar66,(MethodInfo_6F5650 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem);
              (__this->fields).ForearmBloodR = pUVar67;
              Il2CppCodeGenWriteBarrier(&(__this->fields).ForearmBloodR,pUVar67);
              pUVar67 = (__this->fields).ForearmBloodL;
              if (pUVar67 != (UnityEngine_ParticleSystem_o *)0x0) {
                pUVar65 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pUVar67,(MethodInfo *)0x0);
                if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__SetParent(pUVar65,(__this->fields).ForearmL,(MethodInfo *)0x0);
                  pUVar67 = (__this->fields).ForearmBloodL;
                  if (pUVar67 != (UnityEngine_ParticleSystem_o *)0x0) {
                    pUVar65 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)pUVar67,(MethodInfo *)0x0);
                    if (Il2CppMethodInitialized_18433dbea == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                      Il2CppMethodInitialized_18433dbea = '\x01';
                    }
                    if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                      pUVar31 = TypeInfo_UnityEngine_Vector3->static_fields;
                      uVar1 = (pUVar31->zeroVector).fields.x;
                      uVar16 = (pUVar31->zeroVector).fields.y;
                      local_48.fields.z = (pUVar31->zeroVector).fields.z;
                      local_48.fields.x = (float)uVar1;
                      local_48.fields.y = (float)uVar16;
                      UnityEngine_Transform__set_localPosition
                                (pUVar65,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
                      pUVar67 = (__this->fields).ForearmBloodL;
                      if (pUVar67 != (UnityEngine_ParticleSystem_o *)0x0) {
                        pUVar65 = UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)pUVar67,(MethodInfo *)0x0);
                        local_48.fields.x = -1.5707964;
                        local_48.fields.y = 0.0;
                        local_48.fields.z = 0.0;
                        pUVar68 = UnityEngine_Quaternion__Internal_FromEulerRad
                                            (local_38,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
                        if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                          uVar33 = (pUVar68->fields).x;
                          uVar34 = (pUVar68->fields).y;
                          uVar35 = (pUVar68->fields).z;
                          uVar36 = (pUVar68->fields).w;
                          local_48.fields.x = (float)uVar33;
                          local_48.fields.y = (float)uVar34;
                          local_48.fields.z = (float)uVar35;
                          local_48.fields.w = (float)uVar36;
                          UnityEngine_Transform__set_localRotation(pUVar65,&local_48,(MethodInfo *)0x0);
                          pUVar67 = (__this->fields).ForearmBloodL;
                          if (pUVar67 != (UnityEngine_ParticleSystem_o *)0x0) {
                            pUVar65 = UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)pUVar67,(MethodInfo *)0x0);
                            if (Il2CppMethodInitialized_18433dbeb == '\0') {
                              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                              Il2CppMethodInitialized_18433dbeb = '\x01';
                            }
                            pUVar31 = TypeInfo_UnityEngine_Vector3->static_fields;
                            uVar2 = (pUVar31->oneVector).fields.x;
                            uVar17 = (pUVar31->oneVector).fields.y;
                            if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                              local_48.fields.z = (pUVar31->oneVector).fields.z * 0.01;
                              local_48.fields.x = (float)uVar2 * 0.01;
                              local_48.fields.y = (float)uVar17 * 0.01;
                              UnityEngine_Transform__set_localScale
                                        (pUVar65,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
                              pUVar67 = (__this->fields).ForearmBloodR;
                              if (pUVar67 != (UnityEngine_ParticleSystem_o *)0x0) {
                                pUVar65 = UnityEngine_Component__get_transform
                                                    ((UnityEngine_Component_o *)pUVar67,(MethodInfo *)0x0);
                                if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                                  UnityEngine_Transform__SetParent
                                            (pUVar65,(__this->fields).ForearmR,(MethodInfo *)0x0);
                                  pUVar67 = (__this->fields).ForearmBloodR;
                                  if (pUVar67 != (UnityEngine_ParticleSystem_o *)0x0) {
                                    pUVar65 = UnityEngine_Component__get_transform
                                                        ((UnityEngine_Component_o *)pUVar67,(MethodInfo *)0x0)
                                    ;
                                    if (Il2CppMethodInitialized_18433dbea == '\0') {
                                      il2cpp_codegen_initialize_runtime_metadata
                                                (&TypeInfo_UnityEngine_Vector3);
                                      Il2CppMethodInitialized_18433dbea = '\x01';
                                    }
                                    if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                                      pUVar31 = TypeInfo_UnityEngine_Vector3->static_fields;
                                      uVar3 = (pUVar31->zeroVector).fields.x;
                                      uVar18 = (pUVar31->zeroVector).fields.y;
                                      local_48.fields.z = (pUVar31->zeroVector).fields.z;
                                      local_48.fields.x = (float)uVar3;
                                      local_48.fields.y = (float)uVar18;
                                      UnityEngine_Transform__set_localPosition
                                                (pUVar65,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0)
                                      ;
                                      pUVar67 = (__this->fields).ForearmBloodR;
                                      if (pUVar67 != (UnityEngine_ParticleSystem_o *)0x0) {
                                        pUVar65 = UnityEngine_Component__get_transform
                                                            ((UnityEngine_Component_o *)pUVar67,
                                                             (MethodInfo *)0x0);
                                        local_48.fields.x = -1.5707964;
                                        local_48.fields.y = 0.0;
                                        local_48.fields.z = 0.0;
                                        pUVar68 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                            (local_38,(UnityEngine_Vector3_o *)&local_48,
                                                             (MethodInfo *)0x0);
                                        if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                                          uVar37 = (pUVar68->fields).x;
                                          uVar38 = (pUVar68->fields).y;
                                          uVar39 = (pUVar68->fields).z;
                                          uVar40 = (pUVar68->fields).w;
                                          local_48.fields.x = (float)uVar37;
                                          local_48.fields.y = (float)uVar38;
                                          local_48.fields.z = (float)uVar39;
                                          local_48.fields.w = (float)uVar40;
                                          UnityEngine_Transform__set_localRotation
                                                    (pUVar65,&local_48,(MethodInfo *)0x0);
                                          pUVar67 = (__this->fields).ForearmBloodR;
                                          if (pUVar67 != (UnityEngine_ParticleSystem_o *)0x0) {
                                            pUVar65 = UnityEngine_Component__get_transform
                                                                ((UnityEngine_Component_o *)pUVar67,
                                                                 (MethodInfo *)0x0);
                                            if (Il2CppMethodInitialized_18433dbeb == '\0') {
                                              il2cpp_codegen_initialize_runtime_metadata
                                                        (&TypeInfo_UnityEngine_Vector3);
                                              Il2CppMethodInitialized_18433dbeb = '\x01';
                                            }
                                            pUVar31 = TypeInfo_UnityEngine_Vector3->static_fields;
                                            uVar4 = (pUVar31->oneVector).fields.x;
                                            uVar19 = (pUVar31->oneVector).fields.y;
                                            if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                                              local_48.fields.z = (pUVar31->oneVector).fields.z * 0.01;
                                              local_48.fields.x = (float)uVar4 * 0.01;
                                              local_48.fields.y = (float)uVar19 * 0.01;
                                              UnityEngine_Transform__set_localScale
                                                        (pUVar65,(UnityEngine_Vector3_o *)&local_48,
                                                         (MethodInfo *)0x0);
                                              pUVar66 = 
                                                       ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                                                 (TypeInfo_Utility_ResourcePaths->
                                                                  static_fields->Characters,
                                                                  "Titans/Particles/Prefabs/ArmSmokeParticle",true,
                                                                  (MethodInfo_795F00 *)
                                                                                                                                    
                                                       MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject
                                                       );
                                              if (pUVar66 != (UnityEngine_GameObject_o *)0x0) {
                                                pUVar67 = UnityEngine_GameObject__GetComponent_object_
                                                                    (pUVar66,(MethodInfo_6F5650 *)
                                                                                                                                                          
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem
                                                       );
                                                (__this->fields).ForearmSmokeL = pUVar67;
                                                Il2CppCodeGenWriteBarrier
                                                          (&(__this->fields).ForearmSmokeL,pUVar67);
                                                pUVar66 = 
                                                       ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                                                 (TypeInfo_Utility_ResourcePaths->
                                                                  static_fields->Characters,
                                                                  "Titans/Particles/Prefabs/ArmSmokeParticle",true,
                                                                  (MethodInfo_795F00 *)
                                                                                                                                    
                                                       MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject
                                                       );
                                                if (pUVar66 != (UnityEngine_GameObject_o *)0x0) {
                                                  pUVar67 = UnityEngine_GameObject__GetComponent_object_
                                                                      (pUVar66,(MethodInfo_6F5650 *)
                                                                                                                                                              
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem
                                                       );
                                                  (__this->fields).ForearmSmokeR = pUVar67;
                                                  Il2CppCodeGenWriteBarrier
                                                            (&(__this->fields).ForearmSmokeR,pUVar67);
                                                  pUVar66 = 
                                                       ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                                                 (TypeInfo_Utility_ResourcePaths->
                                                                  static_fields->Characters,
                                                                  "Titans/Particles/Prefabs/NapeBloodParticle",true,
                                                                  (MethodInfo_795F00 *)
                                                                                                                                    
                                                       MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject
                                                       );
                                                  if (pUVar66 != (UnityEngine_GameObject_o *)0x0) {
                                                    pUVar67 = UnityEngine_GameObject__GetComponent_object_
                                                                        (pUVar66,(MethodInfo_6F5650 *)
                                                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem
                                                       );
                                                    (__this->fields).NapeBlood = pUVar67;
                                                    Il2CppCodeGenWriteBarrier
                                                              (&(__this->fields).NapeBlood,pUVar67);
                                                    pUVar67 = (__this->fields).NapeBlood;
                                                    if (pUVar67 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                      pUVar65 = UnityEngine_Component__get_transform
                                                                          ((UnityEngine_Component_o *)pUVar67,
                                                                           (MethodInfo *)0x0);
                                                      if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                                                        UnityEngine_Transform__SetParent
                                                                  (pUVar65,(__this->fields).Neck,
                                                                   (MethodInfo *)0x0);
                                                        pUVar67 = (__this->fields).NapeBlood;
                                                        if (pUVar67 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                          pUVar65 = UnityEngine_Component__get_transform
                                                                              ((UnityEngine_Component_o *)
                                                                               pUVar67,(MethodInfo *)0x0);
                                                          if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                                                            local_48.fields.x = 0.0;
                                                            local_48.fields.y = 0.02;
                                                            local_48.fields.z = -0.1;
                                                            UnityEngine_Transform__set_localPosition
                                                                      (pUVar65,(UnityEngine_Vector3_o *)
                                                                               &local_48,(MethodInfo *)0x0);
                                                            pUVar67 = (__this->fields).NapeBlood;
                                                            if (pUVar67 != (UnityEngine_ParticleSystem_o *)0x0
                                                               ) {
                                                              pUVar65 = UnityEngine_Component__get_transform
                                                                                  ((UnityEngine_Component_o *)
                                                                                   pUVar67,(MethodInfo *)0x0);
                                                              local_48.fields.x = 0.0;
                                                              local_48.fields.y = 3.1415927;
                                                              local_48.fields.z = 0.0;
                                                              pUVar68 = 
                                                       UnityEngine_Quaternion__Internal_FromEulerRad
                                                                 (local_38,(UnityEngine_Vector3_o *)&local_48,
                                                                  (MethodInfo *)0x0);
                                                       if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                                                         uVar41 = (pUVar68->fields).x;
                                                         uVar42 = (pUVar68->fields).y;
                                                         uVar43 = (pUVar68->fields).z;
                                                         uVar44 = (pUVar68->fields).w;
                                                         local_48.fields.x = (float)uVar41;
                                                         local_48.fields.y = (float)uVar42;
                                                         local_48.fields.z = (float)uVar43;
                                                         local_48.fields.w = (float)uVar44;
                                                         UnityEngine_Transform__set_localRotation
                                                                   (pUVar65,&local_48,(MethodInfo *)0x0);
                                                         pUVar67 = (__this->fields).NapeBlood;
                                                         if (pUVar67 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                           pUVar65 = UnityEngine_Component__get_transform
                                                                               ((UnityEngine_Component_o *)
                                                                                pUVar67,(MethodInfo *)0x0);
                                                           if (Il2CppMethodInitialized_18433dbeb == '\0') {
                                                             il2cpp_codegen_initialize_runtime_metadata
                                                                       (&TypeInfo_UnityEngine_Vector3);
                                                             Il2CppMethodInitialized_18433dbeb = '\x01';
                                                           }
                                                           pUVar31 = TypeInfo_UnityEngine_Vector3->
                                                                     static_fields;
                                                           uVar5 = (pUVar31->oneVector).fields.x;
                                                           uVar20 = (pUVar31->oneVector).fields.y;
                                                           if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                                                             local_48.fields.z =
                                                                  (pUVar31->oneVector).fields.z * 0.01;
                                                             local_48.fields.x = (float)uVar5 * 0.01;
                                                             local_48.fields.y = (float)uVar20 * 0.01;
                                                             UnityEngine_Transform__set_localScale
                                                                       (pUVar65,(UnityEngine_Vector3_o *)
                                                                                &local_48,(MethodInfo *)0x0);
                                                             pUVar66 = 
                                                       ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                                                 (TypeInfo_Utility_ResourcePaths->
                                                                  static_fields->Characters,
                                                                  "Titans/Particles/Prefabs/WardedWeakSpotParticle",true,
                                                                  (MethodInfo_795F00 *)
                                                                                                                                    
                                                       MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject
                                                       );
                                                       if (pUVar66 != (UnityEngine_GameObject_o *)0x0) {
                                                         pUVar67 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar66,(MethodInfo_6F5650 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem
                                                       );
                                                       (__this->fields).WardedWeakSpotForearmL = pUVar67;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).WardedWeakSpotForearmL,
                                                                  pUVar67);
                                                       pUVar67 = (__this->fields).WardedWeakSpotForearmL;
                                                       if (pUVar67 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                         pUVar65 = UnityEngine_Component__get_transform
                                                                             ((UnityEngine_Component_o *)
                                                                              pUVar67,(MethodInfo *)0x0);
                                                         if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                                                           UnityEngine_Transform__SetParent
                                                                     (pUVar65,(__this->fields).ForearmL,
                                                                      (MethodInfo *)0x0);
                                                           pUVar67 = (__this->fields).WardedWeakSpotForearmL;
                                                           if (pUVar67 != (UnityEngine_ParticleSystem_o *)0x0)
                                                           {
                                                             pUVar65 = UnityEngine_Component__get_transform
                                                                                 ((UnityEngine_Component_o *)
                                                                                  pUVar67,(MethodInfo *)0x0);
                                                             if (Il2CppMethodInitialized_18433dbea == '\0') {
                                                               il2cpp_codegen_initialize_runtime_metadata
                                                                         (&TypeInfo_UnityEngine_Vector3);
                                                               Il2CppMethodInitialized_18433dbea = '\x01';
                                                             }
                                                             if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                                                               pUVar31 = TypeInfo_UnityEngine_Vector3->
                                                                         static_fields;
                                                               uVar6 = (pUVar31->zeroVector).fields.x;
                                                               uVar21 = (pUVar31->zeroVector).fields.y;
                                                               local_48.fields.z =
                                                                    (pUVar31->zeroVector).fields.z;
                                                               local_48.fields.x = (float)uVar6;
                                                               local_48.fields.y = (float)uVar21;
                                                               UnityEngine_Transform__set_localPosition
                                                                         (pUVar65,(UnityEngine_Vector3_o *)
                                                                                  &local_48,(MethodInfo *)0x0)
                                                               ;
                                                               pUVar67 = (__this->fields).
                                                                         WardedWeakSpotForearmL;
                                                               if (pUVar67 !=
                                                                   (UnityEngine_ParticleSystem_o *)0x0) {
                                                                 pUVar65 = 
                                                       UnityEngine_Component__get_transform
                                                                 ((UnityEngine_Component_o *)pUVar67,
                                                                  (MethodInfo *)0x0);
                                                       local_48.fields.x = -1.5707964;
                                                       local_48.fields.y = 0.0;
                                                       local_48.fields.z = 0.0;
                                                       pUVar68 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                                           (local_38,(UnityEngine_Vector3_o *)
                                                                                     &local_48,
                                                                            (MethodInfo *)0x0);
                                                       if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                                                         uVar45 = (pUVar68->fields).x;
                                                         uVar46 = (pUVar68->fields).y;
                                                         uVar47 = (pUVar68->fields).z;
                                                         uVar48 = (pUVar68->fields).w;
                                                         local_48.fields.x = (float)uVar45;
                                                         local_48.fields.y = (float)uVar46;
                                                         local_48.fields.z = (float)uVar47;
                                                         local_48.fields.w = (float)uVar48;
                                                         UnityEngine_Transform__set_localRotation
                                                                   (pUVar65,&local_48,(MethodInfo *)0x0);
                                                         pUVar67 = (__this->fields).WardedWeakSpotForearmL;
                                                         if (pUVar67 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                           pUVar65 = UnityEngine_Component__get_transform
                                                                               ((UnityEngine_Component_o *)
                                                                                pUVar67,(MethodInfo *)0x0);
                                                           if (Il2CppMethodInitialized_18433dbeb == '\0') {
                                                             il2cpp_codegen_initialize_runtime_metadata
                                                                       (&TypeInfo_UnityEngine_Vector3);
                                                             Il2CppMethodInitialized_18433dbeb = '\x01';
                                                           }
                                                           pUVar31 = TypeInfo_UnityEngine_Vector3->
                                                                     static_fields;
                                                           uVar7 = (pUVar31->oneVector).fields.x;
                                                           uVar22 = (pUVar31->oneVector).fields.y;
                                                           if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                                                             local_48.fields.z =
                                                                  (pUVar31->oneVector).fields.z * 0.05;
                                                             local_48.fields.x = (float)uVar7 * 0.05;
                                                             local_48.fields.y = (float)uVar22 * 0.05;
                                                             UnityEngine_Transform__set_localScale
                                                                       (pUVar65,(UnityEngine_Vector3_o *)
                                                                                &local_48,(MethodInfo *)0x0);
                                                             pUVar66 = 
                                                       ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                                                 (TypeInfo_Utility_ResourcePaths->
                                                                  static_fields->Characters,
                                                                  "Titans/Particles/Prefabs/WardedWeakSpotParticle",true,
                                                                  (MethodInfo_795F00 *)
                                                                                                                                    
                                                       MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject
                                                       );
                                                       if (pUVar66 != (UnityEngine_GameObject_o *)0x0) {
                                                         pUVar67 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar66,(MethodInfo_6F5650 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem
                                                       );
                                                       (__this->fields).WardedWeakSpotForearmR = pUVar67;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).WardedWeakSpotForearmR,
                                                                  pUVar67);
                                                       pUVar67 = (__this->fields).WardedWeakSpotForearmR;
                                                       if (pUVar67 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                         pUVar65 = UnityEngine_Component__get_transform
                                                                             ((UnityEngine_Component_o *)
                                                                              pUVar67,(MethodInfo *)0x0);
                                                         if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                                                           UnityEngine_Transform__SetParent
                                                                     (pUVar65,(__this->fields).ForearmR,
                                                                      (MethodInfo *)0x0);
                                                           pUVar67 = (__this->fields).WardedWeakSpotForearmR;
                                                           if (pUVar67 != (UnityEngine_ParticleSystem_o *)0x0)
                                                           {
                                                             pUVar65 = UnityEngine_Component__get_transform
                                                                                 ((UnityEngine_Component_o *)
                                                                                  pUVar67,(MethodInfo *)0x0);
                                                             if (Il2CppMethodInitialized_18433dbea == '\0') {
                                                               il2cpp_codegen_initialize_runtime_metadata
                                                                         (&TypeInfo_UnityEngine_Vector3);
                                                               Il2CppMethodInitialized_18433dbea = '\x01';
                                                             }
                                                             if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                                                               pUVar31 = TypeInfo_UnityEngine_Vector3->
                                                                         static_fields;
                                                               uVar8 = (pUVar31->zeroVector).fields.x;
                                                               uVar23 = (pUVar31->zeroVector).fields.y;
                                                               local_48.fields.z =
                                                                    (pUVar31->zeroVector).fields.z;
                                                               local_48.fields.x = (float)uVar8;
                                                               local_48.fields.y = (float)uVar23;
                                                               UnityEngine_Transform__set_localPosition
                                                                         (pUVar65,(UnityEngine_Vector3_o *)
                                                                                  &local_48,(MethodInfo *)0x0)
                                                               ;
                                                               pUVar67 = (__this->fields).
                                                                         WardedWeakSpotForearmR;
                                                               if (pUVar67 !=
                                                                   (UnityEngine_ParticleSystem_o *)0x0) {
                                                                 pUVar65 = 
                                                       UnityEngine_Component__get_transform
                                                                 ((UnityEngine_Component_o *)pUVar67,
                                                                  (MethodInfo *)0x0);
                                                       local_48.fields.x = -1.5707964;
                                                       local_48.fields.y = 0.0;
                                                       local_48.fields.z = 0.0;
                                                       pUVar68 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                                           (local_38,(UnityEngine_Vector3_o *)
                                                                                     &local_48,
                                                                            (MethodInfo *)0x0);
                                                       if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                                                         uVar49 = (pUVar68->fields).x;
                                                         uVar50 = (pUVar68->fields).y;
                                                         uVar51 = (pUVar68->fields).z;
                                                         uVar52 = (pUVar68->fields).w;
                                                         local_48.fields.x = (float)uVar49;
                                                         local_48.fields.y = (float)uVar50;
                                                         local_48.fields.z = (float)uVar51;
                                                         local_48.fields.w = (float)uVar52;
                                                         UnityEngine_Transform__set_localRotation
                                                                   (pUVar65,&local_48,(MethodInfo *)0x0);
                                                         pUVar67 = (__this->fields).WardedWeakSpotForearmR;
                                                         if (pUVar67 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                           pUVar65 = UnityEngine_Component__get_transform
                                                                               ((UnityEngine_Component_o *)
                                                                                pUVar67,(MethodInfo *)0x0);
                                                           if (Il2CppMethodInitialized_18433dbeb == '\0') {
                                                             il2cpp_codegen_initialize_runtime_metadata
                                                                       (&TypeInfo_UnityEngine_Vector3);
                                                             Il2CppMethodInitialized_18433dbeb = '\x01';
                                                           }
                                                           pUVar31 = TypeInfo_UnityEngine_Vector3->
                                                                     static_fields;
                                                           uVar9 = (pUVar31->oneVector).fields.x;
                                                           uVar24 = (pUVar31->oneVector).fields.y;
                                                           if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                                                             local_48.fields.z =
                                                                  (pUVar31->oneVector).fields.z * 0.05;
                                                             local_48.fields.x = (float)uVar9 * 0.05;
                                                             local_48.fields.y = (float)uVar24 * 0.05;
                                                             UnityEngine_Transform__set_localScale
                                                                       (pUVar65,(UnityEngine_Vector3_o *)
                                                                                &local_48,(MethodInfo *)0x0);
                                                             pUVar66 = 
                                                       ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                                                 (TypeInfo_Utility_ResourcePaths->
                                                                  static_fields->Characters,
                                                                  "Titans/Particles/Prefabs/WardedWeakSpotParticle",true,
                                                                  (MethodInfo_795F00 *)
                                                                                                                                    
                                                       MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject
                                                       );
                                                       if (pUVar66 != (UnityEngine_GameObject_o *)0x0) {
                                                         pUVar67 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar66,(MethodInfo_6F5650 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem
                                                       );
                                                       (__this->fields).WardedWeakSpotLegL = pUVar67;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).WardedWeakSpotLegL,pUVar67
                                                                 );
                                                       pUVar67 = (__this->fields).WardedWeakSpotLegL;
                                                       if (pUVar67 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                         pUVar65 = UnityEngine_Component__get_transform
                                                                             ((UnityEngine_Component_o *)
                                                                              pUVar67,(MethodInfo *)0x0);
                                                         pUVar32 = (UnityEngine_Component_o *)
                                                                   (__this->fields).LegLHurtbox;
                                                         if (pUVar32 != (UnityEngine_Component_o *)0x0) {
                                                           pUVar69 = UnityEngine_Component__get_transform
                                                                               (pUVar32,(MethodInfo *)0x0);
                                                           if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                                                             UnityEngine_Transform__SetParent
                                                                       (pUVar65,pUVar69,(MethodInfo *)0x0);
                                                             pUVar67 = (__this->fields).WardedWeakSpotLegL;
                                                             if (pUVar67 !=
                                                                 (UnityEngine_ParticleSystem_o *)0x0) {
                                                               pUVar65 = UnityEngine_Component__get_transform
                                                                                   ((UnityEngine_Component_o *
                                                                                    )pUVar67,(MethodInfo *)0x0
                                                                                   );
                                                               if (Il2CppMethodInitialized_18433dbea == '\0') {
                                                                 il2cpp_codegen_initialize_runtime_metadata
                                                                           (&TypeInfo_UnityEngine_Vector3);
                                                                 Il2CppMethodInitialized_18433dbea = '\x01';
                                                               }
                                                               if (pUVar65 != (UnityEngine_Transform_o *)0x0)
                                                               {
                                                                 pUVar31 = TypeInfo_UnityEngine_Vector3->
                                                                           static_fields;
                                                                 uVar10 = (pUVar31->zeroVector).fields.x;
                                                                 uVar25 = (pUVar31->zeroVector).fields.y;
                                                                 local_48.fields.z =
                                                                      (pUVar31->zeroVector).fields.z;
                                                                 local_48.fields.x = (float)uVar10;
                                                                 local_48.fields.y = (float)uVar25;
                                                                 UnityEngine_Transform__set_localPosition
                                                                           (pUVar65,(UnityEngine_Vector3_o *)
                                                                                    &local_48,
                                                                            (MethodInfo *)0x0);
                                                                 pUVar67 = (__this->fields).WardedWeakSpotLegL
                                                                 ;
                                                                 if (pUVar67 !=
                                                                     (UnityEngine_ParticleSystem_o *)0x0) {
                                                                   pUVar65 = 
                                                       UnityEngine_Component__get_transform
                                                                 ((UnityEngine_Component_o *)pUVar67,
                                                                  (MethodInfo *)0x0);
                                                       local_48.fields.x = -1.5707964;
                                                       local_48.fields.y = 0.0;
                                                       local_48.fields.z = 0.0;
                                                       pUVar68 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                                           (local_38,(UnityEngine_Vector3_o *)
                                                                                     &local_48,
                                                                            (MethodInfo *)0x0);
                                                       if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                                                         uVar53 = (pUVar68->fields).x;
                                                         uVar54 = (pUVar68->fields).y;
                                                         uVar55 = (pUVar68->fields).z;
                                                         uVar56 = (pUVar68->fields).w;
                                                         local_48.fields.x = (float)uVar53;
                                                         local_48.fields.y = (float)uVar54;
                                                         local_48.fields.z = (float)uVar55;
                                                         local_48.fields.w = (float)uVar56;
                                                         UnityEngine_Transform__set_localRotation
                                                                   (pUVar65,&local_48,(MethodInfo *)0x0);
                                                         pUVar67 = (__this->fields).WardedWeakSpotLegL;
                                                         if (pUVar67 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                           pUVar65 = UnityEngine_Component__get_transform
                                                                               ((UnityEngine_Component_o *)
                                                                                pUVar67,(MethodInfo *)0x0);
                                                           if (Il2CppMethodInitialized_18433dbeb == '\0') {
                                                             il2cpp_codegen_initialize_runtime_metadata
                                                                       (&TypeInfo_UnityEngine_Vector3);
                                                             Il2CppMethodInitialized_18433dbeb = '\x01';
                                                           }
                                                           pUVar31 = TypeInfo_UnityEngine_Vector3->
                                                                     static_fields;
                                                           uVar11 = (pUVar31->oneVector).fields.x;
                                                           uVar26 = (pUVar31->oneVector).fields.y;
                                                           if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                                                             local_48.fields.z =
                                                                  (pUVar31->oneVector).fields.z * 0.05;
                                                             local_48.fields.x = (float)uVar11 * 0.05;
                                                             local_48.fields.y = (float)uVar26 * 0.05;
                                                             UnityEngine_Transform__set_localScale
                                                                       (pUVar65,(UnityEngine_Vector3_o *)
                                                                                &local_48,(MethodInfo *)0x0);
                                                             pUVar66 = 
                                                       ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                                                 (TypeInfo_Utility_ResourcePaths->
                                                                  static_fields->Characters,
                                                                  "Titans/Particles/Prefabs/WardedWeakSpotParticle",true,
                                                                  (MethodInfo_795F00 *)
                                                                                                                                    
                                                       MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject
                                                       );
                                                       if (pUVar66 != (UnityEngine_GameObject_o *)0x0) {
                                                         pUVar67 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar66,(MethodInfo_6F5650 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem
                                                       );
                                                       (__this->fields).WardedWeakSpotLegR = pUVar67;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).WardedWeakSpotLegR,pUVar67
                                                                 );
                                                       pUVar67 = (__this->fields).WardedWeakSpotLegR;
                                                       if (pUVar67 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                         pUVar65 = UnityEngine_Component__get_transform
                                                                             ((UnityEngine_Component_o *)
                                                                              pUVar67,(MethodInfo *)0x0);
                                                         pUVar32 = (UnityEngine_Component_o *)
                                                                   (__this->fields).LegRHurtbox;
                                                         if (pUVar32 != (UnityEngine_Component_o *)0x0) {
                                                           pUVar69 = UnityEngine_Component__get_transform
                                                                               (pUVar32,(MethodInfo *)0x0);
                                                           if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                                                             UnityEngine_Transform__SetParent
                                                                       (pUVar65,pUVar69,(MethodInfo *)0x0);
                                                             pUVar67 = (__this->fields).WardedWeakSpotLegR;
                                                             if (pUVar67 !=
                                                                 (UnityEngine_ParticleSystem_o *)0x0) {
                                                               pUVar65 = UnityEngine_Component__get_transform
                                                                                   ((UnityEngine_Component_o *
                                                                                    )pUVar67,(MethodInfo *)0x0
                                                                                   );
                                                               if (Il2CppMethodInitialized_18433dbea == '\0') {
                                                                 il2cpp_codegen_initialize_runtime_metadata
                                                                           (&TypeInfo_UnityEngine_Vector3);
                                                                 Il2CppMethodInitialized_18433dbea = '\x01';
                                                               }
                                                               if (pUVar65 != (UnityEngine_Transform_o *)0x0)
                                                               {
                                                                 pUVar31 = TypeInfo_UnityEngine_Vector3->
                                                                           static_fields;
                                                                 uVar12 = (pUVar31->zeroVector).fields.x;
                                                                 uVar27 = (pUVar31->zeroVector).fields.y;
                                                                 local_48.fields.z =
                                                                      (pUVar31->zeroVector).fields.z;
                                                                 local_48.fields.x = (float)uVar12;
                                                                 local_48.fields.y = (float)uVar27;
                                                                 UnityEngine_Transform__set_localPosition
                                                                           (pUVar65,(UnityEngine_Vector3_o *)
                                                                                    &local_48,
                                                                            (MethodInfo *)0x0);
                                                                 pUVar67 = (__this->fields).WardedWeakSpotLegR
                                                                 ;
                                                                 if (pUVar67 !=
                                                                     (UnityEngine_ParticleSystem_o *)0x0) {
                                                                   pUVar65 = 
                                                       UnityEngine_Component__get_transform
                                                                 ((UnityEngine_Component_o *)pUVar67,
                                                                  (MethodInfo *)0x0);
                                                       local_48.fields.x = -1.5707964;
                                                       local_48.fields.y = 0.0;
                                                       local_48.fields.z = 0.0;
                                                       pUVar68 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                                           (local_38,(UnityEngine_Vector3_o *)
                                                                                     &local_48,
                                                                            (MethodInfo *)0x0);
                                                       if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                                                         uVar57 = (pUVar68->fields).x;
                                                         uVar58 = (pUVar68->fields).y;
                                                         uVar59 = (pUVar68->fields).z;
                                                         uVar60 = (pUVar68->fields).w;
                                                         local_48.fields.x = (float)uVar57;
                                                         local_48.fields.y = (float)uVar58;
                                                         local_48.fields.z = (float)uVar59;
                                                         local_48.fields.w = (float)uVar60;
                                                         UnityEngine_Transform__set_localRotation
                                                                   (pUVar65,&local_48,(MethodInfo *)0x0);
                                                         pUVar67 = (__this->fields).WardedWeakSpotLegR;
                                                         if (pUVar67 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                           pUVar65 = UnityEngine_Component__get_transform
                                                                               ((UnityEngine_Component_o *)
                                                                                pUVar67,(MethodInfo *)0x0);
                                                           if (Il2CppMethodInitialized_18433dbeb == '\0') {
                                                             il2cpp_codegen_initialize_runtime_metadata
                                                                       (&TypeInfo_UnityEngine_Vector3);
                                                             Il2CppMethodInitialized_18433dbeb = '\x01';
                                                           }
                                                           pUVar31 = TypeInfo_UnityEngine_Vector3->
                                                                     static_fields;
                                                           uVar13 = (pUVar31->oneVector).fields.x;
                                                           uVar28 = (pUVar31->oneVector).fields.y;
                                                           if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                                                             local_48.fields.z =
                                                                  (pUVar31->oneVector).fields.z * 0.05;
                                                             local_48.fields.x = (float)uVar13 * 0.05;
                                                             local_48.fields.y = (float)uVar28 * 0.05;
                                                             UnityEngine_Transform__set_localScale
                                                                       (pUVar65,(UnityEngine_Vector3_o *)
                                                                                &local_48,(MethodInfo *)0x0);
                                                             pUVar66 = 
                                                       ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                                                 (TypeInfo_Utility_ResourcePaths->
                                                                  static_fields->Characters,
                                                                  "Titans/Particles/Prefabs/DecapitationParticle",true,
                                                                  (MethodInfo_795F00 *)
                                                                                                                                    
                                                       MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject
                                                       );
                                                       if (pUVar66 != (UnityEngine_GameObject_o *)0x0) {
                                                         pUVar67 = 
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar66,(MethodInfo_6F5650 *)
                                                                                                                                                    
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_ParticleSystem
                                                       );
                                                       (__this->fields).DecapitationBlood = pUVar67;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).DecapitationBlood,pUVar67)
                                                       ;
                                                       pUVar67 = (__this->fields).DecapitationBlood;
                                                       if (pUVar67 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                         pUVar65 = UnityEngine_Component__get_transform
                                                                             ((UnityEngine_Component_o *)
                                                                              pUVar67,(MethodInfo *)0x0);
                                                         if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                                                           UnityEngine_Transform__SetParent
                                                                     (pUVar65,(__this->fields).Neck,
                                                                      (MethodInfo *)0x0);
                                                           pUVar67 = (__this->fields).DecapitationBlood;
                                                           if (pUVar67 != (UnityEngine_ParticleSystem_o *)0x0)
                                                           {
                                                             pUVar65 = UnityEngine_Component__get_transform
                                                                                 ((UnityEngine_Component_o *)
                                                                                  pUVar67,(MethodInfo *)0x0);
                                                             if (Il2CppMethodInitialized_18433dbea == '\0') {
                                                               il2cpp_codegen_initialize_runtime_metadata
                                                                         (&TypeInfo_UnityEngine_Vector3);
                                                               Il2CppMethodInitialized_18433dbea = '\x01';
                                                             }
                                                             if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                                                               pUVar31 = TypeInfo_UnityEngine_Vector3->
                                                                         static_fields;
                                                               uVar14 = (pUVar31->zeroVector).fields.x;
                                                               uVar29 = (pUVar31->zeroVector).fields.y;
                                                               local_48.fields.z =
                                                                    (pUVar31->zeroVector).fields.z;
                                                               local_48.fields.x = (float)uVar14;
                                                               local_48.fields.y = (float)uVar29;
                                                               UnityEngine_Transform__set_localPosition
                                                                         (pUVar65,(UnityEngine_Vector3_o *)
                                                                                  &local_48,(MethodInfo *)0x0)
                                                               ;
                                                               pUVar67 = (__this->fields).DecapitationBlood;
                                                               if (pUVar67 !=
                                                                   (UnityEngine_ParticleSystem_o *)0x0) {
                                                                 pUVar65 = 
                                                       UnityEngine_Component__get_transform
                                                                 ((UnityEngine_Component_o *)pUVar67,
                                                                  (MethodInfo *)0x0);
                                                       local_48.fields.x = -1.5707964;
                                                       local_48.fields.y = 0.0;
                                                       local_48.fields.z = 0.0;
                                                       pUVar68 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                                           (local_38,(UnityEngine_Vector3_o *)
                                                                                     &local_48,
                                                                            (MethodInfo *)0x0);
                                                       if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                                                         uVar61 = (pUVar68->fields).x;
                                                         uVar62 = (pUVar68->fields).y;
                                                         uVar63 = (pUVar68->fields).z;
                                                         uVar64 = (pUVar68->fields).w;
                                                         local_48.fields.x = (float)uVar61;
                                                         local_48.fields.y = (float)uVar62;
                                                         local_48.fields.z = (float)uVar63;
                                                         local_48.fields.w = (float)uVar64;
                                                         UnityEngine_Transform__set_localRotation
                                                                   (pUVar65,&local_48,(MethodInfo *)0x0);
                                                         pUVar67 = (__this->fields).DecapitationBlood;
                                                         if (pUVar67 != (UnityEngine_ParticleSystem_o *)0x0) {
                                                           pUVar65 = UnityEngine_Component__get_transform
                                                                               ((UnityEngine_Component_o *)
                                                                                pUVar67,(MethodInfo *)0x0);
                                                           if (Il2CppMethodInitialized_18433dbeb == '\0') {
                                                             il2cpp_codegen_initialize_runtime_metadata
                                                                       (&TypeInfo_UnityEngine_Vector3);
                                                             Il2CppMethodInitialized_18433dbeb = '\x01';
                                                           }
                                                           pUVar31 = TypeInfo_UnityEngine_Vector3->
                                                                     static_fields;
                                                           uVar15 = (pUVar31->oneVector).fields.x;
                                                           uVar30 = (pUVar31->oneVector).fields.y;
                                                           if (pUVar65 != (UnityEngine_Transform_o *)0x0) {
                                                             local_48.fields.z =
                                                                  (pUVar31->oneVector).fields.z * 0.01;
                                                             local_48.fields.x = (float)uVar15 * 0.01;
                                                             local_48.fields.y = (float)uVar30 * 0.01;
                                                             UnityEngine_Transform__set_localScale
                                                                       (pUVar65,(UnityEngine_Vector3_o *)
                                                                                &local_48,(MethodInfo *)0x0);
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


