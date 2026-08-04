// Type: Characters.WallColossalComponentCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/WallColossalComponentCache.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/WallColossal/WallColossalComponentCache.cs
// --------------------------------

// Characters.WallColossalComponentCache$$.ctor
// il2cpp: void Characters_WallColossalComponentCache___ctor (Characters_WallColossalComponentCache_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x4304a40

void Characters_WallColossalComponentCache___ctor
               (Characters_WallColossalComponentCache_o *__this,UnityEngine_GameObject_o *owner,
               MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  byte bVar2;
  Characters_BaseHitbox_o *pCVar3;
  UnityEngine_Object_o *x;
  bool_conflict bVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_ParticleSystem_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  Characters_BaseMovementSync_o *pCVar8;
  UnityEngine_Transform_o *p;
  Characters_WallColossalSteamWarningZone_o *pCVar9;
  UnityEngine_BoxCollider_o *__this_00;
  UnityEngine_Rigidbody_o *__this_01;
  Characters_BaseMovementSync_c *pCVar10;
  Characters_BaseMovementSync_o *pCVar11;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o value_00;
  
  if (g_data_057adf4d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoxCollider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BoxCollider_AddComponent_BoxCollider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_AddComponent_Rigidbody);
    il2cpp_runtime_helper_023445d0(&MethodInfo_WallColossalSteamWarningZone_AddComponent_WallColossalSt);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhysicsLayer);
    il2cpp_runtime_helper_023445d0(&"ColossalSteam1");
    il2cpp_runtime_helper_023445d0(&"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/neck");
    il2cpp_runtime_helper_023445d0(&"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_L/upper_arm_L/forearm_L/ArmSmokeParticle");
    il2cpp_runtime_helper_023445d0(&"Armature_VER2/Core");
    il2cpp_runtime_helper_023445d0(&"SteamWarningZone");
    il2cpp_runtime_helper_023445d0(&"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_R/upper_arm_R/forearm_R/ArmSmokeParticle");
    il2cpp_runtime_helper_023445d0(&"Armature_VER2/Core/Controller_Body/hip");
    il2cpp_runtime_helper_023445d0(&"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_R/upper_arm_R/forearm_R/hand_R");
    il2cpp_runtime_helper_023445d0(&"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/neck/head");
    il2cpp_runtime_helper_023445d0(&"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_L/upper_arm_L/forearm_L/hand_L");
    il2cpp_runtime_helper_023445d0(&"Shifters/Prefabs/ShifterSounds");
    il2cpp_runtime_helper_023445d0(&"ColossalSteam2");
    il2cpp_runtime_helper_023445d0(&"Titans/Prefabs/TitanSounds");
    g_data_057adf4d = '\x01';
  }
  Characters_BaseTitanComponentCache___ctor
            ((Characters_BaseTitanComponentCache_o *)__this,owner,(MethodInfo *)0x0);
  pUVar5 = (__this->fields).Transform;
  pCVar11 = (Characters_BaseMovementSync_o *)0x0;
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0430512b;
  pUVar5 = UnityEngine_Transform__Find(pUVar5,"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/neck/head",(MethodInfo *)0x0);
  (__this->fields).Head = pUVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Head);
  pUVar5 = (__this->fields).Transform;
  pCVar11 = (Characters_BaseMovementSync_o *)0x0;
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0430512b;
  pUVar5 = UnityEngine_Transform__Find(pUVar5,"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/neck",(MethodInfo *)0x0);
  (__this->fields).Neck = pUVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Neck);
  pUVar5 = (__this->fields).Transform;
  pCVar11 = (Characters_BaseMovementSync_o *)0x0;
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0430512b;
  pUVar5 = UnityEngine_Transform__Find(pUVar5,"Armature_VER2/Core",(MethodInfo *)0x0);
  (__this->fields).Core = pUVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Core);
  pUVar5 = (__this->fields).Transform;
  pCVar11 = (Characters_BaseMovementSync_o *)0x0;
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0430512b;
  pUVar5 = UnityEngine_Transform__Find(pUVar5,"Armature_VER2/Core/Controller_Body/hip",(MethodInfo *)0x0);
  (__this->fields).Hip = pUVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Hip);
  pCVar11 = (Characters_BaseMovementSync_o *)(__this->fields).Neck;
  if ((pCVar11 == (Characters_BaseMovementSync_o *)0x0) ||
     (pUVar5 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)pCVar11,"ColossalSteam1",(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_0430512b;
  pUVar6 = (UnityEngine_ParticleSystem_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar5,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
  (__this->fields).ColossalSteam1 = pUVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ColossalSteam1);
  pCVar11 = (Characters_BaseMovementSync_o *)(__this->fields).Neck;
  if ((pCVar11 == (Characters_BaseMovementSync_o *)0x0) ||
     (pUVar5 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)pCVar11,"ColossalSteam2",(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_0430512b;
  pUVar6 = (UnityEngine_ParticleSystem_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar5,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
  (__this->fields).ColossalSteam2 = pUVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ColossalSteam2);
  pUVar5 = (__this->fields).Transform;
  pCVar11 = (Characters_BaseMovementSync_o *)0x0;
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0430512b;
  pUVar5 = UnityEngine_Transform__Find(pUVar5,"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_L/upper_arm_L/forearm_L/hand_L",(MethodInfo *)0x0);
  (__this->fields).LeftHand = pUVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).LeftHand);
  pUVar5 = (__this->fields).Transform;
  pCVar11 = (Characters_BaseMovementSync_o *)0x0;
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0430512b;
  pUVar5 = UnityEngine_Transform__Find(pUVar5,"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_R/upper_arm_R/forearm_R/hand_R",(MethodInfo *)0x0);
  (__this->fields).RightHand = pUVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).RightHand);
  pCVar11 = (Characters_BaseMovementSync_o *)(__this->fields).Transform;
  if ((pCVar11 == (Characters_BaseMovementSync_o *)0x0) ||
     (pUVar5 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)pCVar11,"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_L/upper_arm_L/forearm_L/ArmSmokeParticle",(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_0430512b;
  pUVar6 = (UnityEngine_ParticleSystem_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar5,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
  (__this->fields).LeftHandSteam = pUVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields).LeftHandSteam);
  pCVar11 = (Characters_BaseMovementSync_o *)(__this->fields).Transform;
  if ((pCVar11 == (Characters_BaseMovementSync_o *)0x0) ||
     (pUVar5 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)pCVar11,"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_R/upper_arm_R/forearm_R/ArmSmokeParticle",(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_0430512b;
  pUVar6 = (UnityEngine_ParticleSystem_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar5,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
  (__this->fields).RightHandSteam = pUVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields).RightHandSteam,pUVar6);
  Utility_BaseComponentCache__LoadAudio
            ((Utility_BaseComponentCache_o *)__this,"Shifters/Prefabs/ShifterSounds",(__this->fields).Neck,(MethodInfo *)0x0);
  Utility_BaseComponentCache__LoadAudio
            ((Utility_BaseComponentCache_o *)__this,"Titans/Prefabs/TitanSounds",(__this->fields).Neck,(MethodInfo *)0x0);
  pCVar11 = (Characters_BaseMovementSync_o *)(__this->fields).SteamHitbox;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  pCVar3 = (__this->fields).SteamHitbox;
  if (pCVar3 == (Characters_BaseHitbox_o *)0x0) goto label_0430512b;
  x = (UnityEngine_Object_o *)(pCVar3->fields)._collider;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  pUVar7 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(pUVar7,"SteamWarningZone",(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).SteamWarningZone;
  (__this->fields).SteamWarningZone = pUVar7;
  il2cpp_runtime_helper_022b4080(ppUVar1);
  pUVar7 = (__this->fields).SteamWarningZone;
  pCVar11 = (Characters_BaseMovementSync_o *)0x0;
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_0430512b;
  pUVar5 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
  pCVar11 = (Characters_BaseMovementSync_o *)(__this->fields).SteamHitbox;
  if (((pCVar11 == (Characters_BaseMovementSync_o *)0x0) ||
      (pCVar8 = (Characters_BaseMovementSync_o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar11,(MethodInfo *)0x0),
      pCVar8 == (Characters_BaseMovementSync_o *)0x0)) ||
     (p = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pCVar8,(MethodInfo *)0x0),
     pCVar11 = pCVar8, pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_0430512b;
  UnityEngine_Transform__SetParent(pUVar5,p,(MethodInfo *)0x0);
  pCVar11 = (Characters_BaseMovementSync_o *)0x0;
  if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_0430512b;
  pUVar5 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
  pCVar11 = (Characters_BaseMovementSync_o *)(__this->fields).SteamHitbox;
  if (((pCVar11 == (Characters_BaseMovementSync_o *)0x0) ||
      (pCVar8 = (Characters_BaseMovementSync_o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar11,(MethodInfo *)0x0),
      pCVar8 == (Characters_BaseMovementSync_o *)0x0)) ||
     (UVar12 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)pCVar8,(MethodInfo *)0x0),
     pCVar11 = pCVar8, pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_0430512b;
  UnityEngine_Transform__set_localPosition(pUVar5,UVar12,(MethodInfo *)0x0);
  pCVar11 = (Characters_BaseMovementSync_o *)0x0;
  if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_0430512b;
  pUVar5 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
  pCVar11 = (Characters_BaseMovementSync_o *)(__this->fields).SteamHitbox;
  if (((pCVar11 == (Characters_BaseMovementSync_o *)0x0) ||
      (pCVar8 = (Characters_BaseMovementSync_o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar11,(MethodInfo *)0x0),
      pCVar8 == (Characters_BaseMovementSync_o *)0x0)) ||
     (value = UnityEngine_Transform__get_localRotation((UnityEngine_Transform_o *)pCVar8,(MethodInfo *)0x0),
     pCVar11 = pCVar8, pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_0430512b;
  UnityEngine_Transform__set_localRotation(pUVar5,value,(MethodInfo *)0x0);
  pUVar7 = *ppUVar1;
  pCVar11 = TypeInfo_PhysicsLayer;
  if (TypeInfo_PhysicsLayer[1].fields._correctVelocity.fields.y == 0.0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_0430512b;
  UnityEngine_GameObject__set_layer
            (pUVar7,((TypeInfo_PhysicsLayer[1].fields.pvCache)->fields).prefixField,(MethodInfo *)0x0);
  pCVar11 = (Characters_BaseMovementSync_o *)0x0;
  if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_0430512b;
  pCVar9 = (Characters_WallColossalSteamWarningZone_o *)
           UnityEngine_GameObject__AddComponent_object_(*ppUVar1,MethodInfo_WallColossalSteamWarningZone_AddComponent_WallColossalSt);
  pCVar11 = (Characters_BaseMovementSync_o *)&(__this->fields).SteamWarningZoneComponent;
  (__this->fields).SteamWarningZoneComponent = pCVar9;
  il2cpp_runtime_helper_022b4080();
  pCVar3 = (__this->fields).SteamHitbox;
  if (pCVar3 == (Characters_BaseHitbox_o *)0x0) goto label_0430512b;
  pCVar11 = (Characters_BaseMovementSync_o *)(pCVar3->fields)._collider;
  if (pCVar11 == (Characters_BaseMovementSync_o *)0x0) {
label_04305030:
    pCVar8 = (Characters_BaseMovementSync_o *)0x0;
    pCVar11 = (Characters_BaseMovementSync_o *)*ppUVar1;
  }
  else {
    bVar2 = (TypeInfo_BoxCollider->_2).naturalAligment;
    if ((pCVar11->klass->_2).naturalAligment < bVar2) goto label_04305030;
    pCVar8 = (Characters_BaseMovementSync_o *)0x0;
    if ((pCVar11->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BoxCollider) {
      pCVar8 = pCVar11;
    }
    pCVar11 = (Characters_BaseMovementSync_o *)*ppUVar1;
  }
  if (((pCVar11 != (Characters_BaseMovementSync_o *)0x0) &&
      (__this_00 = (UnityEngine_BoxCollider_o *)
                   UnityEngine_GameObject__AddComponent_object_
                             ((UnityEngine_GameObject_o *)pCVar11,MethodInfo_BoxCollider_AddComponent_BoxCollider),
      pCVar8 != (Characters_BaseMovementSync_o *)0x0)) &&
     (pCVar11 = pCVar8,
     UVar12 = UnityEngine_BoxCollider__get_center((UnityEngine_BoxCollider_o *)pCVar8,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_BoxCollider_o *)0x0)) {
    UnityEngine_BoxCollider__set_center(__this_00,UVar12,(MethodInfo *)0x0);
    UVar12 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)pCVar8,(MethodInfo *)0x0);
    value_00.fields.x = UVar12.fields.x * 2.4;
    value_00.fields.y = UVar12.fields.y * 2.4;
    value_00.fields.z = UVar12.fields.z * 2.4;
    UnityEngine_BoxCollider__set_size(__this_00,value_00,(MethodInfo *)0x0);
    UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)__this_00,1,(MethodInfo *)0x0);
    pCVar11 = (Characters_BaseMovementSync_o *)*ppUVar1;
    if ((pCVar11 != (Characters_BaseMovementSync_o *)0x0) &&
       (__this_01 = (UnityEngine_Rigidbody_o *)
                    UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)pCVar11,MethodInfo_Rigidbody_AddComponent_Rigidbody),
       __this_01 != (UnityEngine_Rigidbody_o *)0x0)) {
      UnityEngine_Rigidbody__set_isKinematic(__this_01,1,(MethodInfo *)0x0);
      UnityEngine_Rigidbody__set_useGravity(__this_01,0,(MethodInfo *)0x0);
      pCVar11 = (Characters_BaseMovementSync_o *)0x0;
      if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(*ppUVar1,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_0430512b:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adf4e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_WallColossalShifter_GetComponent_WallColossalShifter);
    g_data_057adf4e = '\x01';
  }
  Characters_BaseMovementSync__Awake(pCVar11,(MethodInfo *)0x0);
  pCVar10 = (Characters_BaseMovementSync_c *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pCVar11,MethodInfo_WallColossalShifter_GetComponent_WallColossalShifter);
  pCVar11[1].klass = pCVar10;
  il2cpp_runtime_helper_022b4080(pCVar11 + 1,pCVar10);
  return;
}


