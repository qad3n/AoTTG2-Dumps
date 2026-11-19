// Type: Characters.WallColossalComponentCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/WallColossalComponentCache.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/WallColossal/WallColossalComponentCache.cs
// --------------------------------

// Characters.WallColossalComponentCache$$.ctor
// il2cpp: void Characters_WallColossalComponentCache___ctor (Characters_WallColossalComponentCache_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x5c1dda0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c1e39b: jmp 0x5c1e48b

void Characters_WallColossalComponentCache___ctor
               (Characters_WallColossalComponentCache_o *__this,UnityEngine_GameObject_o *owner,
               MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  byte bVar1;
  Characters_BaseHitbox_o *pCVar2;
  UnityEngine_Object_o *x;
  bool bVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_ParticleSystem_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  Characters_WallColossalSteamWarningZone_o *pCVar8;
  UnityEngine_BoxCollider_o *pUVar9;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_BoxCollider_o *__this_01;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o value;
  UnityEngine_Quaternion_o value_00;
  
  if (Il2CppMethodInitialized_07547743 == '\0') {
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
    Il2CppMethodInitialized_07547743 = '\x01';
  }
  Characters_ShifterComponentCache___ctor
            ((Characters_ShifterComponentCache_o *)__this,owner,(MethodInfo *)0x0);
  pUVar4 = (__this->fields).Transform;
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05c1e48b;
  pUVar4 = UnityEngine_Transform__Find(pUVar4,"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/neck/head",(MethodInfo *)0x0);
  (__this->fields).Head = pUVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Head);
  pUVar4 = (__this->fields).Transform;
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05c1e48b;
  pUVar4 = UnityEngine_Transform__Find(pUVar4,"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/neck",(MethodInfo *)0x0);
  (__this->fields).Neck = pUVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Neck);
  pUVar4 = (__this->fields).Transform;
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05c1e48b;
  pUVar4 = UnityEngine_Transform__Find(pUVar4,"Armature_VER2/Core",(MethodInfo *)0x0);
  (__this->fields).Core = pUVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Core);
  pUVar4 = (__this->fields).Transform;
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05c1e48b;
  pUVar4 = UnityEngine_Transform__Find(pUVar4,"Armature_VER2/Core/Controller_Body/hip",(MethodInfo *)0x0);
  (__this->fields).Hip = pUVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Hip);
  pUVar4 = (__this->fields).Neck;
  if ((pUVar4 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar4 = UnityEngine_Transform__Find(pUVar4,"ColossalSteam1",(MethodInfo *)0x0),
     pUVar4 == (UnityEngine_Transform_o *)0x0)) goto label_05c1e48b;
  pUVar5 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar4,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
  (__this->fields).ColossalSteam1 = pUVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ColossalSteam1);
  pUVar4 = (__this->fields).Neck;
  if ((pUVar4 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar4 = UnityEngine_Transform__Find(pUVar4,"ColossalSteam2",(MethodInfo *)0x0),
     pUVar4 == (UnityEngine_Transform_o *)0x0)) goto label_05c1e48b;
  pUVar5 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar4,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
  (__this->fields).ColossalSteam2 = pUVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ColossalSteam2);
  pUVar4 = (__this->fields).Transform;
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05c1e48b;
  pUVar4 = UnityEngine_Transform__Find(pUVar4,"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_L/upper_arm_L/forearm_L/hand_L",(MethodInfo *)0x0);
  (__this->fields).LeftHand = pUVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).LeftHand);
  pUVar4 = (__this->fields).Transform;
  if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05c1e48b;
  pUVar4 = UnityEngine_Transform__Find(pUVar4,"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_R/upper_arm_R/forearm_R/hand_R",(MethodInfo *)0x0);
  (__this->fields).RightHand = pUVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RightHand);
  pUVar4 = (__this->fields).Transform;
  if ((pUVar4 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar4 = UnityEngine_Transform__Find(pUVar4,"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_L/upper_arm_L/forearm_L/ArmSmokeParticle",(MethodInfo *)0x0),
     pUVar4 == (UnityEngine_Transform_o *)0x0)) goto label_05c1e48b;
  pUVar5 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar4,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
  (__this->fields).LeftHandSteam = pUVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).LeftHandSteam);
  pUVar4 = (__this->fields).Transform;
  if ((pUVar4 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar4 = UnityEngine_Transform__Find(pUVar4,"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_R/upper_arm_R/forearm_R/ArmSmokeParticle",(MethodInfo *)0x0),
     pUVar4 == (UnityEngine_Transform_o *)0x0)) goto label_05c1e48b;
  pUVar5 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar4,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_ParticleSystem);
  (__this->fields).RightHandSteam = pUVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RightHandSteam);
  Utility_BaseComponentCache__LoadAudio
            ((Utility_BaseComponentCache_o *)__this,"Shifters/Prefabs/ShifterSounds",(__this->fields).Neck,
             (MethodInfo *)0x0);
  Utility_BaseComponentCache__LoadAudio
            ((Utility_BaseComponentCache_o *)__this,"Titans/Prefabs/TitanSounds",(__this->fields).Neck,
             (MethodInfo *)0x0);
  pCVar2 = (__this->fields).SteamHitbox;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  pCVar2 = (__this->fields).SteamHitbox;
  if (pCVar2 == (Characters_BaseHitbox_o *)0x0) goto label_05c1e48b;
  x = (UnityEngine_Object_o *)(pCVar2->fields)._collider;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  pUVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor(pUVar6,"SteamWarningZone",(MethodInfo *)0x0);
  targetAddress = &(__this->fields).SteamWarningZone;
  (__this->fields).SteamWarningZone = pUVar6;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar6 = (__this->fields).SteamWarningZone;
  if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_05c1e48b;
  pUVar4 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
  pCVar2 = (__this->fields).SteamHitbox;
  if (((pCVar2 == (Characters_BaseHitbox_o *)0x0) ||
      (pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0),
      pUVar7 == (UnityEngine_Transform_o *)0x0)) ||
     (pUVar7 = UnityEngine_Transform__get_parent(pUVar7,(MethodInfo *)0x0),
     pUVar4 == (UnityEngine_Transform_o *)0x0)) goto label_05c1e48b;
  UnityEngine_Transform__SetParent(pUVar4,pUVar7,(MethodInfo *)0x0);
  if (*targetAddress == (UnityEngine_GameObject_o *)0x0) goto label_05c1e48b;
  pUVar4 = UnityEngine_GameObject__get_transform(*targetAddress,(MethodInfo *)0x0);
  pCVar2 = (__this->fields).SteamHitbox;
  if (((pCVar2 == (Characters_BaseHitbox_o *)0x0) ||
      (pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0),
      pUVar7 == (UnityEngine_Transform_o *)0x0)) ||
     (UVar10 = UnityEngine_Transform__get_localPosition(pUVar7,(MethodInfo *)0x0),
     pUVar4 == (UnityEngine_Transform_o *)0x0)) goto label_05c1e48b;
  UnityEngine_Transform__set_localPosition(pUVar4,UVar10,(MethodInfo *)0x0);
  if (*targetAddress == (UnityEngine_GameObject_o *)0x0) goto label_05c1e48b;
  pUVar4 = UnityEngine_GameObject__get_transform(*targetAddress,(MethodInfo *)0x0);
  pCVar2 = (__this->fields).SteamHitbox;
  if (((pCVar2 == (Characters_BaseHitbox_o *)0x0) ||
      (pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar2,(MethodInfo *)0x0),
      pUVar7 == (UnityEngine_Transform_o *)0x0)) ||
     (value_00 = UnityEngine_Transform__get_localRotation(pUVar7,(MethodInfo *)0x0),
     pUVar4 == (UnityEngine_Transform_o *)0x0)) goto label_05c1e48b;
  UnityEngine_Transform__set_localRotation(pUVar4,value_00,(MethodInfo *)0x0);
  pUVar6 = *targetAddress;
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_05c1e48b;
  UnityEngine_GameObject__set_layer
            (pUVar6,TypeInfo_Utility_PhysicsLayer->static_fields->CharacterDetection,(MethodInfo *)0x0);
  if (*targetAddress == (UnityEngine_GameObject_o *)0x0) goto label_05c1e48b;
  pCVar8 = UnityEngine_GameObject__AddComponent_object_
                     (*targetAddress,
                      (MethodInfo_353B6A0 *)
                      MethodInfo_UnityEngine_GameObject_AddComponent_WallColossalSteamWarningZone);
  (__this->fields).SteamWarningZoneComponent = pCVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SteamWarningZoneComponent);
  pCVar2 = (__this->fields).SteamHitbox;
  if (pCVar2 == (Characters_BaseHitbox_o *)0x0) goto label_05c1e48b;
  pUVar9 = (UnityEngine_BoxCollider_o *)(pCVar2->fields)._collider;
  if (pUVar9 == (UnityEngine_BoxCollider_o *)0x0) {
label_05c1e390:
    __this_01 = (UnityEngine_BoxCollider_o *)0x0;
    pUVar6 = *targetAddress;
  }
  else {
    bVar1 = (TypeInfo_UnityEngine_BoxCollider->_2).typeHierarchyDepth;
    if ((pUVar9->klass->_2).typeHierarchyDepth < bVar1) goto label_05c1e390;
    __this_01 = (UnityEngine_BoxCollider_o *)0x0;
    if ((pUVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UnityEngine_BoxCollider
       ) {
      __this_01 = pUVar9;
    }
    pUVar6 = *targetAddress;
  }
  if (((pUVar6 != (UnityEngine_GameObject_o *)0x0) &&
      (pUVar9 = UnityEngine_GameObject__AddComponent_object_
                          (pUVar6,(MethodInfo_353B6A0 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_BoxCollider),
      __this_01 != (UnityEngine_BoxCollider_o *)0x0)) &&
     (UVar10 = UnityEngine_BoxCollider__get_center(__this_01,(MethodInfo *)0x0),
     pUVar9 != (UnityEngine_BoxCollider_o *)0x0)) {
    UnityEngine_BoxCollider__set_center(pUVar9,UVar10,(MethodInfo *)0x0);
    UVar10 = UnityEngine_BoxCollider__get_size(__this_01,(MethodInfo *)0x0);
    value.fields.x = UVar10.fields.x * 2.4;
    value.fields.y = UVar10.fields.y * 2.4;
    value.fields.z = UVar10.fields.z * 2.4;
    UnityEngine_BoxCollider__set_size(pUVar9,value,(MethodInfo *)0x0);
    UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)pUVar9,true,(MethodInfo *)0x0);
    if ((*targetAddress != (UnityEngine_GameObject_o *)0x0) &&
       (__this_00 = UnityEngine_GameObject__AddComponent_object_
                              (*targetAddress,
                               (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Rigidbody)
       , __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
      UnityEngine_Rigidbody__set_isKinematic(__this_00,true,(MethodInfo *)0x0);
      UnityEngine_Rigidbody__set_useGravity(__this_00,false,(MethodInfo *)0x0);
      if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(*targetAddress,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05c1e48b:
  ThrowNullReferenceException();
}


