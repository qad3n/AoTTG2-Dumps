// Type: Characters.BasicTitanComponentCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/BasicTitanComponentCache.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Titan/BasicTitanComponentCache.cs  [CHANGED since prior version]
// --------------------------------

// Characters.BasicTitanComponentCache$$.ctor
// il2cpp: void Characters_BasicTitanComponentCache___ctor (Characters_BasicTitanComponentCache_o* __this, UnityEngine_GameObject_o* owner, const MethodInfo* method);
// 0x4007480

void Characters_BasicTitanComponentCache___ctor
               (Characters_BasicTitanComponentCache_o *__this,UnityEngine_GameObject_o *owner,
               MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Collider_o **ppUVar2;
  UnityEngine_Collider_o **ppUVar3;
  int iVar4;
  Characters_BaseHitbox_array *pCVar5;
  long lVar6;
  uint uVar7;
  bool_conflict bVar8;
  UnityEngine_Transform_o *pUVar9;
  Characters_BaseCharacter_o *owner_00;
  System_Object_array *pSVar10;
  UnityEngine_Object_o *__this_00;
  System_String_o *a;
  UnityEngine_GameObject_o *pUVar11;
  Characters_BaseHitbox_o *pCVar12;
  MethodInfo *extraout_RDX;
  uint uVar13;
  Characters_BaseHitbox_o *__this_01;
  UnityEngine_Collider_o **ppUVar14;
  System_Collections_Generic_List_BaseHitbox__o *__this_02;
  
  if (DAT_0570427c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_init_method_metadata(&MethodInfo_Collider___GetComponentsInChildren_Collider);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&"CrawlerHitbox");
    il2cpp_init_method_metadata(&"BodyHitbox");
    il2cpp_init_method_metadata(&"Amarture_VER2/Core/Controller.Body");
    il2cpp_init_method_metadata(&"head");
    il2cpp_init_method_metadata(&"Amarture_VER2/Core");
    il2cpp_init_method_metadata(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.R/upper_arm.R/forearm.R/hand.R/GrabRSocket");
    il2cpp_init_method_metadata(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck");
    il2cpp_init_method_metadata(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.L/upper_arm.L/forearm.L/hand.L/GrabLSocket");
    il2cpp_init_method_metadata(&"Titans/Prefabs/TitanSounds");
    il2cpp_init_method_metadata(&"ForearmLHurtbox");
    il2cpp_init_method_metadata(&"Amarture_VER2/Core/Controller.Body/hip");
    il2cpp_init_method_metadata(&"ForearmRHurtbox");
    DAT_0570427c = '\x01';
    method = extraout_RDX;
  }
  Characters_BaseTitanComponentCache___ctor
            ((Characters_BaseTitanComponentCache_o *)__this,owner,method);
  pUVar9 = (__this->fields).Transform;
  if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
    pUVar9 = UnityEngine_Transform__Find(pUVar9,"Amarture_VER2/Core",(MethodInfo *)0x0);
    (__this->fields).Core = pUVar9;
    il2cpp_runtime_glue(&(__this->fields).Core,pUVar9);
    pUVar9 = (__this->fields).Transform;
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      pUVar9 = UnityEngine_Transform__Find(pUVar9,"Amarture_VER2/Core/Controller.Body",(MethodInfo *)0x0);
      (__this->fields).Body = pUVar9;
      il2cpp_runtime_glue(&(__this->fields).Body,pUVar9);
      pUVar9 = (__this->fields).Transform;
      if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
        pUVar9 = UnityEngine_Transform__Find(pUVar9,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck",(MethodInfo *)0x0);
        (__this->fields).Neck = pUVar9;
        il2cpp_runtime_glue(&(__this->fields).Neck,pUVar9);
        pUVar9 = (__this->fields).Transform;
        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
          pUVar9 = UnityEngine_Transform__Find(pUVar9,"Amarture_VER2/Core/Controller.Body/hip",(MethodInfo *)0x0);
          (__this->fields).Hip = pUVar9;
          il2cpp_runtime_glue(&(__this->fields).Hip,pUVar9);
          pUVar9 = (__this->fields).Neck;
          if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
            pUVar9 = UnityEngine_Transform__Find(pUVar9,"head",(MethodInfo *)0x0);
            (__this->fields).Head = pUVar9;
            il2cpp_runtime_glue(&(__this->fields).Head,pUVar9);
            pUVar9 = (__this->fields).Transform;
            if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
              pUVar9 = UnityEngine_Transform__Find(pUVar9,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.L/upper_arm.L/forearm.L/hand.L/GrabLSocket",(MethodInfo *)0x0);
              (__this->fields).GrabLSocket = pUVar9;
              il2cpp_runtime_glue(&(__this->fields).GrabLSocket,pUVar9);
              pUVar9 = (__this->fields).Transform;
              if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                pUVar9 = UnityEngine_Transform__Find(pUVar9,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.R/upper_arm.R/forearm.R/hand.R/GrabRSocket",(MethodInfo *)0x0);
                (__this->fields).GrabRSocket = pUVar9;
                il2cpp_runtime_glue(&(__this->fields).GrabRSocket,pUVar9);
                if (owner != (UnityEngine_GameObject_o *)0x0) {
                  owner_00 = (Characters_BaseCharacter_o *)
                             UnityEngine_GameObject__GetComponent<object>(owner,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
                  pCVar12 = MethodInfo_Collider___GetComponentsInChildren_Collider;
                  pSVar10 = UnityEngine_GameObject__GetComponentsInChildren<object>
                                      (owner,(MethodInfo_24F1990 *)MethodInfo_Collider___GetComponentsInChildren_Collider);
                  if (pSVar10 != (System_Object_array *)0x0) {
                    iVar4 = (int)pSVar10->max_length;
                    if (iVar4 < 1) {
LAB_04007928:
                      Characters_BasicTitanComponentCache__SetupParticles
                                (__this,(MethodInfo *)pCVar12);
                      Utility_BaseComponentCache__LoadAudio
                                ((Utility_BaseComponentCache_o *)__this,"Titans/Prefabs/TitanSounds",
                                 (__this->fields).Neck,(MethodInfo *)0x0);
                      return;
                    }
                    ppUVar2 = &(__this->fields).ForearmRHurtbox;
                    ppUVar3 = &(__this->fields).ForearmLHurtbox;
                    uVar13 = 0;
                    if (iVar4 != 0) {
                      do {
                        __this_01 = (Characters_BaseHitbox_o *)pSVar10->m_Items[(int)uVar13];
                        if ((__this_01 == (Characters_BaseHitbox_o *)0x0) ||
                           (__this_00 = (UnityEngine_Object_o *)
                                        UnityEngine_Component__get_gameObject
                                                  ((UnityEngine_Component_o *)__this_01,
                                                   (MethodInfo *)0x0),
                           __this_00 == (UnityEngine_Object_o *)0x0)) goto LAB_04007957;
                        a = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
                        bVar8 = System_String__op_Equality(a,"ForearmLHurtbox",(MethodInfo *)0x0);
                        if ((char)bVar8 == '\0') {
                          bVar8 = System_String__op_Equality(a,"ForearmRHurtbox",(MethodInfo *)0x0);
                          if ((char)bVar8 != '\0') {
                            *ppUVar2 = (UnityEngine_Collider_o *)__this_01;
                            ppUVar14 = ppUVar2;
                            goto LAB_04007756;
                          }
                          bVar8 = System_String__op_Equality(a,"BodyHitbox",(MethodInfo *)0x0);
                          if ((char)bVar8 == '\0') {
                            pCVar12 = "CrawlerHitbox";
                            bVar8 = System_String__op_Equality
                                              (a,(System_String_o *)"CrawlerHitbox",(MethodInfo *)0x0);
                            if ((char)bVar8 == '\0') goto LAB_0400775e;
                            pUVar11 = UnityEngine_Component__get_gameObject
                                                ((UnityEngine_Component_o *)__this_01,
                                                 (MethodInfo *)0x0);
                            pCVar12 = Characters_BaseHitbox__Create
                                                (owner_00,pUVar11,
                                                 (UnityEngine_Collider_o *)__this_01,
                                                 (MethodInfo *)0x0);
                            (__this->fields).CrawlerHitbox = pCVar12;
                            il2cpp_runtime_glue(&(__this->fields).CrawlerHitbox,pCVar12);
                            __this_02 = (__this->fields).Hitboxes;
                            if (__this_02 != (System_Collections_Generic_List_BaseHitbox__o *)0x0) {
                              pCVar12 = (__this->fields).CrawlerHitbox;
                              goto LAB_040078ba;
                            }
                            goto LAB_04007957;
                          }
                          pUVar11 = UnityEngine_Component__get_gameObject
                                              ((UnityEngine_Component_o *)__this_01,
                                               (MethodInfo *)0x0);
                          pCVar12 = Characters_BaseHitbox__Create
                                              (owner_00,pUVar11,(UnityEngine_Collider_o *)__this_01,
                                               (MethodInfo *)0x0);
                          (__this->fields).BodyHitbox = pCVar12;
                          il2cpp_runtime_glue(&(__this->fields).BodyHitbox,pCVar12);
                          __this_02 = (__this->fields).Hitboxes;
                          if (__this_02 == (System_Collections_Generic_List_BaseHitbox__o *)0x0)
                          goto LAB_04007957;
                          pCVar12 = (__this->fields).BodyHitbox;
LAB_040078ba:
                          lVar6 = MethodInfo_Void_Add;
                          piVar1 = &(__this_02->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pCVar5 = (__this_02->fields)._items;
                          if (pCVar5 == (Characters_BaseHitbox_array *)0x0) goto LAB_04007957;
                          uVar7 = (__this_02->fields)._size;
                          if (uVar7 < (uint)pCVar5->max_length) {
                            (__this_02->fields)._size = uVar7 + 1;
                            pCVar5->m_Items[(int)uVar7] = pCVar12;
                            il2cpp_runtime_glue(pCVar5->m_Items + (int)uVar7);
                            uVar7 = (uint)pSVar10->max_length;
                            if ((int)uVar7 <= (int)(uVar13 + 1)) goto LAB_04007928;
                          }
                          else {
                            System_Collections_Generic_List<object>__AddWithResize
                                      ((System_Collections_Generic_List_object__o *)__this_02,
                                       (Il2CppObject *)pCVar12,
                                       *(MethodInfo_35A7350 **)
                                        (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                            uVar7 = (uint)pSVar10->max_length;
                            if ((int)uVar7 <= (int)(uVar13 + 1)) goto LAB_04007928;
                          }
                        }
                        else {
                          *ppUVar3 = (UnityEngine_Collider_o *)__this_01;
                          ppUVar14 = ppUVar3;
LAB_04007756:
                          il2cpp_runtime_glue(ppUVar14);
                          pCVar12 = __this_01;
LAB_0400775e:
                          uVar7 = (uint)pSVar10->max_length;
                          if ((int)uVar7 <= (int)(uVar13 + 1)) goto LAB_04007928;
                        }
                        uVar13 = uVar13 + 1;
                      } while (uVar13 < uVar7);
                    }
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_04007957:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BasicTitanComponentCache$$SetupParticles
// il2cpp: void Characters_BasicTitanComponentCache__SetupParticles (Characters_BasicTitanComponentCache_o* __this, const MethodInfo* method);
// 0x4011980

void Characters_BasicTitanComponentCache__SetupParticles
               (Characters_BasicTitanComponentCache_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o **ppUVar1;
  UnityEngine_Transform_o **ppUVar2;
  UnityEngine_ParticleSystem_o **ppUVar3;
  UnityEngine_ParticleSystem_o **ppUVar4;
  undefined8 uVar5;
  System_String_o *path;
  UnityEngine_Component_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_ParticleSystem_o *pUVar9;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  UnityEngine_Vector3_o value_02;
  UnityEngine_Quaternion_o UVar10;
  
  if (DAT_0570427d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&"Titans/Particles/Prefabs/ArmBloodParticle");
    il2cpp_init_method_metadata(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.R/upper_arm.R/forearm.R");
    il2cpp_init_method_metadata(&"Titans/Particles/Prefabs/NapeBloodParticle");
    il2cpp_init_method_metadata(&"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.L/upper_arm.L/forearm.L");
    il2cpp_init_method_metadata(&"Titans/Particles/Prefabs/ArmSmokeParticle");
    DAT_0570427d = '\x01';
  }
  pUVar7 = (__this->fields).Transform;
  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
    pUVar7 = UnityEngine_Transform__Find(pUVar7,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.L/upper_arm.L/forearm.L",(MethodInfo *)0x0);
    ppUVar1 = &(__this->fields).ForearmL;
    (__this->fields).ForearmL = pUVar7;
    il2cpp_runtime_glue(ppUVar1,pUVar7);
    pUVar7 = (__this->fields).Transform;
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      pUVar7 = UnityEngine_Transform__Find(pUVar7,"Amarture_VER2/Core/Controller.Body/hip/spine/chest/shoulder.R/upper_arm.R/forearm.R",(MethodInfo *)0x0);
      ppUVar2 = &(__this->fields).ForearmR;
      (__this->fields).ForearmR = pUVar7;
      il2cpp_runtime_glue(ppUVar2,pUVar7);
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar8 = (UnityEngine_GameObject_o *)
               ApplicationManagers_ResourceManager__InstantiateAsset<object>
                         (path,"Titans/Particles/Prefabs/ArmBloodParticle",1,MethodInfo_GameObject_InstantiateAsset_GameObject);
      if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
        pUVar9 = (UnityEngine_ParticleSystem_o *)
                 UnityEngine_GameObject__GetComponent<object>(pUVar8,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
        ppUVar3 = &(__this->fields).ForearmBloodL;
        (__this->fields).ForearmBloodL = pUVar9;
        il2cpp_runtime_glue(ppUVar3,pUVar9);
        pUVar8 = (UnityEngine_GameObject_o *)
                 ApplicationManagers_ResourceManager__InstantiateAsset<object>
                           (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),"Titans/Particles/Prefabs/ArmBloodParticle",1
                            ,MethodInfo_GameObject_InstantiateAsset_GameObject);
        if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
          pUVar9 = (UnityEngine_ParticleSystem_o *)
                   UnityEngine_GameObject__GetComponent<object>(pUVar8,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
          ppUVar4 = &(__this->fields).ForearmBloodR;
          (__this->fields).ForearmBloodR = pUVar9;
          il2cpp_runtime_glue(ppUVar4);
          pUVar6 = (UnityEngine_Component_o *)(__this->fields).ForearmBloodL;
          if (pUVar6 != (UnityEngine_Component_o *)0x0) {
            pUVar7 = UnityEngine_Component__get_transform(pUVar6,(MethodInfo *)0x0);
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent(pUVar7,*ppUVar1,(MethodInfo *)0x0);
              if ((UnityEngine_Component_o *)*ppUVar3 != (UnityEngine_Component_o *)0x0) {
                pUVar7 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)*ppUVar3,(MethodInfo *)0x0);
                if (DAT_056fdd15 == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_Vector3);
                  DAT_056fdd15 = '\x01';
                }
                if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__set_localPosition
                            (pUVar7,(UnityEngine_Vector3_o)
                                    **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                             (MethodInfo *)0x0);
                  if ((UnityEngine_Component_o *)*ppUVar3 != (UnityEngine_Component_o *)0x0) {
                    pUVar7 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)*ppUVar3,(MethodInfo *)0x0);
                    UVar10 = UnityEngine_Quaternion__Internal_FromEulerRad
                                       ((UnityEngine_Vector3_o)ZEXT812(0xbfc90fdb),(MethodInfo *)0x0
                                       );
                    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                      UnityEngine_Transform__set_localRotation(pUVar7,UVar10,(MethodInfo *)0x0);
                      if ((UnityEngine_Component_o *)*ppUVar3 != (UnityEngine_Component_o *)0x0) {
                        pUVar7 = UnityEngine_Component__get_transform
                                           ((UnityEngine_Component_o *)*ppUVar3,(MethodInfo *)0x0);
                        if (DAT_056fe077 == '\0') {
                          il2cpp_init_method_metadata(&TypeInfo_Vector3);
                          DAT_056fe077 = '\x01';
                        }
                        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                          uVar5 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
                          value.fields.x = (float)uVar5 * 0.01;
                          value.fields.y = (float)((ulong)uVar5 >> 0x20) * 0.01;
                          value.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * 0.01;
                          UnityEngine_Transform__set_localScale(pUVar7,value,(MethodInfo *)0x0);
                          if ((UnityEngine_Component_o *)*ppUVar4 != (UnityEngine_Component_o *)0x0)
                          {
                            pUVar7 = UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)*ppUVar4,
                                                (MethodInfo *)0x0);
                            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                              UnityEngine_Transform__SetParent(pUVar7,*ppUVar2,(MethodInfo *)0x0);
                              if ((UnityEngine_Component_o *)*ppUVar4 !=
                                  (UnityEngine_Component_o *)0x0) {
                                pUVar7 = UnityEngine_Component__get_transform
                                                   ((UnityEngine_Component_o *)*ppUVar4,
                                                    (MethodInfo *)0x0);
                                if (DAT_056fdd15 == '\0') {
                                  il2cpp_init_method_metadata(&TypeInfo_Vector3);
                                  DAT_056fdd15 = '\x01';
                                }
                                if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                  UnityEngine_Transform__set_localPosition
                                            (pUVar7,(UnityEngine_Vector3_o)
                                                    **(UnityEngine_Vector3_Fields **)
                                                      (TypeInfo_Vector3 + 0xb8),(MethodInfo *)0x0);
                                  if ((UnityEngine_Component_o *)*ppUVar4 !=
                                      (UnityEngine_Component_o *)0x0) {
                                    pUVar7 = UnityEngine_Component__get_transform
                                                       ((UnityEngine_Component_o *)*ppUVar4,
                                                        (MethodInfo *)0x0);
                                    UVar10 = UnityEngine_Quaternion__Internal_FromEulerRad
                                                       ((UnityEngine_Vector3_o)ZEXT812(0xbfc90fdb),
                                                        (MethodInfo *)0x0);
                                    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                      UnityEngine_Transform__set_localRotation
                                                (pUVar7,UVar10,(MethodInfo *)0x0);
                                      if ((UnityEngine_Component_o *)*ppUVar4 !=
                                          (UnityEngine_Component_o *)0x0) {
                                        pUVar7 = UnityEngine_Component__get_transform
                                                           ((UnityEngine_Component_o *)*ppUVar4,
                                                            (MethodInfo *)0x0);
                                        if (DAT_056fe077 == '\0') {
                                          il2cpp_init_method_metadata(&TypeInfo_Vector3);
                                          DAT_056fe077 = '\x01';
                                        }
                                        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                          uVar5 = *(undefined8 *)
                                                   (*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
                                          value_00.fields.x = (float)uVar5 * 0.01;
                                          value_00.fields.y = (float)((ulong)uVar5 >> 0x20) * 0.01;
                                          value_00.fields.z =
                                               *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) *
                                               0.01;
                                          UnityEngine_Transform__set_localScale
                                                    (pUVar7,value_00,(MethodInfo *)0x0);
                                          pUVar8 = (UnityEngine_GameObject_o *)
                                                                                                      
                                                  ApplicationManagers_ResourceManager__InstantiateAsset<object>
                                                            (*(System_String_o **)
                                                              (*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),
                                                             "Titans/Particles/Prefabs/ArmSmokeParticle",1,MethodInfo_GameObject_InstantiateAsset_GameObject);
                                          if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                                            pUVar9 = (UnityEngine_ParticleSystem_o *)
                                                     UnityEngine_GameObject__GetComponent<object>
                                                               (pUVar8,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
                                            (__this->fields).ForearmSmokeL = pUVar9;
                                            il2cpp_runtime_glue(&(__this->fields).ForearmSmokeL,
                                                               pUVar9);
                                            pUVar8 = (UnityEngine_GameObject_o *)
                                                                                                          
                                                  ApplicationManagers_ResourceManager__InstantiateAsset<object>
                                                            (*(System_String_o **)
                                                              (*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),
                                                             "Titans/Particles/Prefabs/ArmSmokeParticle",1,MethodInfo_GameObject_InstantiateAsset_GameObject);
                                            if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                                              pUVar9 = (UnityEngine_ParticleSystem_o *)
                                                       UnityEngine_GameObject__GetComponent<object>
                                                                 (pUVar8,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
                                              ppUVar3 = &(__this->fields).ForearmSmokeR;
                                              (__this->fields).ForearmSmokeR = pUVar9;
                                              il2cpp_runtime_glue(ppUVar3);
                                              pUVar6 = (UnityEngine_Component_o *)
                                                       (__this->fields).ForearmSmokeL;
                                              if (pUVar6 != (UnityEngine_Component_o *)0x0) {
                                                pUVar7 = UnityEngine_Component__get_transform
                                                                   (pUVar6,(MethodInfo *)0x0);
                                                UVar10 = 
                                                  UnityEngine_Quaternion__Internal_FromEulerRad
                                                            ((UnityEngine_Vector3_o)
                                                             ZEXT812(0xbfc90fdb),(MethodInfo *)0x0);
                                                if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                  UnityEngine_Transform__set_rotation
                                                            (pUVar7,UVar10,(MethodInfo *)0x0);
                                                  pUVar6 = (UnityEngine_Component_o *)*ppUVar3;
                                                  if (pUVar6 != (UnityEngine_Component_o *)0x0) {
                                                    pUVar7 = UnityEngine_Component__get_transform
                                                                       (pUVar6,(MethodInfo *)0x0);
                                                    UVar10 = 
                                                  UnityEngine_Quaternion__Internal_FromEulerRad
                                                            ((UnityEngine_Vector3_o)
                                                             ZEXT812(0xbfc90fdb),(MethodInfo *)0x0);
                                                  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                    UnityEngine_Transform__set_rotation
                                                              (pUVar7,UVar10,(MethodInfo *)0x0);
                                                    pUVar8 = (UnityEngine_GameObject_o *)
                                                                                                                          
                                                  ApplicationManagers_ResourceManager__InstantiateAsset<object>
                                                            (*(System_String_o **)
                                                              (*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),
                                                             "Titans/Particles/Prefabs/NapeBloodParticle",1,MethodInfo_GameObject_InstantiateAsset_GameObject);
                                                  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                                                    pUVar9 = (UnityEngine_ParticleSystem_o *)
                                                                                                                          
                                                  UnityEngine_GameObject__GetComponent<object>
                                                            (pUVar8,MethodInfo_ParticleSystem_GetComponent_ParticleSystem);
                                                  ppUVar3 = &(__this->fields).NapeBlood;
                                                  (__this->fields).NapeBlood = pUVar9;
                                                  il2cpp_runtime_glue(ppUVar3);
                                                  pUVar6 = (UnityEngine_Component_o *)
                                                           (__this->fields).NapeBlood;
                                                  if (pUVar6 != (UnityEngine_Component_o *)0x0) {
                                                    pUVar7 = UnityEngine_Component__get_transform
                                                                       (pUVar6,(MethodInfo *)0x0);
                                                    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                      UnityEngine_Transform__SetParent
                                                                (pUVar7,(__this->fields).Neck,
                                                                 (MethodInfo *)0x0);
                                                      pUVar6 = (UnityEngine_Component_o *)
                                                               (__this->fields).NapeBlood;
                                                      if (pUVar6 != (UnityEngine_Component_o *)0x0)
                                                      {
                                                        pUVar7 = 
                                                  UnityEngine_Component__get_transform
                                                            (pUVar6,(MethodInfo *)0x0);
                                                  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                    value_01.fields.z = -0.1;
                                                    value_01.fields.x = 0.0;
                                                    value_01.fields.y = 0.02;
                                                    UnityEngine_Transform__set_localPosition
                                                              (pUVar7,value_01,(MethodInfo *)0x0);
                                                    if ((UnityEngine_Component_o *)*ppUVar3 !=
                                                        (UnityEngine_Component_o *)0x0) {
                                                      pUVar7 = UnityEngine_Component__get_transform
                                                                         ((UnityEngine_Component_o *
                                                                          )*ppUVar3,
                                                                          (MethodInfo *)0x0);
                                                      UVar10 = 
                                                  UnityEngine_Quaternion__Internal_FromEulerRad
                                                            ((UnityEngine_Vector3_o)
                                                             ZEXT812(0x40490fdb00000000),
                                                             (MethodInfo *)0x0);
                                                  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                                    UnityEngine_Transform__set_localRotation
                                                              (pUVar7,UVar10,(MethodInfo *)0x0);
                                                    if ((UnityEngine_Component_o *)*ppUVar3 !=
                                                        (UnityEngine_Component_o *)0x0) {
                                                      pUVar7 = UnityEngine_Component__get_transform
                                                                         ((UnityEngine_Component_o *
                                                                          )*ppUVar3,
                                                                          (MethodInfo *)0x0);
                                                      if (DAT_056fe077 == '\0') {
                                                        il2cpp_init_method_metadata(&TypeInfo_Vector3);
                                                        DAT_056fe077 = '\x01';
                                                      }
                                                      if (pUVar7 != (UnityEngine_Transform_o *)0x0)
                                                      {
                                                        uVar5 = *(undefined8 *)
                                                                 (*(long *)(TypeInfo_Vector3 + 0xb8) +
                                                                 0xc);
                                                        value_02.fields.x = (float)uVar5 * 0.01;
                                                        value_02.fields.y =
                                                             (float)((ulong)uVar5 >> 0x20) * 0.01;
                                                        value_02.fields.z =
                                                             *(float *)(*(long *)(TypeInfo_Vector3 +
                                                                                 0xb8) + 0x14) *
                                                             0.01;
                                                        UnityEngine_Transform__set_localScale
                                                                  (pUVar7,value_02,(MethodInfo *)0x0
                                                                  );
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


