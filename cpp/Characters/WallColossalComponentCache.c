// Type: Characters.WallColossalComponentCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/WallColossalComponentCache.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Shifters/WallColossal/WallColossalComponentCache.cs  [prior source available (delta unverified)]
// --------------------------------

// Characters.WallColossalComponentCache$$.ctor
// il2cpp: void Characters_WallColossalComponentCache___ctor (Characters_WallColossalComponentCache_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x3ff8180

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
  UnityEngine_Transform_o *pUVar8;
  Characters_WallColossalSteamWarningZone_o *pCVar9;
  UnityEngine_BoxCollider_o *pUVar10;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_BoxCollider_o *__this_01;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o value;
  UnityEngine_Quaternion_o value_00;
  
  if (DAT_057041df == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoxCollider);
    il2cpp_init_method_metadata(&MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
    il2cpp_init_method_metadata(&MethodInfo_BoxCollider_AddComponent_BoxCollider);
    il2cpp_init_method_metadata(&MethodInfo_Rigidbody_AddComponent_Rigidbody);
    il2cpp_init_method_metadata(&MethodInfo_WallColossalSteamWarningZone_AddComponent_WallCo);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&"ColossalSteam1");
    il2cpp_init_method_metadata(&"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/neck");
    il2cpp_init_method_metadata(&"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_L/upper_arm_L/forearm_L/ArmSmokeParticle");
    il2cpp_init_method_metadata(&"Armature_VER2/Core");
    il2cpp_init_method_metadata(&"SteamWarningZone");
    il2cpp_init_method_metadata(&"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_R/upper_arm_R/forearm_R/ArmSmokeParticle");
    il2cpp_init_method_metadata(&"Armature_VER2/Core/Controller_Body/hip");
    il2cpp_init_method_metadata(&"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_R/upper_arm_R/forearm_R/hand_R");
    il2cpp_init_method_metadata(&"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/neck/head");
    il2cpp_init_method_metadata(&"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_L/upper_arm_L/forearm_L/hand_L");
    il2cpp_init_method_metadata(&"Shifters/Prefabs/ShifterSounds");
    il2cpp_init_method_metadata(&"ColossalSteam2");
    il2cpp_init_method_metadata(&"Titans/Prefabs/TitanSounds");
    DAT_057041df = '\x01';
  }
  Characters_BaseTitanComponentCache___ctor
            ((Characters_BaseTitanComponentCache_o *)__this,owner,(MethodInfo *)0x0);
  pUVar5 = (__this->fields).Transform;
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_03ff886b;
  pUVar5 = UnityEngine_Transform__Find(pUVar5,"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/neck/head",(MethodInfo *)0x0);
  (__this->fields).Head = pUVar5;
  il2cpp_runtime_glue(&(__this->fields).Head,pUVar5);
  pUVar5 = (__this->fields).Transform;
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_03ff886b;
  pUVar5 = UnityEngine_Transform__Find(pUVar5,"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/neck",(MethodInfo *)0x0);
  (__this->fields).Neck = pUVar5;
  il2cpp_runtime_glue(&(__this->fields).Neck,pUVar5);
  pUVar5 = (__this->fields).Transform;
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_03ff886b;
  pUVar5 = UnityEngine_Transform__Find(pUVar5,"Armature_VER2/Core",(MethodInfo *)0x0);
  (__this->fields).Core = pUVar5;
  il2cpp_runtime_glue(&(__this->fields).Core,pUVar5);
  pUVar5 = (__this->fields).Transform;
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_03ff886b;
  pUVar5 = UnityEngine_Transform__Find(pUVar5,"Armature_VER2/Core/Controller_Body/hip",(MethodInfo *)0x0);
  (__this->fields).Hip = pUVar5;
  il2cpp_runtime_glue(&(__this->fields).Hip,pUVar5);
  pUVar5 = (__this->fields).Neck;
  if ((pUVar5 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar5 = UnityEngine_Transform__Find(pUVar5,"ColossalSteam1",(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_Transform_o *)0x0)) goto LAB_03ff886b;
  pUVar6 = (UnityEngine_ParticleSystem_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)pUVar5,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
  (__this->fields).ColossalSteam1 = pUVar6;
  il2cpp_runtime_glue(&(__this->fields).ColossalSteam1,pUVar6);
  pUVar5 = (__this->fields).Neck;
  if ((pUVar5 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar5 = UnityEngine_Transform__Find(pUVar5,"ColossalSteam2",(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_Transform_o *)0x0)) goto LAB_03ff886b;
  pUVar6 = (UnityEngine_ParticleSystem_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)pUVar5,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
  (__this->fields).ColossalSteam2 = pUVar6;
  il2cpp_runtime_glue(&(__this->fields).ColossalSteam2,pUVar6);
  pUVar5 = (__this->fields).Transform;
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_03ff886b;
  pUVar5 = UnityEngine_Transform__Find(pUVar5,"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_L/upper_arm_L/forearm_L/hand_L",(MethodInfo *)0x0);
  (__this->fields).LeftHand = pUVar5;
  il2cpp_runtime_glue(&(__this->fields).LeftHand,pUVar5);
  pUVar5 = (__this->fields).Transform;
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto LAB_03ff886b;
  pUVar5 = UnityEngine_Transform__Find(pUVar5,"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_R/upper_arm_R/forearm_R/hand_R",(MethodInfo *)0x0);
  (__this->fields).RightHand = pUVar5;
  il2cpp_runtime_glue(&(__this->fields).RightHand,pUVar5);
  pUVar5 = (__this->fields).Transform;
  if ((pUVar5 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar5 = UnityEngine_Transform__Find(pUVar5,"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_L/upper_arm_L/forearm_L/ArmSmokeParticle",(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_Transform_o *)0x0)) goto LAB_03ff886b;
  pUVar6 = (UnityEngine_ParticleSystem_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)pUVar5,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
  (__this->fields).LeftHandSteam = pUVar6;
  il2cpp_runtime_glue(&(__this->fields).LeftHandSteam,pUVar6);
  pUVar5 = (__this->fields).Transform;
  if ((pUVar5 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar5 = UnityEngine_Transform__Find(pUVar5,"Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_R/upper_arm_R/forearm_R/ArmSmokeParticle",(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_Transform_o *)0x0)) goto LAB_03ff886b;
  pUVar6 = (UnityEngine_ParticleSystem_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)pUVar5,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
  (__this->fields).RightHandSteam = pUVar6;
  il2cpp_runtime_glue(&(__this->fields).RightHandSteam,pUVar6);
  Utility_BaseComponentCache__LoadAudio
            ((Utility_BaseComponentCache_o *)__this,"Shifters/Prefabs/ShifterSounds",(__this->fields).Neck,
             (MethodInfo *)0x0);
  Utility_BaseComponentCache__LoadAudio
            ((Utility_BaseComponentCache_o *)__this,"Titans/Prefabs/TitanSounds",(__this->fields).Neck,
             (MethodInfo *)0x0);
  pCVar3 = (__this->fields).SteamHitbox;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  pCVar3 = (__this->fields).SteamHitbox;
  if (pCVar3 == (Characters_BaseHitbox_o *)0x0) goto LAB_03ff886b;
  x = (UnityEngine_Object_o *)(pCVar3->fields)._collider;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  pUVar7 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(pUVar7,"SteamWarningZone",(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).SteamWarningZone;
  (__this->fields).SteamWarningZone = pUVar7;
  il2cpp_runtime_glue(ppUVar1);
  pUVar7 = (__this->fields).SteamWarningZone;
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto LAB_03ff886b;
  pUVar5 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
  pCVar3 = (__this->fields).SteamHitbox;
  if (((pCVar3 == (Characters_BaseHitbox_o *)0x0) ||
      (pUVar8 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)pCVar3,(MethodInfo *)0x0),
      pUVar8 == (UnityEngine_Transform_o *)0x0)) ||
     (pUVar8 = UnityEngine_Transform__get_parent(pUVar8,(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_Transform_o *)0x0)) goto LAB_03ff886b;
  UnityEngine_Transform__SetParent(pUVar5,pUVar8,(MethodInfo *)0x0);
  if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto LAB_03ff886b;
  pUVar5 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
  pCVar3 = (__this->fields).SteamHitbox;
  if (((pCVar3 == (Characters_BaseHitbox_o *)0x0) ||
      (pUVar8 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)pCVar3,(MethodInfo *)0x0),
      pUVar8 == (UnityEngine_Transform_o *)0x0)) ||
     (UVar11 = UnityEngine_Transform__get_localPosition(pUVar8,(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_Transform_o *)0x0)) goto LAB_03ff886b;
  UnityEngine_Transform__set_localPosition(pUVar5,UVar11,(MethodInfo *)0x0);
  if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto LAB_03ff886b;
  pUVar5 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
  pCVar3 = (__this->fields).SteamHitbox;
  if (((pCVar3 == (Characters_BaseHitbox_o *)0x0) ||
      (pUVar8 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)pCVar3,(MethodInfo *)0x0),
      pUVar8 == (UnityEngine_Transform_o *)0x0)) ||
     (value_00 = UnityEngine_Transform__get_localRotation(pUVar8,(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_Transform_o *)0x0)) goto LAB_03ff886b;
  UnityEngine_Transform__set_localRotation(pUVar5,value_00,(MethodInfo *)0x0);
  pUVar7 = *ppUVar1;
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto LAB_03ff886b;
  UnityEngine_GameObject__set_layer
            (pUVar7,*(int32_t *)(*(long *)(TypeInfo_PhysicsLayer + 0xb8) + 0x24),(MethodInfo *)0x0);
  if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto LAB_03ff886b;
  pCVar9 = (Characters_WallColossalSteamWarningZone_o *)
           UnityEngine_GameObject__AddComponent<object>(*ppUVar1,MethodInfo_WallColossalSteamWarningZone_AddComponent_WallCo);
  (__this->fields).SteamWarningZoneComponent = pCVar9;
  il2cpp_runtime_glue(&(__this->fields).SteamWarningZoneComponent,pCVar9);
  pCVar3 = (__this->fields).SteamHitbox;
  if (pCVar3 == (Characters_BaseHitbox_o *)0x0) goto LAB_03ff886b;
  pUVar10 = (UnityEngine_BoxCollider_o *)(pCVar3->fields)._collider;
  if (pUVar10 == (UnityEngine_BoxCollider_o *)0x0) {
LAB_03ff8770:
    __this_01 = (UnityEngine_BoxCollider_o *)0x0;
    pUVar7 = *ppUVar1;
  }
  else {
    bVar2 = (TypeInfo_BoxCollider->_2).naturalAligment;
    if ((pUVar10->klass->_2).naturalAligment < bVar2) goto LAB_03ff8770;
    __this_01 = (UnityEngine_BoxCollider_o *)0x0;
    if ((pUVar10->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_BoxCollider) {
      __this_01 = pUVar10;
    }
    pUVar7 = *ppUVar1;
  }
  if (((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
      (pUVar10 = (UnityEngine_BoxCollider_o *)
                 UnityEngine_GameObject__AddComponent<object>(pUVar7,MethodInfo_BoxCollider_AddComponent_BoxCollider),
      __this_01 != (UnityEngine_BoxCollider_o *)0x0)) &&
     (UVar11 = UnityEngine_BoxCollider__get_center(__this_01,(MethodInfo *)0x0),
     pUVar10 != (UnityEngine_BoxCollider_o *)0x0)) {
    UnityEngine_BoxCollider__set_center(pUVar10,UVar11,(MethodInfo *)0x0);
    UVar11 = UnityEngine_BoxCollider__get_size(__this_01,(MethodInfo *)0x0);
    value.fields.x = UVar11.fields.x * 2.4;
    value.fields.y = UVar11.fields.y * 2.4;
    value.fields.z = UVar11.fields.z * 2.4;
    UnityEngine_BoxCollider__set_size(pUVar10,value,(MethodInfo *)0x0);
    UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)pUVar10,1,(MethodInfo *)0x0);
    if ((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
       (__this_00 = (UnityEngine_Rigidbody_o *)
                    UnityEngine_GameObject__AddComponent<object>(*ppUVar1,MethodInfo_Rigidbody_AddComponent_Rigidbody),
       __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
      UnityEngine_Rigidbody__set_isKinematic(__this_00,1,(MethodInfo *)0x0);
      UnityEngine_Rigidbody__set_useGravity(__this_00,0,(MethodInfo *)0x0);
      if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(*ppUVar1,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03ff886b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


