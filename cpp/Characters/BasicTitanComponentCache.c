// Type: Characters.BasicTitanComponentCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BasicTitanComponentCache.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BasicTitanComponentCache.cs
// --------------------------------

// Characters.BasicTitanComponentCache$$.ctor
// il2cpp: void Characters_BasicTitanComponentCache___ctor (Characters_BasicTitanComponentCache_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x4313d90

void Characters_BasicTitanComponentCache___ctor
               (Characters_BasicTitanComponentCache_o *__this,UnityEngine_GameObject_o *owner,
               MethodInfo *method)

{
  UnityEngine_Collider_o **ppUVar1;
  UnityEngine_Collider_o **ppUVar2;
  int iVar3;
  UnityEngine_Transform_o *pUVar4;
  InvokerMethod pIVar5;
  undefined1 *puVar6;
  long lVar7;
  uint uVar8;
  bool_conflict bVar9;
  Characters_BaseTitan_o *method_00;
  Characters_BaseCharacter_o *owner_00;
  System_Object_array *pSVar10;
  UnityEngine_Object_o *__this_00;
  Characters_BaseTitan_o *__this_01;
  UnityEngine_GameObject_o *pUVar11;
  Characters_BasicTitanAnimations_o *__this_02;
  MethodInfo *extraout_RDX;
  uint uVar12;
  Characters_BaseTitan_o *__this_03;
  
  if (g_data_057adfea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponentsInChildren_Collider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"CrawlerHitbox");
    il2cpp_runtime_helper_023445d0(&"BodyHitbox");
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2/Core/Controller.Body");
    il2cpp_runtime_helper_023445d0(&"head");
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2/Core");
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.R/upper_arm.R/forearm.R/hand.R/GrabRSocket");
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck");
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.L/upper_arm.L/forearm.L/hand.L/GrabLSocket");
    il2cpp_runtime_helper_023445d0(&"Titans/Prefabs/TitanSounds");
    il2cpp_runtime_helper_023445d0(&"ForearmLHurtbox");
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2/Core/Controller.Body/hip");
    il2cpp_runtime_helper_023445d0(&"ForearmRHurtbox");
    g_data_057adfea = '\x01';
    method = extraout_RDX;
  }
  method_00 = (Characters_BaseTitan_o *)owner;
  Characters_BaseTitanComponentCache___ctor((Characters_BaseTitanComponentCache_o *)__this,owner,method);
  pUVar4 = (__this->fields).Transform;
  __this_01 = (Characters_BaseTitan_o *)0x0;
  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
    method_00 = (Characters_BaseTitan_o *)UnityEngine_Transform__Find(pUVar4,"Amarture_VER2/Core",(MethodInfo *)0x0);
    (__this->fields).Core = (UnityEngine_Transform_o *)method_00;
    il2cpp_runtime_helper_022b4080(&(__this->fields).Core);
    pUVar4 = (__this->fields).Transform;
    __this_01 = (Characters_BaseTitan_o *)0x0;
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      method_00 = (Characters_BaseTitan_o *)UnityEngine_Transform__Find(pUVar4,"Amarture_VER2/Core/Controller.Body",(MethodInfo *)0x0)
      ;
      (__this->fields).Body = (UnityEngine_Transform_o *)method_00;
      il2cpp_runtime_helper_022b4080(&(__this->fields).Body);
      pUVar4 = (__this->fields).Transform;
      __this_01 = (Characters_BaseTitan_o *)0x0;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        method_00 = (Characters_BaseTitan_o *)
                    UnityEngine_Transform__Find(pUVar4,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck",(MethodInfo *)0x0);
        (__this->fields).Neck = (UnityEngine_Transform_o *)method_00;
        il2cpp_runtime_helper_022b4080(&(__this->fields).Neck);
        pUVar4 = (__this->fields).Transform;
        __this_01 = (Characters_BaseTitan_o *)0x0;
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          method_00 = (Characters_BaseTitan_o *)
                      UnityEngine_Transform__Find(pUVar4,"Amarture_VER2/Core/Controller.Body/hip",(MethodInfo *)0x0);
          (__this->fields).Hip = (UnityEngine_Transform_o *)method_00;
          il2cpp_runtime_helper_022b4080(&(__this->fields).Hip);
          pUVar4 = (__this->fields).Neck;
          __this_01 = (Characters_BaseTitan_o *)0x0;
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            method_00 = (Characters_BaseTitan_o *)
                        UnityEngine_Transform__Find(pUVar4,"head",(MethodInfo *)0x0);
            (__this->fields).Head = (UnityEngine_Transform_o *)method_00;
            il2cpp_runtime_helper_022b4080(&(__this->fields).Head);
            pUVar4 = (__this->fields).Transform;
            __this_01 = (Characters_BaseTitan_o *)0x0;
            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
              method_00 = (Characters_BaseTitan_o *)
                          UnityEngine_Transform__Find(pUVar4,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.L/upper_arm.L/forearm.L/hand.L/GrabLSocket",(MethodInfo *)0x0);
              (__this->fields).GrabLSocket = (UnityEngine_Transform_o *)method_00;
              il2cpp_runtime_helper_022b4080(&(__this->fields).GrabLSocket);
              pUVar4 = (__this->fields).Transform;
              __this_01 = (Characters_BaseTitan_o *)0x0;
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                method_00 = (Characters_BaseTitan_o *)
                            UnityEngine_Transform__Find(pUVar4,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.R/upper_arm.R/forearm.R/hand.R/GrabRSocket",(MethodInfo *)0x0);
                __this_01 = (Characters_BaseTitan_o *)&(__this->fields).GrabRSocket;
                (__this->fields).GrabRSocket = (UnityEngine_Transform_o *)method_00;
                il2cpp_runtime_helper_022b4080();
                if (owner != (UnityEngine_GameObject_o *)0x0) {
                  owner_00 = (Characters_BaseCharacter_o *)
                             UnityEngine_GameObject__GetComponent_object_(owner,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
                  method_00 = MethodInfo_Collider_GetComponentsInChildren_Collider;
                  pSVar10 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                                      (owner,(MethodInfo_255AB00 *)MethodInfo_Collider_GetComponentsInChildren_Collider);
                  __this_01 = (Characters_BaseTitan_o *)owner;
                  if (pSVar10 != (System_Object_array *)0x0) {
                    iVar3 = (int)pSVar10->max_length;
                    if (iVar3 < 1) {
label_04314238:
                      Characters_BasicTitanComponentCache__SetupParticles(__this,(MethodInfo *)method_00);
                      Utility_BaseComponentCache__LoadAudio
                                ((Utility_BaseComponentCache_o *)__this,"Titans/Prefabs/TitanSounds",(__this->fields).Neck,
                                 (MethodInfo *)0x0);
                      return;
                    }
                    ppUVar1 = &(__this->fields).ForearmRHurtbox;
                    ppUVar2 = &(__this->fields).ForearmLHurtbox;
                    uVar12 = 0;
                    if (iVar3 != 0) {
                      do {
                        __this_03 = (Characters_BaseTitan_o *)pSVar10->m_Items[(int)uVar12];
                        if (__this_03 == (Characters_BaseTitan_o *)0x0) goto label_04314267;
                        method_00 = (Characters_BaseTitan_o *)0x0;
                        __this_01 = __this_03;
                        __this_00 = (UnityEngine_Object_o *)
                                    UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                        if (__this_00 == (UnityEngine_Object_o *)0x0) goto label_04314267;
                        __this_01 = (Characters_BaseTitan_o *)
                                    UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
                        bVar9 = System_String__op_Equality
                                          ((System_String_o *)__this_01,"ForearmLHurtbox",(MethodInfo *)0x0);
                        if ((char)bVar9 == '\0') {
                          bVar9 = System_String__op_Equality
                                            ((System_String_o *)__this_01,"ForearmRHurtbox",(MethodInfo *)0x0);
                          if ((char)bVar9 != '\0') {
                            *ppUVar1 = (UnityEngine_Collider_o *)__this_03;
                            __this_01 = (Characters_BaseTitan_o *)ppUVar1;
                            goto label_04314066;
                          }
                          bVar9 = System_String__op_Equality
                                            ((System_String_o *)__this_01,"BodyHitbox",(MethodInfo *)0x0);
                          if ((char)bVar9 == '\0') {
                            method_00 = "CrawlerHitbox";
                            bVar9 = System_String__op_Equality
                                              ((System_String_o *)__this_01,(System_String_o *)"CrawlerHitbox",
                                               (MethodInfo *)0x0);
                            if ((char)bVar9 == '\0') goto label_0431406e;
                            pUVar11 = UnityEngine_Component__get_gameObject
                                                ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                            method_00 = (Characters_BaseTitan_o *)
                                        Characters_BaseHitbox__Create
                                                  (owner_00,pUVar11,(UnityEngine_Collider_o *)__this_03,
                                                   (MethodInfo *)0x0);
                            (__this->fields).CrawlerHitbox = (Characters_BaseHitbox_o *)method_00;
                            il2cpp_runtime_helper_022b4080(&(__this->fields).CrawlerHitbox);
                            __this_01 = (Characters_BaseTitan_o *)(__this->fields).Hitboxes;
                            if (__this_01 != (Characters_BaseTitan_o *)0x0) {
                              method_00 = (Characters_BaseTitan_o *)(__this->fields).CrawlerHitbox;
                              goto label_043141ca;
                            }
                            goto label_04314267;
                          }
                          pUVar11 = UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
                          method_00 = (Characters_BaseTitan_o *)
                                      Characters_BaseHitbox__Create
                                                (owner_00,pUVar11,(UnityEngine_Collider_o *)__this_03,
                                                 (MethodInfo *)0x0);
                          (__this->fields).BodyHitbox = (Characters_BaseHitbox_o *)method_00;
                          il2cpp_runtime_helper_022b4080(&(__this->fields).BodyHitbox);
                          __this_01 = (Characters_BaseTitan_o *)(__this->fields).Hitboxes;
                          if (__this_01 == (Characters_BaseTitan_o *)0x0) goto label_04314267;
                          method_00 = (Characters_BaseTitan_o *)(__this->fields).BodyHitbox;
label_043141ca:
                          lVar7 = MethodInfo_Void_Add;
                          puVar6 = (undefined1 *)((long)&(__this_01->fields).m_CancellationTokenSource + 4);
                          *(int *)puVar6 = *(int *)puVar6 + 1;
                          pIVar5 = (InvokerMethod)(__this_01->fields).m_CachedPtr;
                          if (pIVar5 == (InvokerMethod)0x0) goto label_04314267;
                          uVar8 = *(uint *)&(__this_01->fields).m_CancellationTokenSource;
                          if (uVar8 < *(uint *)(pIVar5 + 0x18)) {
                            *(uint *)&(__this_01->fields).m_CancellationTokenSource = uVar8 + 1;
                            __this_01 = (Characters_BaseTitan_o *)(pIVar5 + (long)(int)uVar8 * 8 + 0x20);
                            *(Characters_BaseTitan_o **)(pIVar5 + (long)(int)uVar8 * 8 + 0x20) = method_00;
                            il2cpp_runtime_helper_022b4080();
                            uVar8 = (uint)pSVar10->max_length;
                            if ((int)uVar8 <= (int)(uVar12 + 1)) goto label_04314238;
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      ((System_Collections_Generic_List_object__o *)__this_01,
                                       (Il2CppObject *)method_00,
                                       *(MethodInfo_362C220 **)
                                        (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                            uVar8 = (uint)pSVar10->max_length;
                            if ((int)uVar8 <= (int)(uVar12 + 1)) goto label_04314238;
                          }
                        }
                        else {
                          *ppUVar2 = (UnityEngine_Collider_o *)__this_03;
                          __this_01 = (Characters_BaseTitan_o *)ppUVar2;
label_04314066:
                          il2cpp_runtime_helper_022b4080();
                          method_00 = __this_03;
label_0431406e:
                          uVar8 = (uint)pSVar10->max_length;
                          if ((int)uVar8 <= (int)(uVar12 + 1)) goto label_04314238;
                        }
                        uVar12 = uVar12 + 1;
                        owner = (UnityEngine_GameObject_o *)__this_01;
                      } while (uVar12 < uVar8);
                    }
                    goto label_0431426c;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_04314267:
  il2cpp_runtime_helper_022b2c90();
  owner = (UnityEngine_GameObject_o *)__this_01;
label_0431426c:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adfbb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitanAnimations);
    g_data_057adfbb = '\x01';
  }
  __this_02 = (Characters_BasicTitanAnimations_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BasicTitanAnimations);
  Characters_BasicTitanAnimations___ctor(__this_02,(MethodInfo *)method_00);
  *(Characters_BasicTitanAnimations_o **)
   &(((Characters_BaseTitan_o *)owner)->fields)._furthestCoreLocalPosition.fields.z = __this_02;
  il2cpp_runtime_helper_022b4080(&(((Characters_BaseTitan_o *)owner)->fields)._furthestCoreLocalPosition.fields.z,
                     __this_02);
  Characters_BaseTitan__CreateAnimations
            ((Characters_BaseTitan_o *)owner,
             *(Characters_BaseTitanAnimations_o **)
              &(((Characters_BaseTitan_o *)owner)->fields)._furthestCoreLocalPosition.fields.z,
             (MethodInfo *)0x0);
  return;
}


// Characters.BasicTitanComponentCache$$SetupParticles
// il2cpp: void Characters_BasicTitanComponentCache__SetupParticles (Characters_BasicTitanComponentCache_o* __this, const MethodInfo* method);
// 0x431e380

void Characters_BasicTitanComponentCache__SetupParticles
               (Characters_BasicTitanComponentCache_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o **ppUVar1;
  UnityEngine_Transform_o **ppUVar2;
  UnityEngine_ParticleSystem_o **ppUVar3;
  UnityEngine_ParticleSystem_o **ppUVar4;
  undefined8 uVar5;
  UnityEngine_Component_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_ParticleSystem_o *pUVar9;
  Characters_BaseMovementSync_c *pCVar10;
  Characters_BaseMovementSync_o *__this_00;
  UnityEngine_Quaternion_o UVar11;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o value_02;
  
  if (g_data_057adfeb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&"Titans/Particles/Prefabs/ArmBloodParticle");
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.R/upper_arm.R/forearm.R");
    il2cpp_runtime_helper_023445d0(&"Titans/Particles/Prefabs/NapeBloodParticle");
    il2cpp_runtime_helper_023445d0(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.L/upper_arm.L/forearm.L");
    il2cpp_runtime_helper_023445d0(&"Titans/Particles/Prefabs/ArmSmokeParticle");
    g_data_057adfeb = '\x01';
  }
  pUVar7 = (__this->fields).Transform;
  __this_00 = (Characters_BaseMovementSync_o *)0x0;
  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
    pUVar7 = UnityEngine_Transform__Find(pUVar7,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.L/upper_arm.L/forearm.L",(MethodInfo *)0x0);
    ppUVar1 = &(__this->fields).ForearmL;
    (__this->fields).ForearmL = pUVar7;
    il2cpp_runtime_helper_022b4080(ppUVar1);
    pUVar7 = (__this->fields).Transform;
    __this_00 = (Characters_BaseMovementSync_o *)0x0;
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      pUVar7 = UnityEngine_Transform__Find(pUVar7,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.R/upper_arm.R/forearm.R",(MethodInfo *)0x0);
      ppUVar2 = &(__this->fields).ForearmR;
      (__this->fields).ForearmR = pUVar7;
      il2cpp_runtime_helper_022b4080(ppUVar2,pUVar7);
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_00 = *(Characters_BaseMovementSync_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar8 = (UnityEngine_GameObject_o *)
               ApplicationManagers_ResourceManager__InstantiateAsset_object_
                         ((System_String_o *)__this_00,"Titans/Particles/Prefabs/ArmBloodParticle",1,MethodInfo_GameObject_InstantiateAsset_GameObject);
      if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
        pUVar9 = (UnityEngine_ParticleSystem_o *)
                 UnityEngine_GameObject__GetComponent_object_(pUVar8,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
        ppUVar3 = &(__this->fields).ForearmBloodL;
        (__this->fields).ForearmBloodL = pUVar9;
        il2cpp_runtime_helper_022b4080(ppUVar3,pUVar9);
        __this_00 = *(Characters_BaseMovementSync_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
        pUVar8 = (UnityEngine_GameObject_o *)
                 ApplicationManagers_ResourceManager__InstantiateAsset_object_
                           ((System_String_o *)__this_00,"Titans/Particles/Prefabs/ArmBloodParticle",1,MethodInfo_GameObject_InstantiateAsset_GameObject);
        if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
          pUVar9 = (UnityEngine_ParticleSystem_o *)
                   UnityEngine_GameObject__GetComponent_object_(pUVar8,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
          ppUVar4 = &(__this->fields).ForearmBloodR;
          (__this->fields).ForearmBloodR = pUVar9;
          il2cpp_runtime_helper_022b4080(ppUVar4);
          __this_00 = (Characters_BaseMovementSync_o *)(__this->fields).ForearmBloodL;
          if (__this_00 != (Characters_BaseMovementSync_o *)0x0) {
            pUVar7 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent(pUVar7,*ppUVar1,(MethodInfo *)0x0);
              __this_00 = (Characters_BaseMovementSync_o *)*ppUVar3;
              if (__this_00 != (Characters_BaseMovementSync_o *)0x0) {
                pUVar7 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                if (g_data_057a65d5 == '\0') {
                  __this_00 = (Characters_BaseMovementSync_o *)&TypeInfo_Vector3;
                  il2cpp_runtime_helper_023445d0();
                  g_data_057a65d5 = '\x01';
                }
                if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__set_localPosition
                            (pUVar7,(UnityEngine_Vector3_o)
                                    **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),(MethodInfo *)0x0);
                  __this_00 = (Characters_BaseMovementSync_o *)0x0;
                  if ((UnityEngine_Component_o *)*ppUVar3 != (UnityEngine_Component_o *)0x0) {
                    pUVar7 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)*ppUVar3,(MethodInfo *)0x0);
                    __this_00 = (Characters_BaseMovementSync_o *)0x0;
                    UVar11 = UnityEngine_Quaternion__Internal_FromEulerRad
                                       ((UnityEngine_Vector3_o)ZEXT812(0xbfc90fdb),(MethodInfo *)0x0);
                    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                      UnityEngine_Transform__set_localRotation(pUVar7,UVar11,(MethodInfo *)0x0);
                      __this_00 = (Characters_BaseMovementSync_o *)*ppUVar3;
                      if (__this_00 != (Characters_BaseMovementSync_o *)0x0) {
                        pUVar7 = UnityEngine_Component__get_transform
                                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                        if (g_data_057a6932 == '\0') {
                          __this_00 = (Characters_BaseMovementSync_o *)&TypeInfo_Vector3;
                          il2cpp_runtime_helper_023445d0();
                          g_data_057a6932 = '\x01';
                        }
                        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                          uVar5 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
                          value.fields.x = (float)uVar5 * 0.01;
                          value.fields.y = (float)((ulong)uVar5 >> 0x20) * 0.01;
                          value.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * 0.01;
                          UnityEngine_Transform__set_localScale(pUVar7,value,(MethodInfo *)0x0);
                          __this_00 = (Characters_BaseMovementSync_o *)*ppUVar4;
                          if (__this_00 != (Characters_BaseMovementSync_o *)0x0) {
                            pUVar7 = UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                              UnityEngine_Transform__SetParent(pUVar7,*ppUVar2,(MethodInfo *)0x0);
                              __this_00 = (Characters_BaseMovementSync_o *)*ppUVar4;
                              if (__this_00 != (Characters_BaseMovementSync_o *)0x0) {
                                pUVar7 = UnityEngine_Component__get_transform
                                                   ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                                if (g_data_057a65d5 == '\0') {
                                  __this_00 = (Characters_BaseMovementSync_o *)&TypeInfo_Vector3;
                                  il2cpp_runtime_helper_023445d0();
                                  g_data_057a65d5 = '\x01';
                                }
                                if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                  UnityEngine_Transform__set_localPosition
                                            (pUVar7,(UnityEngine_Vector3_o)
                                                    **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                                             (MethodInfo *)0x0);
                                  __this_00 = (Characters_BaseMovementSync_o *)0x0;
                                  if ((UnityEngine_Component_o *)*ppUVar4 != (UnityEngine_Component_o *)0x0) {
                                    pUVar7 = UnityEngine_Component__get_transform
                                                       ((UnityEngine_Component_o *)*ppUVar4,(MethodInfo *)0x0)
                                    ;
                                    __this_00 = (Characters_BaseMovementSync_o *)0x0;
                                    UVar11 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                       ((UnityEngine_Vector3_o)ZEXT812(0xbfc90fdb),
                                                        (MethodInfo *)0x0);
                                    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                      UnityEngine_Transform__set_localRotation
                                                (pUVar7,UVar11,(MethodInfo *)0x0);
                                      __this_00 = (Characters_BaseMovementSync_o *)*ppUVar4;
                                      if (__this_00 != (Characters_BaseMovementSync_o *)0x0) {
                                        pUVar7 = UnityEngine_Component__get_transform
                                                           ((UnityEngine_Component_o *)__this_00,
                                                            (MethodInfo *)0x0);
                                        if (g_data_057a6932 == '\0') {
                                          __this_00 = (Characters_BaseMovementSync_o *)&TypeInfo_Vector3;
                                          il2cpp_runtime_helper_023445d0();
                                          g_data_057a6932 = '\x01';
                                        }
                                        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                          uVar5 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
                                          value_00.fields.x = (float)uVar5 * 0.01;
                                          value_00.fields.y = (float)((ulong)uVar5 >> 0x20) * 0.01;
                                          value_00.fields.z =
                                               *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * 0.01;
                                          UnityEngine_Transform__set_localScale
                                                    (pUVar7,value_00,(MethodInfo *)0x0);
                                          __this_00 = *(Characters_BaseMovementSync_o **)
                                                       (*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
                                          pUVar8 = (UnityEngine_GameObject_o *)
                                                   ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                                             ((System_String_o *)__this_00,"Titans/Particles/Prefabs/ArmSmokeParticle",1,
                                                              MethodInfo_GameObject_InstantiateAsset_GameObject);
                                          if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                                            pUVar9 = (UnityEngine_ParticleSystem_o *)
                                                     UnityEngine_GameObject__GetComponent_object_
                                                               (pUVar8,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
                                            (__this->fields).ForearmSmokeL = pUVar9;
                                            il2cpp_runtime_helper_022b4080(&(__this->fields).ForearmSmokeL,pUVar9);
                                            __this_00 = *(Characters_BaseMovementSync_o **)
                                                         (*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
                                            pUVar8 = (UnityEngine_GameObject_o *)
                                                     ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                                               ((System_String_o *)__this_00,"Titans/Particles/Prefabs/ArmSmokeParticle",1,
                                                                MethodInfo_GameObject_InstantiateAsset_GameObject);
                                            if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                                              pUVar9 = (UnityEngine_ParticleSystem_o *)
                                                       UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar8,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
                                              ppUVar3 = &(__this->fields).ForearmSmokeR;
                                              (__this->fields).ForearmSmokeR = pUVar9;
                                              il2cpp_runtime_helper_022b4080(ppUVar3);
                                              pUVar6 = (UnityEngine_Component_o *)
                                                       (__this->fields).ForearmSmokeL;
                                              __this_00 = (Characters_BaseMovementSync_o *)0x0;
                                              if (pUVar6 != (UnityEngine_Component_o *)0x0) {
                                                pUVar7 = UnityEngine_Component__get_transform
                                                                   (pUVar6,(MethodInfo *)0x0);
                                                __this_00 = (Characters_BaseMovementSync_o *)0x0;
                                                UVar11 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                                   ((UnityEngine_Vector3_o)ZEXT812(0xbfc90fdb)
                                                                    ,(MethodInfo *)0x0);
                                                if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                  UnityEngine_Transform__set_rotation
                                                            (pUVar7,UVar11,(MethodInfo *)0x0);
                                                  pUVar6 = (UnityEngine_Component_o *)*ppUVar3;
                                                  __this_00 = (Characters_BaseMovementSync_o *)0x0;
                                                  if (pUVar6 != (UnityEngine_Component_o *)0x0) {
                                                    pUVar7 = UnityEngine_Component__get_transform
                                                                       (pUVar6,(MethodInfo *)0x0);
                                                    __this_00 = (Characters_BaseMovementSync_o *)0x0;
                                                    UVar11 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                                       ((UnityEngine_Vector3_o)
                                                                        ZEXT812(0xbfc90fdb),(MethodInfo *)0x0)
                                                    ;
                                                    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                      UnityEngine_Transform__set_rotation
                                                                (pUVar7,UVar11,(MethodInfo *)0x0);
                                                      __this_00 = *(Characters_BaseMovementSync_o **)
                                                                   (*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
                                                      pUVar8 = (UnityEngine_GameObject_o *)
                                                                                                                              
                                                       ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                                                 ((System_String_o *)__this_00,"Titans/Particles/Prefabs/NapeBloodParticle",1,
                                                                  MethodInfo_GameObject_InstantiateAsset_GameObject);
                                                      if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                                                        pUVar9 = (UnityEngine_ParticleSystem_o *)
                                                                 UnityEngine_GameObject__GetComponent_object_
                                                                           (pUVar8,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
                                                        ppUVar3 = &(__this->fields).NapeBlood;
                                                        (__this->fields).NapeBlood = pUVar9;
                                                        il2cpp_runtime_helper_022b4080(ppUVar3);
                                                        __this_00 = (Characters_BaseMovementSync_o *)
                                                                    (__this->fields).NapeBlood;
                                                        if (__this_00 != (Characters_BaseMovementSync_o *)0x0)
                                                        {
                                                          pUVar7 = UnityEngine_Component__get_transform
                                                                             ((UnityEngine_Component_o *)
                                                                              __this_00,(MethodInfo *)0x0);
                                                          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                            UnityEngine_Transform__SetParent
                                                                      (pUVar7,(__this->fields).Neck,
                                                                       (MethodInfo *)0x0);
                                                            __this_00 = (Characters_BaseMovementSync_o *)
                                                                        (__this->fields).NapeBlood;
                                                            if (__this_00 !=
                                                                (Characters_BaseMovementSync_o *)0x0) {
                                                              pUVar7 = UnityEngine_Component__get_transform
                                                                                 ((UnityEngine_Component_o *)
                                                                                  __this_00,(MethodInfo *)0x0)
                                                              ;
                                                              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                                value_01.fields.z = -0.1;
                                                                value_01.fields.x = 0.0;
                                                                value_01.fields.y = 0.02;
                                                                UnityEngine_Transform__set_localPosition
                                                                          (pUVar7,value_01,(MethodInfo *)0x0);
                                                                __this_00 = (Characters_BaseMovementSync_o *)
                                                                            0x0;
                                                                if ((UnityEngine_Component_o *)*ppUVar3 !=
                                                                    (UnityEngine_Component_o *)0x0) {
                                                                  pUVar7 = 
                                                       UnityEngine_Component__get_transform
                                                                 ((UnityEngine_Component_o *)*ppUVar3,
                                                                  (MethodInfo *)0x0);
                                                       __this_00 = (Characters_BaseMovementSync_o *)0x0;
                                                       UVar11 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                                          ((UnityEngine_Vector3_o)
                                                                           ZEXT812(0x40490fdb00000000),
                                                                           (MethodInfo *)0x0);
                                                       if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                         UnityEngine_Transform__set_localRotation
                                                                   (pUVar7,UVar11,(MethodInfo *)0x0);
                                                         __this_00 = (Characters_BaseMovementSync_o *)*ppUVar3
                                                         ;
                                                         if (__this_00 != (Characters_BaseMovementSync_o *)0x0
                                                            ) {
                                                           pUVar7 = UnityEngine_Component__get_transform
                                                                              ((UnityEngine_Component_o *)
                                                                               __this_00,(MethodInfo *)0x0);
                                                           if (g_data_057a6932 == '\0') {
                                                             __this_00 = (Characters_BaseMovementSync_o *)
                                                                         &TypeInfo_Vector3;
                                                             il2cpp_runtime_helper_023445d0();
                                                             g_data_057a6932 = '\x01';
                                                           }
                                                           if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                             uVar5 = *(undefined8 *)
                                                                      (*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
                                                             value_02.fields.x = (float)uVar5 * 0.01;
                                                             value_02.fields.y =
                                                                  (float)((ulong)uVar5 >> 0x20) * 0.01;
                                                             value_02.fields.z =
                                                                  *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) +
                                                                            0x14) * 0.01;
                                                             UnityEngine_Transform__set_localScale
                                                                       (pUVar7,value_02,(MethodInfo *)0x0);
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adfec == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasicTitan_GetComponent_BasicTitan);
    g_data_057adfec = '\x01';
  }
  Characters_BaseMovementSync__Awake(__this_00,(MethodInfo *)0x0);
  pCVar10 = (Characters_BaseMovementSync_c *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_00,MethodInfo_BasicTitan_GetComponent_BasicTitan);
  __this_00[1].klass = pCVar10;
  il2cpp_runtime_helper_022b4080(__this_00 + 1,pCVar10);
  return;
}


